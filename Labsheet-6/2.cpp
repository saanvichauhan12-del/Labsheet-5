#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of array elements = " << sum;
    return 0;
}
