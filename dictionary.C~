//Antonio Monje
//cs211 Assignment 7
//LL dictionary.c
//==================================================================================================================
#include <iostream>
#include "LL_T.h"
#include <fstream>
using namespace std;


void buildLL(LL<string> &ll);
void removeBadWords(LL<string>& ll);
void outputToFile(LL<string>& ll);

int main()
{
  LL<string> l;// create object l
  buildLL(l);//call the function to build the linked list
  removeBadWords(l);//call the function to delete bad words
  outputToFile(l);//call the function to make the text files have something inside
  cout << "***ACTION COMPLETE!***" << endl;
  return 0;
}

//Purpose to make a linked list
//Parameters: LL ll
//Algorithm: while in the infile check for letters and add them in that file in ascending order
void buildLL(LL<string> &ll)
{
  string word;
  char ch;
  ifstream infile;
  infile.open("essay.txt");//open the text file
  infile >> word;
  while(infile) //while the file is open
      {
	for(int i = 0; i < word.length(); i++)//for loop for the lenght of the string
      { 
	ch = word[i];// character is set equal totaht string
	if(!isalpha(ch))//checks if its a letter
	  {
	    word.erase(word.begin()+i);     //if not a letter erase it and begin after it
	  }
	else if(isalpha(ch))//if it is a letter
	  {
	    ch = tolower(ch);// make the letter lower case
	  }
      }
	if(!ll.search(word))//if the word isn't their
	  ll.addInOrderAscend(word);// add the word in ascending order
	infile >> word;// get next word the word
      }
  infile.close();// close the file
}
//Purpose to remove bad words
//Parameters: LL ll
//Algorithm: while loop that searches for any bad words
void removeBadWords(LL<string>& ll)
{
  string b;
  ifstream infile;
  infile.open("bad.txt");
  infile >> b;

  while(infile)//while the file
    {
      while(ll.search(b))//look for bad word
	ll.deleteNode(b);//delete bad word
      infile >> b;//next bad word
    }
  infile.close();//close the file
}
//Purpose to output the words in the correct file
//Parameters: LL ll
//Algorithm: get the current directory to mach words with the same letter and opens the directory  and a second while loop that closes it and opens the next file or txt
void outputToFile(LL<string>& ll)
{
  string w, w2;
  ofstream fout;

  w = ll.deleteFront();
  string fileName = "./dictionary/?.txt"; // . means the current directory.
  fileName[13] = toupper(w[0]); //Replacing ? with T
  fout.open(fileName.c_str()); //opens T.txt in the “dictionary” directory under the current directory.
  fout << w << " ";

  while(!ll.isEmpty())//while not empty
    {
      w2 = ll.deleteFront();
      if(w2[0] != w[0])
	{
	  fout.close();
	  string fileName = "./dictionary/?.txt"; // . means the current directory.
	  fileName[13] = toupper(w2[0]); //Replacing ? with T
	  fout.open(fileName.c_str()); //opens T.txt in the “dictionary” directory under the current directory.
	}
      fout << w2 << " ";
      w = w2;
    }
  fout.close();//close the file
}
