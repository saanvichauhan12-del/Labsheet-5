#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void sortString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main() {
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    // Lowercase conversion
    for (int i = 0; i < strlen(str1); i++)
        str1[i] = tolower(str1[i]);

    for (int i = 0; i < strlen(str2); i++)
        str2[i] = tolower(str2[i]);

    // Length check
    if (strlen(str1) != strlen(str2)) {
        cout << "Not anagrams.";
        return 0;
    }

    // Sort both strings
    sortString(str1);
    sortString(str2);

    // Compare
    if (strcmp(str1, str2) == 0)
        cout << "Strings are anagrams.";
    else
        cout << "Strings are NOT anagrams.";

    return 0;
}
