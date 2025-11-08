#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();

    char sentence[500] = "";
    char temp[100];

    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        cin.getline(temp, 100);
        strcat(sentence, temp);
        if (i < n - 1)
            strcat(sentence, " ");
    }

    cout << "Joined sentence: " << sentence;

    return 0;
}
