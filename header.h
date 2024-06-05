#pragma once

#include <iostream>

using namespace std;
class Element {
public:
    int data;
    int x;
    Element* next;
};
class Stack
{
public:

    Element* head = nullptr;


    void Push(int a, int b);
    void Print();
    Element* Pop();
    Element* Back_el();
    Element* Find(int num);
    void Back();
    void sort(bool order);
    int Count();
    int* ToArray();
    bool IsEmpty();
};
