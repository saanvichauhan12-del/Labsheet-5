#include <iostream>
#include <cstring>   // for strlen()
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int length = strlen(str);

    cout << "Length of the string = " << length;

    return 0;
}
