#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;

    int A[20][20], B[20][20], C[20][20];

    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> A[i][j];

    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> B[i][j];

    // Addition
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Resultant Matrix (A + B):\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
