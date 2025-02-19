#include <iostream>
#include <vector>

int main()
{
    // Объявляем переменную для размера вектора
    int n;
    std::cout << "Input vector size: ";
    std::cin >> n;

    // Объявляем вектор целых чисел
    std::vector<int> numbers(n);

    // Заполняем вектор числами, введенными пользователем
    std::cout << "Input numbers: ";
    for (int i = 0; i < n; ++i)
    {
        std::cin >> numbers[i];
    }

    // Объявляем переменную для числа, которое нужно удалить
    int x;
    std::cout << "Input number to delete: ";
    std::cin >> x;

    // Удаляем все элементы, равные x
    // Используем алгоритм std::erase_if (C++20 и новее) [1]
    // Если у вас более старая версия C++, можно использовать цикл и std::vector::erase() [1][7]
    