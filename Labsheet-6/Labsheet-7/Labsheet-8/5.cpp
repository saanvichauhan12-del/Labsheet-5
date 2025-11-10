#include <iostream>
using namespace std;

int countWords(string s) {
    int count = 1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ')
            count++;
    }
    return count;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Total words = " << countWords(s);
    return 0;
}
