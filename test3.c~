//Antonio Monje
//cs211 Assignment 6
//LL palindrome client
//==================================================================================================================
#include <iostream>
using namespace std;
#include "LL_T.h"
#include <string>

//How to call: pass the object and a string
//Purpose: to create a linked list
void createLL(LL<char> &l, string s);
//How to call: pass both objects
//Purpose: to check if the input is a palindrome
bool palindrome(LL<char> &l1);

int main()
{
  LL<char> l1, l2;//creates two objects
  string s;//string variable

  cout << "Enter a phrase: ";
  getline(cin, s);// gets the input from the user

  createLL(l1, s);//calls the function to create the linked list
  //  createLL(l2, s);//calls the function to create the linked list

  l1.displayAll();//displays the linked list u created in uppercase form

  if(palindrome(l1))//checks if its a palindrome if yes show message
    cout << ": The statement is a palindrome" << endl;
  else// if not a palindrome show this message
    cout << ": !!The statement is -NOT- a palindrome!!" << endl;
  

  
  return 0;
}
//Purpose: To create a linked list
//Parameters: passes the object and the input
//Algorithm: for loop that adds and element to the rear to create the linked list
void createLL(LL<char> &l, string s)
{
  char letter;
  for(int i = 0; i < s.length(); i++)//for loop for the length of the string
    {
      letter = s[i];//sets variable equal to the character at that point in the loop from the string
      if(isalpha(letter))//checks if input is a character
	{
	  l.addRear(toupper(letter));//converts all letters to uppercase
	}
    }

}
//purpose: to check if its a palindrome
//Parameters: both the linked list you created
//Algorithm: while loop that checks if the elements are not the same as each other
bool palindrome(LL<char> &l1)
{
  while(!l1.isEmpty())//while not empty check that the first element is the same
    {
      if(l1.deleteFront() != l1.deleteRear())//checks if their different
	return false;// if their not the same return false
    } 
  return true;//if their the same return true
}
