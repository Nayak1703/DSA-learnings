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

void pattern12(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1;
        }
        for (int k = 0; k < 2 * (n - i) - 2; k++) {
            cout << " ";
        }
        for (int l = i + 1; l > 0; l--) {
            cout << l;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern13(int n) {
    int count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << count++ << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        for (char j = 'A'; j <= 'A' + i; j++) {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        for (char j = 'A'; j <= 'A' + n - i - 1; j++) {
            cout << j;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern16(int n) {
    for (char i = 'A'; i < 'A' + n; i++) {
        for (char j = 'A'; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern17(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        char ch = 'A';
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << ch;

            if (k < (2 * i + 1) / 2) {
                ch++;
            } else {
                ch--;
            }
        }
        cout << endl;
    }
    cout << endl;
}

void pattern18(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 65 + n - 1 - i;
        for (char j = 0; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    cout << endl;
}

void pattern19(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        for (int k = 0; k < 2 * i; k++) {
            cout << " ";
        }
        for (int l = 0; l < n - i; l++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        for (int k = 0; k < 2 * (n - i) - 2; k++) {
            cout << " ";
        }
        for (int l = 0; l < i + 1; l++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern20(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        int star = i + 1;
        int space = 2 * (n - i) - 2;
        if (i > n - 1) {
            star = 2 * n - i - 1;
            space = 2 * (i - n) + 2;
        }

        for (int j = 0; j < star; j++) {
            cout << "*";
        }

        for (int k = 0; k < space; k++) {
            cout << " ";
        }

        for (int l = 0; l < star; l++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}

void pattern21(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
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

    // hard.
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    return 0;
}