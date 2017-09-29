//Antonio Monje
//cs211 Assignment 3
//Stack Class - header file
//===================================================

#ifndef STACK_H
#define STACK_H
#include <string>
using namespace std;

const int MAX = 5;// The Maz number of elements for the stack
typedef int el_t;// the element type, is int for now
class Stack
{
 private:
  el_t ar[MAX];// An array of el_t sixe of MAX
  int top;// The top of the stack variable
  string msg;// variable for a message
  void stackError(string);// This holds function for ERROR handling 
  
 public:
  Stack();// Default constructor
  Stack(el_t);//this functions is used to create objects
  void push(el_t);// holds the function for pushing elements into the stack
  void clearIt();// holds the function for getting rid os elements in the stack
  void displayAll();// holds the function for showing all elements in the stack
  bool isFull();// holds the function that tells if the stack is filled
  bool isEmpty();// holds the function that tells if the stack has nothing
  el_t pop();// holds the function to move top element from the stack
  el_t topElem();// holds the function to display the top element of the stack
  

};
#endif
