#include <iostream>
using namespace std;
int main() {
    int n, temp, reverse = 0, remainder;
    cout << "Enter an integer: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    if (n == reverse)
        cout << n << " is a palindrome." << endl;
    else
        cout << n << " is not a palindrome." << endl;
    return 0;
}
