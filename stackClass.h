#include <string>
using namespace std;

const int MAX = 5;
typedef string s_g;
class Stack
{
 private:
  s_g ar[MAX];
  int top;
  int bottom;

 public:
  Stack();
  stack(string);
  void push();
  void clearIt();
  void displayAll(ar);
  void stackError();
  bool isFull();
  bool isEmpty();
  s_g topeElem();
};


