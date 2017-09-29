//Antonio Monje
//cs211 Assignment 7
//LL Class - header file
//==================================================================================================================
#ifndef LL_H
#define LL_H
#include <string>
using namespace std;

typedef int el_t; // el_t is an alias for char

//create a struct that will have an operand, a operator, another operand
struct node
{
  el_t elem;//variable of el_t
  node* next;//makes next a node
};


class LL
{
 private:
  // Data members are:
  int count; //count is the variable that counts how many element we have
  node* front; //where the front element of the queue is.
  node* rear; //where the rear element of the queue is.
  //a private utility function for fatal error cases
  //This displays an error messages passed to it and does exit(1);
  void queueError(string);
 public:
  //Purpose to initialize the data members
  //Parameters: nothing
  //HOW TO CALL: dont have to pass anything to it
  LL();//default constructor
  //Purpose to destroy
  //Parameters: nothing
  //HOW TO CALL: dont have to pass anything to call it gets called at end of function to delete the linked list
  ~LL();//Default destructor
  //Purpose to check if the queue is empty
  //Parameters: nothing
  //HOW TO CALL: dont have to pass anything
  bool isEmpty();// holds the function that tells if the stack has nothing
  //Purpose to add to the queue
  //Parameters: el_t
  //HOW TO CALL: pass an element to add to the rear of the linked list
  void addRear(el_t);// holds the function for adding an element to the queue
  //Purpose to delete elements from queue
  //Parameters: nothing
  //HOW TO CALL: Dont have to pass anything to this function
  el_t deleteFront();// holds the function showing the front element
  //Purpose to displays the content of the queue
  //Parameters: nothing
  //HOW TO CALL: Dont have to pass anything to this function
  void displayAll();// holds the function for showing all elements in the stack
  //Purpose to display the queue in reverse order
  //Parameters: nothing
  //HOW TO CALL: Dont have to pass anything to this function
  void PrintAllReverse();
  //Purpose reverses the queue
  //Parameters: pointer node p
  //HOW TO CALL: you pass a pointer to the function to call it
  void PrintAllReverse(node* p);
  //Purpose to add element to the front
  //Parameters: an element of el_t to add to the front
  //HOW TO CALL: you pass an element of el_t to add to the front of the list
  void addFront(el_t el);
  //Purpose to delete the last element of the linked list
  //Parameters: nothing
  //HOW TO CALL: Dont have to pass anything to this function
  el_t deleteRear();
  //Purpose to delete a element
  //Parameters: an element of el_t to add 
  //HOW TO CALL: you pass an element of el_t to delete from the list  
  void deleteNode(el_t el);
  //Purpose to add element to the list
  //Parameters: an element of el_t to add in ascending order
  //HOW TO CALL: you pass an element of el_t to add to the list
  void addInOrderAscend(el_t el);
  //Purpose to look for a element
  //Parameters: an element of el_t to find
  //HOW TO CALL: you pass an element of el_t to look for
  bool search(el_t el);
  //Purpose to add element to the list
  //Parameters: an element of el_t to add to the list
  //HOW TO CALL: you pass an element of el_t to add the list in descending order
  void addInOrderDescend(el_t el);
  //Purpose to delete multiple nodes from the list
  //Parameters: an element of el_t to delete from the list
  //HOW TO CALL: you pass an element of el_t to add to delete from the list
  void deleteNodes(el_t el);
};
#endif
