// main.cpp
#include "university.h"
#include <windows.h>
 
int main() {
 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
    int numberOfStudents;
    cout << "Введите кол-во студентов: ";
    cin >> numberOfStudents;
 Student* students = new Student[numberOfStudents];
 Sportsman* sportsmen = new Sportsman[numberOfStudents];
 Activist* activists = new Activist[numberOfStudents];
 Nauchnic* nauchnics = new Nauchnic[numberOfStudents];
 Ckmr* ckmrs = new Ckmr[numberOfStudents];
 
    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << "Введите детали для студента: " << i + 1 << ":\n";
 inputData(students[i], sportsmen[i], activists[i], nauchnics[i], ckmrs[i]);
    }
    cout << "\nВесь список студентов: \n";
    for (int i = 0; i < numberOfStudents; ++i) {
        printStudentList(students[i], sportsmen[i], activists[i], nauchnics[i], ckmrs[i]);
    }
 
    delete[] students;
    delete[] sportsmen;
    delete[] activists;
    delete[] nauchnics;
    delete[] ckmrs;
 
    return 0;
 
}
