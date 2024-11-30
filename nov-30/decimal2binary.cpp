#include <iostream>
#include <vector>
using namespace std;
int main() {
    int num;
    vector<int> binary;
    cout << "Enter a decimal number: ";
    cin >> num;

    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }

    cout << "Binary representation: ";
    for (int i = binary.size() - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;

    return 0;
}
