#include <iostream>
#include <vector>

// Hàm s?p x?p chèn (Insertion Sort)
void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Di chuy?n các ph?n t? có giá tr? l?n hon key d?n m?t v? trí sau dó
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Hàm in m?ng ra màn hình
void printArray(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr;
    int n, value;

    std::cout << "Nhap so luong phan tu: ";
    std::cin >> n;

    std::cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> value;
        arr.push_back(value);
    }

    std::cout << "Mang ban dau: ";
    printArray(arr);

    insertionSort(arr);

    std::cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}

