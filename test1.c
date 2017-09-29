//Antonio Monje
//cs211 Assignment 5
//2 Large Int client file
//========================================================
#include <iostream>
using namespace std;
#include "LL_T.h"
#include "inputCheck.h"
//Prototypes
void createReverseLL(LL<int> &l, string s);
void addLLs(LL<int> &l1, LL<int> &l2, LL<int> &total);


int main()
{
  //this part gets the users input
  string n1, n2;
  cout << "Please enter a positive number: ";
  cin >> n1;// input 1
  cout << "Please enter second positive number: ";  
  cin >> n2;// input 2
 
  
  LL<int> l1;//creates the linked queue object
  createReverseLL(l1, n1);//reverses the input
  LL<int> l2; //creates the linked queue object
  createReverseLL(l2, n2);  //reverses the input
  
  LL<int> total;// object for the total
  l1.displayAll();//displays the input
  cout << "+";
  l2.displayAll();// displays the second input
  cout << "=";
  addLLs(l1, l2, total);//adds the inputs
  total.displayAll();//displays the total
  /////////////////////////////
  cout << endl;
  cout << n1 << "+" << n2 << "=";//displays the inputs
  total.PrintAllReverse();// displays the answer backwards so normal
  cout << endl;

  return 0;
}

//purpose: To reverse the inputs and make the linked list from the strings
//Parameter: linked list u want to create and the input string ur using for the linked list
//Algorithm: a for loop that adds each part to the end of the linked list each time 

template <class T>
void createReverseLL(T &l, T s)
{
  T num;
  for(T i = s.length()-1; i != -1; i--)//starts at the top of the string and ends until -1
    {
      num =s[i];
      l.addRear(atoi(&num));// changes the character to integer
    } 
}

//purpose: To add linked list u created
//Parameter: linked list two linked list you created and the new one you want to create
//Algorithm: a while loop that adds each part to from the deleted front to the new linked list each time
template <class T>
void addLLs(T &l1, T &l2, T &total)
{
  T num1;
  T num2;
  T sum = 0;
  T r = 0;
  while(!l1.isEmpty() || !l2.isEmpty() || r == 1)//while not empty  add the two numbers
    {
      if(l1.isEmpty())//if empty set the number to zero so it adds something
	num1 = 0;
      else//else get the first number out to add to the other linked list
	num1 = l1.deleteFront();
      if(l2.isEmpty())//if empty set the number to zero so it adds something
        num2 = 0;
      else//else get the first number out to add to the other linked list
        num2 = l2.deleteFront();
      
      sum = num1 + num2 + r;// add them to the new linked list
      r = 0;
      if(sum > 9)// check for any remainder
	{
	  sum = sum - 10;
	  r = 1;
	}
      
      total.addRear(sum);// add the sum to the new linked list
    }
}
