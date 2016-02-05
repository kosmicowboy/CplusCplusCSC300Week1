//
// Created by Kyle on 2/5/16.
//
#include "Extensions.h"

Extensions::Extensions()
{
    size = 10;
    extn = new int[size];
    cout << "\t****default constructor implemented****\n";
}

Extensions::Extensions(int s)
{
    size = s;
    extn = new int[size];
    cout << "\t****parameter constructor implemented****\n";
}

void Extensions::loadExtn()
{
    for (int i = 0; i < size; i++)
    {
        extn[i] = rand() % 9000 + 1000;
    }
}

Extensions::Extensions(Extensions& right)
{
    cout << "\t**** copy constructor is called ****\n";
    size = right.size;
    extn = new int[size];
    for (int i = 0; i < size; i++)
    {
        extn[i] = right.extn[i];
    }
}

Extensions& Extensions::operator=(const Extensions& right)
{
    cout << "\t**** assignment operator is called ****" << endl;
    if (this !=&right)
    {
        size = right.size;
        extn = new int[size];
        for (int i = 0; i < size; i++)
            extn[i] = right.extn[i];
        return *this;
    }
}

void Extensions::print() const
{
    for (int i = 0; i < size; i++)
    {
        cout << extn[i] << ", ";
    }
    cout << "\n";
}