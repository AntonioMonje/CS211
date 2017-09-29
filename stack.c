//Antonio Monje
//cs211 Assignment 3
//Stack Class - implementation file
//===================================================

#include <iostream>
#include "stack.h"
using namespace std;

//Purpose: constructor which initializes top
Stack::Stack()
{
  top = - 1;
}

//Purpose: The purpose is to tell the user if stack is empty
//Parameters: Nothing
//Algorithm: if top is = to -1 then return true else return false
bool Stack::isEmpty()
{
  if(top == -1)//Stack is empty return true
    return true;
  else//Stack is not empty
    return false;
}

//Purpose: The purpose is to tell the user if stack is full
//Parameters: Nothing
//Algorithm: if top is = to MAX - 1 then return true else return false
bool Stack::isFull()
{
  if(top == MAX - 1)//stack is full return true
    return true;
  else//stack is not full
    return false;
}

//Purpose: to push a passed element to the stack
//Parameters: new element n of type el_t
//Algorithm: if not full, increment top and plce n there else Error is called
void Stack::push(el_t part)
{
  if(isFull())//The stack is full
    stackError("Stack overflow");
  else//The stack is not full put element into the stack
    {
      ar[++top] = part;
    }
}

//Purpose: To pop the top element of the stack
//Parameters: nothing
//Algorithm: if Empty Error is called, else decrement top
el_t Stack::pop()
{
  if(isEmpty())//Stack is Empty
    stackError("stack underflow");
  else//Stack is not empty take top element out of stack 
    return ar[top--];
}


//Purpose: To display the top element of the stack
//Parameters: nothing
//Algorithm: if empty call error, else return top element in stack
el_t Stack::topElem()
{
  if(isEmpty())//Stack is empty
    stackError("stack is empty");
  else//stack is not empty and show top element
    return ar[top];
}

//Purpose: (private) to handle unexpected errors encountered by other methods
//Parameters: a string message to be displayed
//Algorithm: simply cout the message and exit from the program
void Stack::stackError(string msg)
{
  cout << msg << endl;
  exit(1); 
}

//Purpose: To show all elements in the stack
//Parameters: Nothing
//Algorithm: a for loop from the top to 0 decrementing by 1. then each time you
// cout the element of the stack at that point
void Stack::displayAll()
{
  for(int i = top; i >= 0; i--)//increment top - 1 to get to 0 to dislpay stack
    cout << ar[i] << endl;
}

//Purpose: To clear the stack so that it is empty
//Parameters: Nothing
//Algorithm: while loop that pops the element while stack is not empty
void Stack::clearIt()
{
  while(!isEmpty())//while the stack is Empty take out the top element
    pop();
}



