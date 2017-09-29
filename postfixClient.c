//Antonio Monje
//cs211 Assignment 3
//Stack Class - Client file
//=============================================================
#include <iostream>
using namespace std;
#include "stack.h"

//Prototypes of the functions below
bool isOperand(char ch);
int charToInt(char ch);
bool isOperator(char ch);
int doMath(int opr1, char opt, int opr2);  

int main()
{
  //variable that were initialized
  Stack NewStack;
  string expr;
  bool Error = false;
  bool Error2 = false;
  int Answer = 0;
  int x;
  int y;
  //////////////////////////
  cout << "Enter an Expression: ";
  cin >> expr;
  
  //for loop from 0 to the lenght of the expression incrementing by one
  for(int i = 0; i < expr.length() && !Error; i++)   
    {
      char curItem = expr[i];      
      if(isOperand(curItem))//checking if its an operand(number)
	{
	  int num = charToInt(curItem);
	  if(!NewStack.isFull())//if stack is not full push it element in stack
	    {
	      NewStack.push(num);
	    }
	  else//stack is full and sets error to true
	    {
	      Error = true;
	    }
	}
      else if(isOperator(curItem))//checks if current item is an operator
	{
	  if(!NewStack.isEmpty())//if stack is not empty pop top element 
	    {
	      x = NewStack.pop();
	    }
	  else//stack is empty and sets error2 to true
	    {
	      Error2 = true;
	    }
	  if(!NewStack.isEmpty())//if stack is not empty pop top element
	    {
	      y = NewStack.pop();
	    }
	  else//stack is empty and set error2 to true
	    {
	      Error2 = true;
	    }	 
	  Answer = doMath(x, curItem, y);//calls math function to do math
	  if(!NewStack.isFull())//if stack is not full puts element into stack
	    {
	      NewStack.push(Answer);	  
	    }
	  else//stack is full and sets error to true
	    {
	      Error = true;
	    }
	}
      else// sets error to true
      	{
        Error = true;
      	}
      
    }
  if(Error)//if error is true cout error message
    {
      cout << "The stack is full cannot push all the items" << endl;
    }

  if(Error2)//if error2 is true cout error message
    {
      cout << "The stack is empty not enough operands" << endl;
    }

  int ans = NewStack.pop();// pops the top element if no error
  
  if(!NewStack.isEmpty() && !Error && !Error2)//if error cout message
     {
     cout << "Their is an INVALID EXPRESSION!!!" << endl;
     }   
  else if(NewStack.isEmpty() && !Error && !Error2)//if no error cout answer
     {
       cout << "The answer is: " << ans << endl;
     }   
return 0;
}


//Purpose: to check if its a operand(number)
//Parameter: chars from the expression
//Algorithm: an if statement that checks the boundary
bool isOperand(char ch)
{
  if(ch >= '0' && ch <= '9')//if character is between 0-9 return true
    {
      return true;
    }
  else//number isn't between 0-9 return false
    {
      return false;
    }
}

//Purpose: To convert the expression to an interger from a character
//Parameter: chars from the expression
//Algorithm: char - 48 to get the asciiz value
int charToInt(char ch)
{
return ch - 48; 
}

//Purpose: to check if its a operator(+-*/)
//Parameter: chars from the expression
//Algorithm: an if statement that checks if thier +-*/
bool isOperator(char ch)
{
  //if its an operator return truw
  if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
    return true;
  else// its not an operator return false
    return false;
}

//Purpose: gets the interger value and operator to do the math
//Parameter: the two operands and a operator
//Algorithm: switch statement depending on the operator does a different task
int doMath(int opr1, char opt, int opr2)
{
  int Answer;
  // if an operator the switch checks which one to do the righ clculations and 
  // returns the answer to the main
  switch(opt)
    {
    case '+': Answer = opr2 + opr1;
      break;
    case '-': Answer = opr2 - opr1;
      break;
    case '*': Answer = opr2 * opr1;
      break;
    case '/': Answer = opr2 / opr1;
      break;
    }
 
       return Answer;
}


