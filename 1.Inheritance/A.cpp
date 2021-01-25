/*
 *  A.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#include "A.h"
#include <iostream>

using namespace std;

A::A()
{
    testData2 = 10;
    n = "unnamed A";
    cout << "Inside A::A() for object " << n << endl;
}

A::A(string name, int num) : n(name), testData2(num)
{
    cout << "Inside A::A(string) for object " << n << endl;
}


A::~A()
{
    cout << "Inside A::~A() for object " << n << endl;
}


void A::setN(const char* s)
{
  n = s;
}

string A::getN(void) const
{
  return n;
}


