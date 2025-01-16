#include <iostream>
using namespace std;

class Point {
private:
  int x;
  int y;

public:
  Point() {
    x=1;
    y=1;
  }                                              // Default constructor
  friend void printPoint(const Point &point);    // Friend function
  void move(int c, int d) {                      // Overloaded member function
    x += c;
    y += d;
  }
  int getX() const { return x; }                // Accessor functions
  int getY() const { return y; }                // Accessor functions
};
void printPoint(const Point& point) {           // Friend function definition
  cout << "(" << point.x << ", " << point.y << ")" <<endl;
}

int main() {
  // Create object using the default constructor
  Point p1;
  // Print the coordinates of the two Point objects
  printPoint(p1);
  // Move the Point objects
  p1.move(1, 2);
  // Print the coordinates of the two Point objects again
  printPoint(p1);
  // Move the Point objects
  p1.move(3, 4);
  // Print the coordinates of the two Point objects again
  printPoint(p1);
  return 0;
}
