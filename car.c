#include <iostream>
#include "car.h"
using namespace std;

Car::Car(string m, string mo, int ye, string co, int mi, int x, int y)
{
  Make = m;
  Model = mo;
  Year = ye;
  Color = co;
  Miles = mi;
  xposition = x;
  yposition = y;
}

string Car::getMake() const
{
  return Make;
}

string Car::getModel() const
{
  return Model;
}

int Car::getYear() const
{
  return Year;
}
string Car::getColor() const
{
  return Color;
}

void Car::getchangeColor(string NewColor)
{
  Color = NewColor;
}

int Car::getMiles() const
{
  return Miles;
}

int Car::getxposition() const
{
  return xposition;
}

int Car::getyposition() const
{
  return yposition;
}

int Car::getGoForward(int block)
{
  yposition += block;
  Miles += block;
}

int Car::getGoBackward(int block)
{
  yposition -= block;
  Miles += block;
}

int Car::getGoLeft(int block)
{
  xposition -= block;
  Miles += block;
}

int Car::getGoRight(int block)
{
  xposition += block;
  Miles += block;
}

