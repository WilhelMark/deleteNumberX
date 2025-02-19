#include <iostream>
#include <vector>

int main() {
    // Объявляем переменную для размера вектора
    int n;
    std::cout << "Input vector size: ";
    std::cin >> n;

    // Объявляем вектор целых чисел
    std::vector<int> numbers(n);

    // Заполняем вектор числами, введенными пользователем
    std::cout << "Input numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // Объявляем переменную для числа, которое нужно удалить
    int x;
    std::cout << "Input number to delete: ";
    std::cin >> x;

    // Удаляем все элементы, равные x
    // Используем алгоритм std::erase_if (C++20 и новее) [1]
    // Если у вас более старая версия C++, можно использовать цикл и std::vector::erase() [1][7]
    numbers.erase(std::remove(numbers.begin(), numbers.end(), x), numbers.end());

    // Выводим итоговое состояние вектора
    std::cout << "Result: ";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << (i == numbers.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;

    return 0;
}
