#include <iostream>
#include <vector>

// H�m s?p x?p Shaker Sort (Cocktail Sort)
void shakerSort(std::vector<int>& arr) {
    bool swapped = true;
    int start = 0;
    int end = arr.size() - 1;

    while (swapped) {
        // Reset swapped th�nh false d? ki?m tra v�ng l?p ti?p theo
        swapped = false;

        // Duy?t t? tr�i sang ph?i
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // N?u kh�ng c� s? ho�n d?i n�o th� m?ng d� du?c s?p x?p
        if (!swapped) break;

        // Ngu?c l?i, reset swapped th�nh false d? chu?n b? cho lu?t duy?t ti?p theo
        swapped = false;

        // Gi?m end v� ph?n t? cu?i c�ng d� ? d�ng v? tr�
        --end;

        // Duy?t t? ph?i sang tr�i
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        // Tang start v� ph?n t? d?u ti�n d� ? d�ng v? tr�
        ++start;
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

    shakerSort(arr);

    std::cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}

