#include <iostream>
#include <string>
using namespace std;

float calculateBill(int units) {
    float total = 0;
    
    if (units <= 100) {
        total = units * 0.60;
    } else if (units <= 300) {
        total = 100 * 0.60 + (units - 100) * 0.80;
    } else {
        total = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;
    }

    if (total < 50) {
        total = 50;
    }


    if (total > 300) {
        total += total * 0.15;
    }

    return total;
}

int main() {
    string name;
    int units;
    
    cout << "Enter user name: ";
    getline(cin, name);
    cout << "Enter number of units consumed: ";
    cin >> units;
    
    float charges = calculateBill(units);
    cout << "User: " << name << ", Total Charges: Rs " << charges << endl;
    
    return 0;
}
