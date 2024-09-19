#include <bits/stdc++.h>
using namespace std;

// Easy-Medium.
void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern3(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern4(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern6(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k <= 2 * i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern9(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k <= 2 * i; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern10(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        int r = i;
        if (i >= n) {
            r = 2 * n - i - 2;
        }
        for (int j = 0; j <= r; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern11(int n) {
    for (int i = 0; i < n; i++) {
        int start;
        if (i % 2 == 0) {
            start = 1;
        } else {
            start = 0;
        }
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    // Easy-Medium.
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);

    return 0;
}