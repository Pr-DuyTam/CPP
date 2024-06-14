#include <iostream>
#include <vector>

// H�m ho�n d?i hai ph?n t?
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// H�m ph�n chia m?ng th�nh hai ph?n
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Ch?n ph?n t? ch?t (pivot)
    int i = low - 1; // Ch? s? c?a ph?n t? nh? hon

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// H�m th?c hi?n thu?t to�n quick sort
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // V? tr� c?a ph?n t? ch?t

        // S?p x?p c�c ph?n t? tru?c v� sau ph?n t? ch?t
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(arr, 0, arr.size() - 1);

    std::cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}

