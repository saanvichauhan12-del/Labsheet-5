#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    int words = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        // Count word when a non-space starts a new word
        if ((str[i] != ' ') && 
           (i == 0 || str[i - 1] == ' '))
            words++;
    }

    cout << "Total number of words = " << words;

    return 0;
}
