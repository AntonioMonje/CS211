#include <string>
using namespace std;

const int MAX = 10;
class Car
{
 private:
  string Make;
  string Model;
  int Year;
  string Color;
  int Miles;
  int xposition;
  int yposition;
  int car[MAX];

 public:
  Car(string, string, int, string, int, int, int);
  string getMake() const; 
  string getModel() const;
  int getYear() const;
  string getColor() const;
  void getchangeColor(string NewColor);
  int getMiles() const;
  int getxposition() const; 
  int getyposition() const;
  int getGoForward(int block);
  int getGoBackward(int block);
  int getGoLeft(int block);
  int getGoRight(int block);
  void Print(const Car& c);

};
