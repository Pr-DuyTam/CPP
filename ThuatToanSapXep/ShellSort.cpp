#include <iostream>
#include <vector>

// H�m s?p x?p Shell Sort
void shellSort(std::vector<int>& arr) {
    int n = arr.size();

    // B?t d?u v?i kho?ng c�ch l?n, sau d� gi?m d?n kho?ng c�ch
    for (int gap = n / 2; gap > 0; gap /= 2) {
        // Th?c hi?n s?p x?p ch�n cho c�c ph?n t? ? kho?ng c�ch gap
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

// H�m in m?ng ra m�n h�nh
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

    shellSort(arr);

    std::cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}

