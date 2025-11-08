#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[100], destination[100];

    cout << "Enter a string: ";
    cin.getline(source, 100);

    strcpy(destination, source);

    cout << "Copied string = " << destination;

    return 0;
}
