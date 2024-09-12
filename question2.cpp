#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int number) {
    int original = number;
    int sum = 0;
    int digits = 0;
    

    int temp = number;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
  
    temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    

    return original == sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
    
    return 0;
}
