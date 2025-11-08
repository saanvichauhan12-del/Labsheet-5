#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mainStr[200], subStr[100];

    cout << "Enter main string: ";
    cin.getline(mainStr, 200);

    cout << "Enter substring to search: ";
    cin.getline(subStr, 100);

    char* pos = strstr(mainStr, subStr);

    if (pos != NULL)
        cout << "Substring found at position: " << (pos - mainStr);
    else
        cout << "Substring NOT found.";

    return 0;
}
