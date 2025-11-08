#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of sorted array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Largest element in sorted array = last element
    cout << "Largest element = " << arr[n - 1];

    return 0;
}
