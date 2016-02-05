#include <iostream>
#include "Extensions.h"

using namespace std;

int main() {
    cout << "CSC300 Week 1 Homework\n" << endl;
    cout << "Assignment 1: \n" << endl;
    Extensions e1;
    Extensions e2(25);
    e1.loadExtn();
    e2.loadExtn();
    Extensions e3(e1);
    Extensions e4(25);
    e4 = e2;
    cout << "\n\tAddress of first object : \n\t\t" << &e1 << endl;
    cout << "\n\tContents of first object: \n\t\t";
    e1.print();
    cout << "\n\tAddress of second object : \n\t\t" << &e2 << endl;
    cout << "\n\tContents of second object: \n\t\t";
    e2.print();
    cout << "\n\tAddress of third object : \n\t\t" << &e3 << endl;
    cout << "\n\tContents of third object: \n\t\t";
    e3.print();
    cout << "\n\tAddress of fourth object : \n\t\t" << &e4 << endl;
    cout << "\n\tContents of fourth object: \n\t\t";
    e4.print();
    return 0;
}