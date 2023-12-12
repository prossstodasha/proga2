#include "Header.h"
#include <windows.h>
 
int main() {
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
 
    const int MAX_STUDENTS = 10; // Максимальное количество студентов
 Student students[MAX_STUDENTS];
 Sportsman sportsman;
 Activist activist;
    Nauchnic nauchnic;
    Ckmr ckmr;
 
    cout << "Введите количество студентов: ";
    int count;
    cin >> count;
 
    // Ввод данных для каждого студента
    for (int i = 0; i < count; ++i) {
        students[i].inputData();
    }
 
    for (int i = 0; i < count; i++)
    {
        students[i].printList();
    }
 
    return 0;
}
