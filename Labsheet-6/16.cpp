#include <iostream>
using namespace std;

int main() {
    int n, key, count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to count: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }

    cout << "Occurrences of " << key << " = " << count;

    return 0;
}
