#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "Neither prime nor composite";
        return 0;
    }

    bool flag=true; // assume prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = false;  // violation → not prime
            break;
        }
    }
    // both ways correct
    if (flag==false) {
        cout << "Composite\n";
    } else {
        cout << "Prime\n";
    }

    if (!flag) {
        cout << "Composite\n";
    } else {
        cout << "Prime\n";
    }
}