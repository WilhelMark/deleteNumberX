#include <iostream>
#include <vector>

void removeElement(std::vector<int>& vec, int x) {
    for (size_t i = 0; i < vec.size(); ) {
        if (vec[i] == x) {
            // Если элемент равен x, сдвигаем все последующие элементы на одну позицию влево
            for (size_t j = i; j < vec.size() - 1; ++j) {
                vec[j] = vec[j + 1];
            }
            // Удаляем последний элемент с помощью pop_back()
            vec.pop_back();
            // Не увеличиваем i, чтобы проверить новый элемент на этой позиции
        } else {
            ++i; // Переходим к следующему элементу
        }
    }
}

int main() {
    int n;
    std::cout << "Input vector size: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    std::cout << "Input numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    int x;
    std::cout << "Input number to delete: ";
    std::cin >> x;

    removeElement(numbers, x);

    std::cout << "Result: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
