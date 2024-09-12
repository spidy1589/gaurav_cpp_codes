#include <iostream>
using namespace std;

double calculateArea(double side) {
    return side * side;
}

double calculateArea(double length, double width) {
    return length * width;
}


double calculateArea(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of square: " << calculateArea(5.0) << endl;
    cout << "Area of rectangle: " << calculateArea(5.0, 3.0) << endl;
    cout << "Area of triangle: " << calculateArea(5.0, 4.0, true) << endl;
    
    return 0;
}
