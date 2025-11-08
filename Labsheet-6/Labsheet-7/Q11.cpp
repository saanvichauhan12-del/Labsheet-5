#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], copyStr[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    strcpy(copyStr, str);  // store original

    strrev(str);           // reverse original

    if (strcmp(str, copyStr) == 0)
        cout << "String is Palindrome.";
    else
        cout << "String is NOT Palindrome.";

    return 0;
}
