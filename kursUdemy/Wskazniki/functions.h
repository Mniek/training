/** @file */

/*
 FUNDAMENTALS OF COM*PUTER PROGRAMMING
 
 Lecture 6: pointers
 */


#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector> 
#include <string>
#include <iostream>
#include <string>

/** The function prints an array to an output stream.
  @param s output streams
  @param Array an array to print
  @param SIZE size of an array
  */
void print (std::ostream & s, int Array [], const int SIZE);

 

/** The function fill an array with consecutive numbers 1, 2, ..., SIZE
  @param Array an array to fill
  @param SIZE size of an array
*/
void fill (int Array [], const int SIZE);

/** The function fill squares all elements of an array.
  @param Array an array to square elements of
  @param SIZE size of an array
*/
void square (int * Array, const int SIZE);

/** The function fill negates all elements of an array.
  @param Array an array to negate elements of
  @param SIZE size of an array
*/
void negate (int Array [], const int SIZE);

/** The function reverts an array.
  @param Array an array to revert
  @param SIZE size of an array
*/
void revert (int Array [], const int SIZE);




#endif
