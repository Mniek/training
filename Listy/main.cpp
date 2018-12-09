/** @file */

/*
FUNDAMENTALS OF COMPUTER PROGRAMMING
 
Lecture 7 & 8: singly linked list
 
 */

#define debug(x)  std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl

#include <iostream>   
#include <fstream> 

#include "functions.h"
#include "structures.h"
 

 
 
 
int main ()
{
  //Deklaracja listy
    Lista *poczatek;
    poczatek = nullptr;
    
    stworzListe(poczatek);
    
    policzListe(poczatek);
    
    dodajNaKoncu(poczatek,555);
    
    usunNaKoncu(poczatek);
    
    policzListe(poczatek);
    
    wypiszListe(poczatek);
    usunPrzodLista(poczatek);
    usunListe(poczatek);
    
  return 0; 
} 

// Ubi sunt qui ante nos fuerunt?
