#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter character to find last occurrence: ";
    cin >> ch;

    char* pos = strrchr(str, ch);

    if (pos != NULL)
        cout << "Last occurrence at position: " << (pos - str);
    else
        cout << "Character not found.";

    return 0;
}
