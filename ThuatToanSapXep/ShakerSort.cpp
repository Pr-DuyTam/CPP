#include <iostream>
#include <vector>

// Hàm s?p x?p Shaker Sort (Cocktail Sort)
void shakerSort(std::vector<int>& arr) {
    bool swapped = true;
    int start = 0;
    int end = arr.size() - 1;

    while (swapped) {
        // Reset swapped thành false d? ki?m tra vòng l?p ti?p theo
        swapped = false;

        // Duy?t t? trái sang ph?i
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // N?u không có s? hoán d?i nào thì m?ng dã du?c s?p x?p
        if (!swapped) break;

        // Ngu?c l?i, reset swapped thành false d? chu?n b? cho lu?t duy?t ti?p theo
        swapped = false;

        // Gi?m end vì ph?n t? cu?i cùng dã ? dúng v? trí
        --end;

        // Duy?t t? ph?i sang trái
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // Tang start vì ph?n t? d?u tiên dã ? dúng v? trí
        ++start;
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

    shakerSort(arr);

    std::cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}

