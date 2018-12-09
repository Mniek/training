/** @file */

/*
 FUNDAMENTALS OF COM*PUTER PROGRAMMING
 
 Lecture 6: pointers 
 
 */

#define debug(x)  std::cerr << "(" << __LINE__ << ") " << #x << " == " << (x) << std::endl


#include <iostream>
#include <vector>
#include <climits>
#include <random>
#include <chrono>
#include <string>
#include <iomanip>

#include "functions.h"
 
 

void print (std::ostream & s, int Array [], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
       s << std::setw(8) << Array[i];
    s << std::endl;
} 
 
void fill (int Array [], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
       *(Array + i) = i + 1;
}

void square(int * Array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
       *(Array + i) = Array[i] * i[Array];
}
 
void negate (int Array [], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
       *(Array + i) = -Array[i];
}

 
void revert (int Array [], const int SIZE)
{
    for (int i = 0; i < SIZE / 2; i++)
       std::swap (Array[i], Array[SIZE - i - 1]);
}
