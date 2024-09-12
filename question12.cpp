#include <iostream>
using namespace std;

class Counter {
private:
    static int count; 

public:
 
    static void incrementCount() {
        count++;
    }


    static int getCount() {
        return count;
    }
};

int Counter::count = 0;

int main() {
    Counter::incrementCount();
    Counter::incrementCount();
    cout << "Current Count: " << Counter::getCount() << endl; 

    return 0;
}
