//Antonio Monje
//cs211 Assignment 6
//LLClient program
//==================================================================================================================
#include <iostream>
#include "LL_T_E.h"
using namespace std;

int main()
{
try
  {
  LL<int> l;//object created
  cout << l.deleteRear() << "was deleted" << endl;//deletes the rear element

  l.addFront(1);//adding an element to the front
  l.addFront(2);//adding an element to the front
  l.addFront(3);//adding an element to the front
  l.addRear(4);//adding an element to the rear
  l.addRear(5);//adding an element to the rear
  l.displayAll();//displays all the elements
  cout << endl;
  cout << l.deleteFront() << "was deleted" << endl;//delete the front element
  cout << l.deleteRear() << "was deleted" << endl;//delete the rear element
  l.displayAll();//display all the elements
  cout << endl;
  cout << l.deleteFront() << "was deleted" << endl;//delete the front element

  cout << l.deleteRear() << "was deleted" << endl;//delete the rear element

  l.displayAll();//displays all the elements
  cout << endl;
  cout << l.deleteFront() << "was deleted" << endl;//deletes the front element

  l.displayAll();//displays all the elements
  cout << endl;
  l.addRear(10);//adds an element to the rear
  l.addFront(11);//add an element to the front
  l.displayAll();//displays all the elements
  cout << endl;
  cout << l.deleteRear() << "was deleted" << endl;//deletes the rear element
  cout << l.deleteRear() << "was deleted" << endl;//deletes the rear element
  cout << endl;
  l.displayAll();//displays the elements
  cout << l.deleteRear() << "was deleted" << endl;//deletes the rear element

  }

 catch(LL<int>::Underflow)
 {
   cout << "Inside Catch " << endl;
   cout << "Error: trying to pop when the List is empty" << endl;
 }


 cout << "AFTER" << endl;


  return 0;
}
