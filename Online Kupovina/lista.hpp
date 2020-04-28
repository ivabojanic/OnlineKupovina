#ifndef LISTA_DEF
#define LISTA_DEF

#include <stdlib.h>
#include <iostream>

using namespace std;

template <class T>
class Lista{
private:
		struct ELEMENT{
			T data;
			struct ELEMENT* next;
		};
		ELEMENT *head;
		ELEMENT *tail;
		int brojE;
public:
		Lista(){head = NULL; tail = NULL; brojE = 0;}
		Lista( Lista<T> &L)
		{
		    head = NULL;
		    tail = NULL;
		    brojE = 0;
		    for(int i = 1;i <= L.velicina(); ++i)
            {
                T prom;
                if(L.citaj(i,prom))
                {
                     dodaj(i,prom);
                }
            }
		}
        ~Lista(){obrisiListu();}
		int velicina()const {return brojE;}
		bool praznaLista()const
		{
		    if(head == NULL)
            {
                return true;
            }else
                return false;
		}
		bool dodajElement(int mesto, const T &data)
		{
		    if(mesto <= 1 || mesto >= brojE+1)
            {
                return false;
            }else
            {
                ELEMENT* noviEl = new ELEMENT;
                noviEl ->data = data;
                if(mesto == 1)
                {
                    noviEl ->next = head;
                    head = noviEl;
                }else if( mesto == brojE + 1)
                {
                    tail ->next = noviEl;
                    noviEl ->next = NULL;
                }else
                {
                    ELEMENT* prom = head;
                    for(int i = 0; i < mesto ; i++)
                    {
                        prom = prom ->next;
                    }
                    noviEl->next = prom->next;
                    prom->next = noviEl;
                }
                if(noviEl->next == NULL)
                {
                    tail = noviEl;
                }
                brojE++;
                return true;
            }
		}
		bool obrisiElement(int mesto)
		{
		    if(mesto <= 1 || mesto >= brojE+1)
            {
                return false;
            }else
            {
                if(mesto == 1)
                {
                    ELEMENT* zaBrisanje = head;
                    if(head == tail)
                    {
                        tail = NULL;
                    }
                    head = head->next;
                    delete zaBrisanje;
                }else
                {
                    ELEMENT* zaBrisanje = head;
                    ELEMENT* prom = head;
                    for(int i = 0; i < mesto-1; i++)
                    {
                            prom = prom->next;
                    }
                    zaBrisanje = prom->next;
                    prom->next = zaBrisanje->next;
                    if(tail == zaBrisanje)
                    {
                        tail = prom;
                    }
                    delete zaBrisanje;
                }
                brojE--;
                return true;
            }
		}
		bool izlistaj(int a, T &nazad)
		{
		    if(a < 1 ||  a > brojE)
            {
                return false;
            }else
            {
                if(a == 1)
                {
                    nazad = head->data;
                }else if(a == brojE)
                {
                    nazad = tail->data;
                }else
                {
                    ELEMENT* prom = head;
                    for(int i = 0; i < a; i++)
                    {
                            prom = prom->next;
                    }
                    nazad = prom->data;
                }
                return true;
            }
		}

		void obrisiListu()
		{
		    while(!praznaLista())
                obrisiElement(1);
		}
		friend ostream& operator<<(ostream& izlaz, Lista<T>& L)
        {
            for(int i = 1; i <= L.velicina(); i++){
                if(i != 1) izlaz << ", ";
                T prom;
                L.izlistaj(i, prom);
                izlaz << prom;
            }
            izlaz << endl;
            return izlaz;

        }
       Lista& operator =(Lista& L)
       {
           if(this != &L)
           {
               obrisiListu();
               head = NULL;
               tail = NULL;
               brojE = 0;
               for(int i = 0; i < L.velicina(); i++)
               {
                   T prom;
                   if(L.izlistaj(i,prom))
                   {
                       dodajElement(i,prom);
                   }

               }
           }
           return *this;
       }
};
#endif
