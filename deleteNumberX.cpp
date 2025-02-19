#include <iostream>
#include <vector>

int main() {
    // Объявляем переменную для размера вектора
    int n;
    std::cout << "Input vector size: ";
    std::cin >> n;

    // Объявляем вектор целых чисел
    std::vector<int> numbers(n);