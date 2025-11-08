#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    strrev(str);   // Reverse using built-in function

    cout << "Reversed string = " << str;

    return 0;
}
