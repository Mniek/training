

/** @file */

/*
FUNDAMENTALS OF COMPUTER PROGRAMMING
 
Lecture 7 & 8: singly linked list 
 
 */

#define debug(x)  std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl


#include <iostream>

#include "functions.h"
#include "structures.h"

 void stworzListe(Lista *&poczatek)
 {
     Lista*p ;
     p = poczatek;
     
     for(int i = 0;i< 10; i++)
     {
         p = new Lista;
        
        p->zmienna = i; //zmienna wskazana przez p ma przyjąć wartość i
       
        p->mainPointer = poczatek;
        poczatek = p;
     }
     
     
 }
 
 void dodajNaKoncu(Lista *& poczatek, int wart)
 {
        Lista *p, *nowy;
        p = poczatek;
        
        if(p)
        {
            while(p -> mainPointer)
                p = p->mainPointer;
            
            nowy = new Lista;
            nowy -> zmienna = wart;
            nowy ->mainPointer = nullptr;
            p->mainPointer = nowy;
        }
        else
            std::cout<<"Pusta lista! ";       
 }
 
 void usunNaKoncu(Lista *& poczatek)
{
    Lista *p;
    p = poczatek;
    if(p)
    {
        if(p->mainPointer)
        {
            while(p->mainPointer->mainPointer)
            {
                p = p-> mainPointer;
                
            }
                delete p->mainPointer;
                p ->mainPointer = nullptr;
                
            
        }
        else
        {
            delete p;
            poczatek = nullptr;
        }
    }
    
    
}

 
 void wypiszListe(Lista *& poczatek)
 {
     Lista * p;
     p = poczatek;
     while(p)
     {
         std::cout<< p->zmienna<<" "<<std::endl;
         p = p->mainPointer;
         
     }
 }
 void usunListe(Lista *& poczatek)
 {
     Lista *p;
     while(poczatek)
     {
         p = poczatek;
         poczatek = poczatek->mainPointer;
         delete p;
     }
 }
 void policzListe(Lista *& poczatek)
 {
    int counter = 0;
    Lista *p ;
  

  p = poczatek;
  
  while (p)
  {
       counter ++;
      p = p->mainPointer;
     
      
  }
  std::cout<<"Ilość elementów: "<<counter<<std::endl;
}

void usunPrzodLista(Lista *&poczatek)
{
    Lista *p;
    p = poczatek;
    if(p)
    {
        poczatek =  poczatek -> mainPointer;
        delete p;
    }
    else
        std::cout<<"Pusta lista"<<std::endl;
}  
