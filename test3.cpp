#include <iostream>
using namespace std;
class Circle {
private:
  double radius;

public:
  // Constructor
  Circle(double r) {
    radius = r;
  }

  // Member function to calculate the area
  double calculateArea() {
    return 3.14159 * radius * radius;
  }

  // Getter for the radius
  double getRadius() {
    return radius;
  }

  // Setter for the radius
  void setRadius(double r) {
    radius = r;
  }
};

int main()
{
  Circle myCircle(5);
  double area = myCircle.calculateArea();
  myCircle.setRadius(2);
   double area2 = myCircle.calculateArea();
   cout << "first time :" << area <<endl;
   cout << "after : "<< area2 << endl;
}