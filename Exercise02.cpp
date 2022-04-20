#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
   Rectangle  *r;// 1. Create a dynamic Rectangle type variable (pointer)
  r = new Rectangle(length, width);// 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
   Circle  *c;// 3. Create a dynamic Circle type variable (pointer)
  c = new Circle(radius);// 4. Create a dynamic Circle Object set radius that was input from the keyboard
   cout<<"Area is : "<<r->calcArea();// 5. Call the display method of the Rectangle Object
   cout<<"Area is : "<<c->calcArea();// 6. Call the display method of the Circle Object
   delete r;// 7. Delete the Rectangle Object from memory
  delete c; // 8. Delete the Circle Object from memory
  
  
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
