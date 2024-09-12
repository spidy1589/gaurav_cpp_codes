#include <iostream>
using namespace std;

class Sample {
public:
    // Default constructor
    Sample() {
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized constructor
    Sample(int num) {
        cout << "Parameterized Constructor Called with value: " << num << endl;
    }

    // Destructor
    ~Sample() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Sample obj1; 
    Sample obj2(5); 

    return 0;
}
