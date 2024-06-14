#include <iostream>
#include <vector>
using namespace std;

// Hàm s?p x?p d?i ch? tr?c ti?p (Interchange Sort)
void interchangeSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Hàm in mang ra màn hình
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr;
    int n, value;

    cout << "Nhap so luong phan tu: ";
    cin >> n;

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        arr.push_back(value);
    }

    cout << "Mang ban dau: ";
    printArray(arr);

    interchangeSort(arr);

    cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}

