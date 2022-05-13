
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    float distance, time, speed;
    cout << "Введите расстояние (км): \n";
    cin >> distance;
    cout << "Введите время (мин): \n";
    cin >> time;

    cout <<"Вам нужно двигаться со скоростью " << distance / time <<"(км/м)";
}

