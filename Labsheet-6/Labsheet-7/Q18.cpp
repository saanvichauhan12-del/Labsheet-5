#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char src[100], dest[100];

    cout << "Enter a string: ";
    cin.getline(src, 100);

    strncpy(dest, src, 5);  // copy first 5 chars
    dest[5] = '\0';         // add null terminator

    cout << "First 5 characters: " << dest;

    return 0;
}
