//Antonio Monje
//cs211 Assignment 5
//pointer client file
//========================================================

#include <iostream>
using namespace std;


//Purpose to make pointers
int main()
{
  int* p1;// creates space for the pointer
  int* p2;
  p1 = new int;
  p2 = new int;
  *p1 = 1; // p1 points to 1
  cout << "p1 is " << *p1 << endl; // displays content of p1
  *p2 = 2;// sets p2 to point to 2
  cout << "p2 is " << *p2 << endl;// displays content of p2
  delete p2;// gets rid of pointer
  p2 = p1;// makes p2 point to p1
  cout << "p2 is " << *p2 << endl;// tries to show p2 but theirs nothing in their
  delete p1;// deletes p1
  p1 = NULL;// puts null in p1
  p2 = new int;// creates a new p2
  *p2 = 3;// p2 now points to p3
  cout << "p2 is " << *p2 << endl;// displays what p2 is pointing to

  return 0;
}
