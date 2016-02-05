//
// Created by Kyle on 2/5/16.
//

#ifndef CSC300HOMEWORKWEEK1_EXTENSIONS_H
#define CSC300HOMEWORKWEEK1_EXTENSIONS_H

//[5pts]Define the class Extensions that holds a list of four digit phone extensions. The class should have a private data member extn that is an integer pointer, and a second data member size that is also an integer. The class should have a default constructor and a constructor with parameters.  The default constructor should initialize the private data member size to number 10 and initialize extn by dynamically allocating enough memory shown in the value of size (which is 10). The constructor with parameter should have an integer parameter that is used to initialize the data member size and use this number to dynamically allocate enough memory for the private date member extn.
//        Include a copy constructor for this class
//        Include a assignment operator for this class
//        Include a destructor for this class

#include <iostream>

using namespace std;

class Extensions {
public:
    Extensions();
    Extensions(int size);
    void loadExtn();
    Extensions(Extensions& right); //copy constructor
    Extensions& operator=(const Extensions& right); //assignment operator
    void print() const;
//    ~Extensions();

private:
    int* extn;
    int size;

};

#endif //CSC300HOMEWORKWEEK1_EXTENSIONS_H
