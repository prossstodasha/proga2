#include "proga2.h"
#include <windows.h>
#include <iostream>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int numStudents;
    cout << "Введите количество студентов: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        string name, faculty;
        int numSubjects;
        vector<string> subjects;
        vector<int> grades;

        cout << "ФИО: ";
        cin.ignore();
        getline(cin, name);
        cout << "Факультет: ";
        getline(cin, faculty);
        cout << "Количество предметов: ";
        cin >> numSubjects;
        cin.ignore();

        for (int j = 0; j < numSubjects; ++j) {
            string subject;
            int grade;
            cout << "Введите предмет " << j + 1 << ": ";
            getline(cin, subject);
            subjects.push_back(subject);
            cout << "Введите оценку за " << subject << ": ";
            cin >> grade;
            grades.push_back(grade);
            cin.ignore();
        }

        addStudent(name, faculty, subjects, grades);
    }

    string studentName;
    cout << "Введите ФИО студента, у которого хотите узнать кол-во долгов: ";
    getline(cin, studentName);
    cout << "Долгов у " << studentName << ": " << calculateStudentDebts(studentName) << endl;

    cout << "Общее кол-во долгов в университете: " << calculateTotalDebts() << endl;


    return 0;
}
