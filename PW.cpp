#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    
    int sum = 0;

    //Завдання Обчислити суму квадратів чисел від 1 до 20.
    for (int num = 1; num <= 20; ++num) {
        sum += num * num; 
    }

    cout << "Сума квадратів чисел від 1 до 20: " << sum << endl;

    return 0;
}
