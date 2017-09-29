//Antonio Monje
//cs211 Assignment 5
//Queue Class - header file
//===================================================

#ifndef LQUEUE_H
#define LQUEUE_H
#include <string>
using namespace std;

typedef long int el_t; // el_t is an alias for char

//create a struct that will have an operand, a operator, another operand
struct node
{
  el_t elem;
  node* next;
};


class LQueue
{
 private:
  // Data members are:
  int count; // how many elements do we have right now?
  node* front; // where the front element of the queue is.
  node* rear; // where the rear element of the queue is.
  // a private utility function for fatal error cases
  // This displays an error messages passed to it and does exit(1);
  void queueError(string);
 public:
  //Purpose to initialize the data members
  //Parameters: nothing
  //Algorithm: nothing
  LQueue();//default constructor
  //Purpose to destroy
  //Parameters: nothing
  //Algorithm: nothing
  ~LQueue();//Default destructor
  //Purpose to check if the queue is empty
  //Parameters: nothing
  //Algorithm: checks if front and rear are null if yes then empty
  bool isEmpty();// holds the function that tells if the stack has nothing
  //Purpose to add to the queue
  //Parameters: el_t
  //Algorithm: if count is 0 make front and rear a new node and put elem in rear else rear gets the new node and put an element in it then increment
  void addRear(el_t);// holds the function for adding an element to the queue
  //Purpose to delete elements from queue
  //Parameters: nothing
  //Algorithm: check isEmpty else if not set temp front decrement delete temp.
  el_t deleteFront();// holds the function showing the front element
  //Purpose to displays the content of the queue
  //Parameters: nothing
  //Algorithm: make a node point to front while not null and cout that element then move on to the next
  void displayAll();// holds the function for showing all elements in the stack
  //Purpose to display the queue in reverse order
  //Parameters: nothing
  //Algorithm: calls PrintAllReverse(front) fumction to display it
  void PrintAllReverse();
  //Purpose reverses the queue
  //Parameters: pointer node p
  //Algorithm: if p is null do nothing else call the function pointing to the next node and display the element
  void PrintAllReverse(node* p);

};
#endif
