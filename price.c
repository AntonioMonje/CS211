#include <iostream>
#include "price.h"
using namespace std;

Price::Price()
{
  dollar = 0;
  cent = 0;
}

Price::Price(int d, int c)
{
  dollar = d;
  cent = c;
}

Price Price::operator+(const Price& second)
{
  int p1 = this->dollar + second.dollar;
  int p2 = this->cent + second.cent;
  while(p2 >= 100)
    {
      p1 += 1;
      p2 -= 100;
    }

  Price total(p1, p2);
  
 return total;
}
Price Price::operator-(const Price& other)
{
  //convert each price to cents
  int p1 = this->dollar * 100 + this->cent;
  int p2 = other.dollar * 100 + other.cent;
  int diff;
  //if the first price is greater than or equal to the second price
  if(p1 >= p2)
    {
      diff = p1 - p2;
      Price diffOb(diff/100, diff%100);
      return diffOb;
    }
  else //if the first price is less than the second price
    {
      Price negOb(-9999999, -9999999);//Don't do the math if p2 is less than p1
      return negOb;
    }
}

int Price::getDollar() const
{
  return dollar;
}

int Price::getCent() const
{
  return cent;
}

