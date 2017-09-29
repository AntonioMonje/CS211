//Antonio Monje
//cs211 Assignment 5
//LQueue Class client file
//========================================================
#include <iostream>
using namespace std;
#include "lqueue.h"

int main()
{
  LQueue q;
  if(q.isEmpty())//checks if queue is empty
    cout << "Queue is Empty" << endl;
  
  q.displayAll();//show the queue content
  
  
  q.addRear(1);// adds 1 to queue
  
  q.displayAll();//displays 1

  cout << endl;
  
  q.addRear(2);// adds 2 to the queue
  
  q.addRear(3);// adds 3 to the queue

  q.addRear(4);// adds 4 to the queue

  q.displayAll();//displays 1234
  cout << endl; 
  cout << q.deleteFront() << " Was deleted" << endl;// deletes and shows 1
  cout << q.deleteFront() << " Was deleted" << endl;// deletes and shows 2
  cout << q.deleteFront() << " Was deleted" << endl;// deletes and shows 3

 
  q.displayAll();// displays 4
 cout << endl;
 if(q.isEmpty())// checks if the queue is empty
   cout << "Queue is Empty" << endl;
 else//its not empty is shows message
   {
     cout << "queue is not empty" << endl;
   }
 cout << endl; 
 cout << q.deleteFront() << " Was deleted" << endl;// deletes and shows 4
 
 if(q.isEmpty())//checks if queue is empty it is
   cout << "Queue is Empty" << endl;
 
 
 q.displayAll();//displays nothing nothing in the queue

 return 0;
}
