#include <iostream>
using namespace std;


namespace FirstNamespace {
    void display() {
        cout << "This is the FirstNamespace! (Gaurav Codes)" << endl;
    }
}

namespace SecondNamespace {
    void display() {
        cout << "This is the SecondNamespace! (Gaurav Codes)" << endl;
    }
}

int main() {
    FirstNamespace::display();
    SecondNamespace::display();
    
    return 0;
}
