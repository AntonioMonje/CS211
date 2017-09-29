#include <iostream>
using namespace std;
#include "LL.h"

int main()
{
  LL l;
  l.addRear(3);
  l.addRear(9);
  l.addRear(2);
  l.addRear(1);
  l.addRear(9);
  l.addRear(11);
  l.deleteNode(9);
  l.displayAll();
  l.deleteNode(9);
  cout << endl; 
  l.displayAll();
  l.deleteNode(5);
  cout << endl;
  l.displayAll();
  l.deleteNode(3);
  cout << endl;
  l.displayAll();
  l.deleteNode(11);
  cout << endl;
  l.displayAll();
  l.deleteNode(1);
  cout << endl;
  l.displayAll();
  l.deleteNode(2);
  cout << endl;
  l.displayAll();
  l.deleteNode(5);
  cout << "All in order: " << endl;

  l.addInOrderAscend(5);
  l.addInOrderAscend(1);
  l.addInOrderAscend(3);
  l.addInOrderAscend(0);
  l.addInOrderAscend(7);
  l.addInOrderAscend(7);
  l.addInOrderAscend(5);
  l.addInOrderAscend(0);
  cout << endl;
  l.displayAll();
  cout << endl;
cout << l.search(3) << endl;
  l.search(11);
  l.search(2);
  l.search(9);
  l.search(100);

return 0;
}
