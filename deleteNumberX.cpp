#include <iostream>
#include <vector>
#include <algorithm> // Необходимо подключить для std::remove

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
    numbers.erase(std::remove(numbers.begin(), numbers.end(), x), numbers.end());

    // Выводим итоговое состояние вектора
    std::cout << "Result: ";
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << (i == numbers.size() - 1 ? "" : " ");
    }
    std::cout << std::endl;

    return 0;
}
