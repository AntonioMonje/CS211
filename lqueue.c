//Antonio Monje
//cs211 Assignment 5
//LQueue class implementation file
//===========================================================
#include <iostream>
using namespace std;
#include "lqueue.h"
//Purpose to initialize the data members
//Parameters: nothing
//Algorithm: nothing
LQueue::LQueue()
{
  count = 0;
  front = NULL;
  rear = NULL;
}
//Purpose to destroy the queue
//Parameters: nothing
//Algorithm: nothing
LQueue::~LQueue()
{
  while(!isEmpty())//checks is empty function
    {
      deleteFront();//deletes front element
    }
}
//Purpose to add to the queue
//Parameters: el_t
//Algorithm: if count is 0 make front and rear a new node and put elem in rear else rear gets the new node and put an element in it then increment
void LQueue::addRear(el_t el)
{
  if(count == 0)//checks if count is zer if yes front and rear make a new node
    front = rear = new node;
  else// else rear points to next and that make a  new node
    {
      rear-> next = new node;
      rear = rear -> next;
    }
  rear-> elem = el;// rear is set to the new element added
  rear-> next = NULL;//then rear points to a null character
  count++;// increment
}
//Purpose to delete elements from queue
//Parameters: nothing
//Algorithm: check isEmpty else if not set temp front decrement delete temp.
el_t LQueue::deleteFront()
{
  el_t e;
  if(isEmpty())//checks is empty
    queueError("The queue is Empty. Cannot delete!");
  else// make temp that is set to fromt and makes front point to next
      {
	node* temp = front;
	front = front -> next;
	e = temp -> elem;//sets element to temp
	count--;
	delete temp;//deletes temp after front changes
	if(front == NULL)//if front is null the set rear to null
	  rear = NULL;
       
	return e;// return deleted element
      }
}

//Purpose to check if the queue is empty
//Parameters: nothing
//Algorithm: checks if front and rear are null if yes then empty
bool LQueue::isEmpty()
{
  if(front == NULL && rear == NULL)//if both are null then its empty
    return true;
  else// else it has something inside queue
    return false;
}
//Purpose to displays the content of the queue
//Parameters: nothing
//Algorithm: make a node point to front while not null and cout that element then move on to the next
void LQueue::displayAll()
{

  node* p = front;
  while(p != NULL)// if p is not null then cout element
    {
      cout << p -> elem;
      p = p -> next;// then point to next element
    }
}
//Purpose to show an error
//Parameters: string error message
//Algorithm: cout error message
void LQueue::queueError(string msg)
{
  cout << msg << endl;// display a error message
  exit(1);
}
//Purpose to display the queue in reverse order
//Parameters: nothing
//Algorithm: calls PrintAllReverse(front) fumction to display it
void LQueue::PrintAllReverse()
{
  PrintAllReverse(front);// dislplays the answer in reverse
}
//Purpose reverses the queue
//Parameters: pointer node p
//Algorithm: if p is null do nothing else call the function pointing to the next node and display the element
void LQueue::PrintAllReverse(node* p)
{
  if(p == NULL)// if node is null do nothing
    return;
  else// point to element and display it
    {
      PrintAllReverse(p -> next);
      cout << p -> elem;
    }
}
