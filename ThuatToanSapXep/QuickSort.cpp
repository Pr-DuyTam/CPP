#include <iostream>
#include <vector>

// Hàm hoán d?i hai ph?n t?
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Hàm phân chia m?ng thành hai ph?n
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

// Hàm th?c hi?n thu?t toán quick sort
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // V? trí c?a ph?n t? ch?t

        // S?p x?p các ph?n t? tru?c và sau ph?n t? ch?t
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(arr, 0, arr.size() - 1);

    std::cout << "Mang sau khi sap xep: ";
    printArray(arr);

    return 0;
}

