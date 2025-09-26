#include <iostream>

// Hàm này nhận vào "địa chỉ" của hai biến và hoán đổi giá trị tại địa chỉ đó
void hoanDoi(int* ptrA, int* ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    // --- Phần 1: Khái niệm cơ bản về con trỏ ---
    std::cout << "--- PHAN 1: KHOI NIEM CO BAN ---" << std::endl;
    int number = 99;
    int* ptrNumber = &number; // ptrNumber đang lưu ĐỊA CHỈ của 'number'

    std::cout << "Gia tri cua bien 'number': " << number << std::endl;
    std::cout << "Dia chi cua bien 'number': " << &number << std::endl;
    std::cout << "Con tro ptrNumber dang luu gia tri (dia chi): " << ptrNumber << std::endl;
    std::cout << "Gia tri tai dia chi ma ptrNumber tro toi: " << *ptrNumber << std::endl;
    std::cout << std::endl;

    // --- Phần 2: Dùng con trỏ với hàm ---
    std::cout << "--- PHAN 2: CON TRO VA HAM ---" << std::endl;
    int x = 10;
    int y = 20;
    std::cout << "Truoc khi hoan doi: x = " << x << ", y = " << y << std::endl;
    hoanDoi(&x, &y); // Truyền ĐỊA CHỈ của x và y vào hàm
    std::cout << "Sau khi hoan doi: x = " << x << ", y = " << y << std::endl;
    std::cout << std::endl;

    return 0;
}