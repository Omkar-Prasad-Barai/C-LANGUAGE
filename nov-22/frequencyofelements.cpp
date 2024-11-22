#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Frequency of elements:" << endl;
    for (auto pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
