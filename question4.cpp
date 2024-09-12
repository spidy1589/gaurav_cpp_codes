#include <iostream>
#include <string>
using namespace std;

string removeCharacter(string str, char ch) {
    string result = "";
    
    for (char c : str) {
        if (c != ch) {
            result += c;
        }
    }
    
    return result;
}

int main() {
    string input = "computer science is the future";
    char toRemove = 't';
    
    string output = removeCharacter(input, toRemove);
    cout << "Updated String: " << output << endl;
    
    return 0;
}
