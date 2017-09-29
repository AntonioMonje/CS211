#include <iostream>
#include "stack.h"
using namespace std;

bool Stack::isOperand(char ch); //return true if ch is an operand (digit)
{
  if(ch >= ‘0’ && ch <= ‘9’)
    {
    return true;
    } 
  else
    {
    return false;
    }
}


int Stack::charToInt(char ch); //convert a character to integer (if an item is a digit)
{
  ‘0’ - 48 = 0;
  //This function should only have 1 or 2 lines.
}


bool Stack::isOperator(char ch); //return true if it is an operator (+, -, *, /)
{
  if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
    return true;
}


int Stack::doMath(int opr1, char opt, int opr2); //returns the result of opr1 opt opr2 using switch would be nice
{

}
