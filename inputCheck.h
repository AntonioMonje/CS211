/*Implemented by: Antonio Monje
Purpose: Has specific function to input information and disply it so invlid info isn't displayed.
Date: 02/09/16*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char getLetter(string msg);
char getResponse(string msg);
char getgender(string msg);
int getNumberInRange(int low, int high, string msg);
int getAgeInRange(int low1, int high1, string msg);


char getLetter(string msg)
{
  string input;
  cin >> input;
  while(input.length() != 1 || !isalpha(input[0]))
    {
      cout << msg;
      cin >> input;
    }
  return input[0];
}

char getResponse(string msg)
{
  char ch;
  ch = getLetter(msg);

  while(toupper(ch) != 'Y' && toupper(ch) != 'N')
    {
      cout << msg;
      ch = getLetter(msg);
    }
  return toupper(ch);
}

char getgender(string msg)
{
  char ch;
  ch = getLetter(msg);

  while(toupper(ch) != 'M' && toupper(ch) != 'F')
    {
      cout << msg;
      ch = getLetter(msg);
    }
  return toupper(ch);
}

int getNumberInRange(int low, int high, string msg)
{
  string input;
  bool nonNumber;
  bool invalid;
  cin >> input;

  do {
    nonNumber = false;
    for(int i = 0; i < input.length(); i++)
      {
        if(!isdigit(input[i]))
          {
            nonNumber = true;
          }
      }
    invalid = atoi(input.c_str()) < low || atoi(input.c_str()) > high || nonNumber;

    if(invalid)
      {
        cout << msg;
        cin >> input;
      }
  }while(invalid);
  return atoi(input.c_str());
}

int getAgeInRange(int low1, int high1, string msg)
{
  string input;
  bool nonNumber;
  bool invalid;
  cin >> input;

  do {
    nonNumber = false;
    for(int i = 0; i < input.length(); i++)
      {
        if(!isdigit(input[i]))
          {
            nonNumber = true;
          }
      }
    invalid = atoi(input.c_str()) <= low1 || atoi(input.c_str()) >= high1 || nonNumber;

    if(invalid)
      {
        cout << msg;
        cin >> input;
      }
  }while(invalid);
  return atoi(input.c_str());
}


