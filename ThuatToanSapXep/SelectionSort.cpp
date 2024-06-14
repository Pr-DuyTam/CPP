#include <iostream>
#include <vector>

// Hàm s?p x?p ch?n (Selection Sort)
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        // Tìm ph?n t? nh? nh?t trong m?ng chua du?c s?p x?p
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Hoán d?i ph?n t? nh? nh?t v?i ph?n t? d?u tiên
        std::swap(arr[min_idx], arr[i]);
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

    selectionSort(arr);

    std::cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}

