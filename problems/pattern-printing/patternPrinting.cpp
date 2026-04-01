#include <iostream>

using namespace std;

void printReverseTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            cout << "* ";
        }
        cout << '\n';
    }
}

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        int n;
        cin >> n;
        printReverseTriangle(n);
    }

    return 0;
}
