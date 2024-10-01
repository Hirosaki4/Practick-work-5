#include <iostream>

int main() {
    int sum = 0;

    //Завдання Обчислити суму квадратів чисел від 1 до 20.
    for (int num = 1; num <= 20; ++num) {
        sum += num * num; 
    }

    std::cout << "Сума квадратів чисел від 1 до 20: " << sum << std::endl;

    return 0;
}
