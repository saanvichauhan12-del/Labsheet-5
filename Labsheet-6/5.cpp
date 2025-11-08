#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int even = 0, odd = 0;

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers count = " << even << endl;
    cout << "Odd numbers count = " << odd;

    return 0;
}
