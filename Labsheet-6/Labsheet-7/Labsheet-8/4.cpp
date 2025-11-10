#include <iostream>
using namespace std;

void copyString(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char s1[100], s2[100];

    cout << "Enter string: ";
    cin.getline(s1, 100);

    copyString(s2, s1);

    cout << "Copied string: " << s2;

    return 0;
}
