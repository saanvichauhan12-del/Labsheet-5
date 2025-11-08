#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter number to check: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found)
        cout << key << " is present in the array.";
    else
        cout << key << " is NOT present in the array.";

    return 0;
}
