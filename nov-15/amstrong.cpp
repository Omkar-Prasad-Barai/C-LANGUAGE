#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, sum = 0, temp, digits = 0;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    // Count number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    // Calculate Armstrong sum
    while (temp != 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
