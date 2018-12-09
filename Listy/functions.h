/** @file */

/*
FUNDAMENTALS OF COMPUTER PROGRAMMING
 
Lecture 7 & 8: singly linked list

 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream> 
#include "structures.h"

 void stworzListe(Lista *& poczatek);
 void wypiszListe(Lista *& poczatek);
void usunListe(Lista *& poczatek);
void policzListe(Lista *& poczatek);
void usunPrzodLista(Lista *& poczatek);
 void dodajNaKoncu(Lista *& poczatek, int wart);
 void usunNaKoncu(Lista *& poczatek);

#endif
