//Antonio Monje
//cs211 Assignment 9
//DLL class implementation file
//==================================================================================================================
#include <iostream>
using namespace std;
#include "DLL.h"
//Purpose to initialize the data members
//Parameters: nothing
//Algorithm: nothing
DLL::DLL()
{
  count = 0;
  front = NULL;
  rear = NULL;
}
//Purpose to destroy the queue
//Parameters: nothing
//Algorithm: nothing
DLL::~DLL()
{
  while(!isEmpty())//checks is empty function
    {
      deleteFront();//deletes front element
    }
}
//Purpose to add to the queue
//Parameters: el_t
//Algorithm: if count is 0 make front and rear a new node and put elem in rear else rear gets the new node and put an element in it then increment
void DLL::addRear(el_t el)
{
  if(count == 0)//checks if count is zer if yes front and rear make a new node
    {    
      front = rear = new node;
      front -> next = NULL;
      front -> prev = NULL;
    }  
  else// else rear points to next and that make a  new node
    {
      rear-> next = new node;
      rear -> next -> prev = rear;
      rear = rear -> next;
    }
  rear-> next = NULL;//then rear points to a null character
  rear-> elem = el;// rear is set to the new element added  
  count++;// increment
}
//Purpose to delete elements from queue
//Parameters: nothing
//Algorithm: check isEmpty else if not set temp front decrement delete temp.
el_t DLL::deleteFront()
{
  el_t e;
  if(isEmpty())//checks is empty
    DLLError("Empty. Cannot delete!");
  else if(count == 1)// make temp that is set to fromt and makes front point to next
    {
      e = front -> elem;
      delete front;
      front = rear = NULL;
    }
  else// set e to the front element
   {
     e = front -> elem;
     front = front -> next;// front equals the next front
     delete front -> prev;//delete the old front
     front -> prev = NULL;// put a null for the old front
   }
  count--;//decrement
  return e;// return deleted element
}


//Purpose to check if the queue is empty
//Parameters: nothing
//Algorithm: checks if front and rear are null if yes then empty
bool DLL::isEmpty()
{
  if(front == NULL && rear == NULL)//if both are null then its empty
    return true;
  else// else it has something inside queue
    return false;
}
//Purpose to displays the content of the queue
//Parameters: nothing
//Algorithm: make a node point to front while not null and cout that element then move on to the next
void DLL::displayAll()
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
void DLL::DLLError(string msg)
{
  cout << msg << endl;// display a error message
  exit(1);
}
//Purpose to display the queue in reverse order
//Parameters: nothing
//Algorithm: calls PrintAllReverse(front) fumction to display it
void DLL::printAllReverseDLL()
{
  printAllReverseDLL(rear);// dislplays the answer in reverse
}
//Purpose reverses the queue
//Parameters: pointer node p
//Algorithm: if p is null do nothing else call the function pointing to the next node and display the element
void DLL::printAllReverseDLL(node* p)
{
  for(p; p != NULL; p = p -> prev)//while p is not null cout the element 
   {
     cout << p -> elem;//cout the element
    }
}
//Purpose reverses the queue
//Parameters: el 
//Algorithm: checks if its empty to create add new elements to the rear which is the front if not point to the new node using a temporary variable and the change front and have front point to the tempary for the next item to add then increment the count 
void DLL::addFront(el_t el)
{
  if(isEmpty())// checks if it empty
    addRear(el);
  else// if not makes a new node
    {
      node* p = front;
      front = new node;// make front a new node
      front -> elem = el;// make front elem the one u added
      front-> next = p;//next one gets the temp variable which was front
      p -> prev = front;// temp variable points to previous which is now front
      front -> prev = NULL;// set it to null
      count++;//increment
    }
}
//Purpose to delete the rear element
//Parameters: nothing
//Algorithm: checks if its empty to give error message if theirs one element then just delete the front else make a temporary variable and node that point to the front element then dellte the rear element and set rear to the temp variable and rear to null then increment the count
el_t DLL::deleteRear()
{
  el_t x;
  if(isEmpty())//checks if its empty
    DLLError("Empty");
  else if(count == 1 )//checks if theirs only one element
    {
      return deleteFront();// delete front gets rid of that element
    }
  else// else set x equal to the rear element
    {
      x = rear -> elem;
      rear = rear -> prev;//rear is equal to rear previous
      delete rear -> next;//delete rear next
      rear -> next = NULL;// set it to null
      count--;//decrement
      return x;//return value
    }
}

//Purpose to delete a specific node
//Parameters: el_t el
//Algorithm: check if theirs something to delete if yes and the first element delete the front. else if not the first element go in for loop while not null character and and not the element your looking for then if not null set pre next equal to del next. if the current node which is del is equal to the rear set rear to previous then delete the node and increment
void DLL::deleteNode(el_t el)
{
  if(!isEmpty())
    {
      if(front->elem == el)//if the first element is the key then delete it
	deleteFront();
      
      else// else go through the for loop
	{
	  
	  node* del;//make delete
	  //for loop while del is not equal to null and delete is not the element
	  for(del = front -> next; del!=NULL && del-> elem != el; del = del -> next)
	    ;       
	  if(del == NULL)
	    return;
	  else if(del == rear)// checks it the rear is equal to delete
	    {
	      rear = del -> prev;
	      rear -> next = NULL;
	    }
	  else if(del != NULL)// if not null the set pre next equal to del next
	    {
	     del -> prev -> next = del -> next;
	     del -> next -> prev = del -> prev;
	    }
	      delete del;// delete the node 
	      count--;//increment
	}
    }
}


//Purpose to add elements in order
//Parameters: el_t el
//Algorithm: checks if its empty just add it to the front or if first element add to the front else creat a new node while null and element is less than the one pointed in front of it using a temp variable that addd the element then the pointer node sets equal to the temp then you increment
void DLL::addInOrderAscend(el_t el)
{
  
  if(isEmpty())//checks if empty if yes then add to the front
    addRear(el);
  else if(el <= front -> elem)//if element is less than front add new element to the front
    addFront(el);
  else if( el >= rear -> elem)//if element is greater than rear add new element to the rear
    addRear(el);
  else
    {
      node* p = front;
      while(p->next != NULL && p -> next -> elem <= el)//while not null and element is less than element in front
	p = p -> next;
      
      node* x = new node;// make a temp node 
      x -> next = p -> next;
      x -> prev = p; 
      p -> next -> prev = x;// set the nodes equal to each other
      p -> next = x;// set the node equal to the temp
      x -> elem = el;     
      count++;  // increment
    }
}

//Purpose to search for a element
//Parameters: el_t el
//Algorithm: make a new node then in a while loop while node is not null if pointer is equal to the element return true else move to the next element if nothing is found exit loop and return false
bool DLL::search(el_t el)
{
  node* p = front;//make temp node equal to front
  while(p != NULL)//while node is not null
    {
      if(p->elem == el)//if temp node is equal to element your looking for return true
	{
	  return true;
	}
      else// if not the element move to next element
	{
	  p = p -> next;
	}
    }
  
  return false;// if element is not found return false
}

//Purpose to add elements in order descending
//Parameters: el_t el
//Algorithm: checks if its empty just add it to the front or if first element add to the front else creat a new node\while null and element is less than the one pointed in front of it using a temp variable that addd the element then the pointer node sets equal to the temp then you increment
void DLL::addInOrderDescend(el_t el)
{
  if(isEmpty())//checks if empty if yes then add to the front
    addFront(el);
  else if(el >= front -> elem)// checks for first element if smaller than first element add t\o the front
    addFront(el);
  else if(el <= rear -> elem)
    addRear(el);
  else
    {
      node* p = front;
      while(p->next != NULL && p -> next -> elem >= el)//while not null and element is less t\han element in front
	p = p -> next;
      
      node* x = new node;// make a temp node
      x -> next = p -> next;
      x -> prev = p;
      p -> next -> prev = x;// set the nodes equal to each other
      p -> next = x;// set the node equal to the temp
      x -> elem = el;
      count++;  // increment
    }
}


//Purpose to delete multiple specific node
//Parameters: el_t el
//Algorithm: check if theirs something to delete if yes and the first element delete the front. else if not the firs\t element go in for loop while not null character and and not the element your looking for then if not null set pre\next equal to del next. if the current node which is del is equal to the rear set rear to previous then delete the node and increment
void DLL::deleteNodes(el_t el)
{
  node* pre;
  node* del;  
  if(isEmpty())//if list is empty return nothing
    {
      return;
    }
  else// if not empty empty
    {
      if(front -> elem == el)// if front element is equal to what your looking for delete that node
	{
	  deleteFront();
	}
      if(count > 1)// if not the front element and count is greater than 1
	{
	  
	  node* del = front;
	  for(del; del != NULL; del = del -> next)//for loop while del is not null
	    {
	      
	      if(del == front && del -> elem == el)// if its rear and del node equals that el deletet the rear
		deleteFront();
	      else if(del == rear && del -> elem == el)
		deleteRear();	      
	      else if(del -> elem == el)//if it just equal to element set pre next equal to del next and delete
		{  
		  del ->prev -> next = del -> next;
		  del -> next -> prev = del -> prev;
		  delete del;		
		  count--;// increment
		}
	    }
	}
    }
}







