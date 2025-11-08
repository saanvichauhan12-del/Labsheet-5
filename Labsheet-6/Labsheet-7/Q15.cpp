#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[200], str2[100];

    cout << "Enter the main string: ";
    cin.getline(str1, 200);

    cout << "Enter the string to check: ";
    cin.getline(str2, 100);

    if (strstr(str1, str2) != NULL)
        cout << "String is present.";
    else
        cout << "String is NOT present.";

    return 0;
}
