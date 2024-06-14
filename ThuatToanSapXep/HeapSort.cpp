#include <iostream>
#include <vector>

// Hàm de heapify mot cây con voi goc tai node i là mot index trong arr[].
// n là kích thuoc cua heap
void heapify(std::vector<int>& arr, int n, int i) {
    int largest = i; // Kh?i t?o largest nhu g?c
    int left = 2 * i + 1; // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2

    // Neu nút con trái lon hon nút goc
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // N?u nút con ph?i l?n hon largest cho d?n bây gi?
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // N?u largest không ph?i là g?c
    if (largest != i) {
        std::swap(arr[i], arr[largest]);

        // Heapify l?i cây con b? ?nh hu?ng
        heapify(arr, n, largest);
    }
}

// Hàm th?c hi?n s?p x?p Heap Sort
void heapSort(std::vector<int>& arr) {
    int n = arr.size();

    // Xây d?ng heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Trích xu?t t?ng ph?n t? m?t t? heap
    for (int i = n - 1; i >= 0; i--) {
        // Di chuy?n nút g?c hi?n t?i d?n cu?i
        std::swap(arr[0], arr[i]);

        // G?i heapify trên heap dã gi?m
        heapify(arr, i, 0);
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

    heapSort(arr);

    std::cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}

