#include <iostream>
#include<cctype>
using namespace std;

int getNumberInRange(int low, int high, string msg);

int main()
{
  
  cout << "Enter your score (0 to 120): ";
  int score = getNumberInRange(0, 120, "Invalid! Enter a score between 0 and 120 only: ");
  cout << score << endl;
  return 0;
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
  invalid = (atoi(input.c_str()) <= low || atoi(input.c_str()) >= high || nonNumber);

  if(invalid)
    {
      cout << msg;
      cin >> input;
    }
 
 }while(invalid);

  return atoi(input.c_str());
}
