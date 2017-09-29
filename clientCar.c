#include <iostream>
#include "car.h"
using namespace std;

void Print(const Car& c);
int main()
{
  Car toy("Toyota", "Celica", 2016, "white", 0, 0, 0);
  Car hon("Honda", "Civic", 2008, "black", 20000, 2, 2);

  toy.getGoForward(3);
  hon.getGoBackward(1);
  toy.getGoRight(2);
  hon.getGoLeft(5);

  Print(toy);
  Print(hon);
  toy.getchangeColor("Red");
  Print(toy);  
  return 0;
}\
void Print(const Car& c)
{
  cout << c.getColor() << " " << c.getMake() << " " << c.getModel() << " is at location " << "(" << c.getxposition() << "," << c.getyposition() << ") " << c.getMiles() << " Miles" << endl;
}

