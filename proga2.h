// Header.h
#ifndef HEADER_H
#define HEADER_H
 
#include <iostream>
#include <string>
using namespace std;
const int MAX_GRADES = 5;
 
struct Student {
 string name;
 string faculty;
    int grades[MAX_GRADES];
 string klass;
    int stipendiya;
};
 
struct Sportsman {
    string name;
    string faculty;
    int grades[MAX_GRADES];
    string klass;
    int stipendiya;
};
 
struct Activist {
    string name;
    string faculty;
    int grades[MAX_GRADES];
    string klass;
    int stipendiya;
};
 
struct Nauchnic {
    std::string name;
    std::string faculty;
    int grades[MAX_GRADES];
    string klass;
    int stipendiya;
};
 
struct Ckmr {
    string name;
    string faculty;
    int grades[MAX_GRADES];
    string klass;
    int stipendiya;
};
 
void inputData(Student& student, Sportsman& sportsman, Activist& activist, Nauchnic& nauchnic, Ckmr& ckmr) {
    cout << "К какой организации относится: ";
    getline(cin >> ws, student.klass);
 
    if (student.klass == "студент") {
        cout << "Введите ФИО: ";
        getline(cin >> ws, student.name);
        cout << "Введите факультет: ";
        getline(cin >> ws, student.faculty);
        cout << "Введите оценки (по 5 предметам): " << endl;
        for (int i = 0; i < MAX_GRADES; ++i) {
            cout << "Оценка " << i + 1 << ": ";
            cin >> student.grades[i];
        }
        bool allGradesAbove50 = true;
        for (int i = 0; i < MAX_GRADES; ++i) {
            if (student.grades[i] <= 50) {
                allGradesAbove50 = false;
                break;
            }
        }
        if (allGradesAbove50) { student.stipendiya = 1; }
        else { student.stipendiya = 0; }
    }
    else if (student.klass == "спортсмен") {
        sportsman.klass = student.klass;
        cout << "Введите ФИО: ";
        getline(cin >> ws, sportsman.name);
        cout << "Введите факультет: ";
        getline(cin >> ws, sportsman.faculty);
        cout << "Введите оценки (по 5 предметам): " << endl;
        for (int i = 0; i < MAX_GRADES; ++i) {
            cout << "Оценка " << i + 1 << ": ";
            cin >> sportsman.grades[i];
        }
        bool allGradesAbove50 = true;
        for (int i = 0; i < MAX_GRADES; ++i) {
            if (sportsman.grades[i] <= 50) {
                allGradesAbove50 = false;
                break;
            }
        }
        if (allGradesAbove50) { sportsman.stipendiya = 2; }
        else { sportsman.stipendiya = 0; }
    }
    
    else if (student.klass == "активист") {
        activist.klass = student.klass;
        cout << "Введите ФИО: ";
        getline(cin >> ws, activist.name);
        cout << "Введите факультет: ";
        getline(cin >> ws, activist.faculty);
        cout << "Введите оценки (по 5 предметам): " << endl;
        for (int i = 0; i < MAX_GRADES; ++i) {
            cout << "Оценка " << i + 1 << ": ";
            cin >> activist.grades[i];
        }
        bool allGradesAbove50 = true;
        for (int i = 0; i < MAX_GRADES; ++i) {
            if (activist.grades[i] <= 50) {
                allGradesAbove50 = false;
                break;
            }
        }
        if (allGradesAbove50) { activist.stipendiya = 3; }
        else { activist.stipendiya = 0; }
    }
    else if (student.klass == "научник") {
        nauchnic.klass = student.klass;
        cout << "Введите ФИО: ";
        getline(cin >> ws, nauchnic.name);
        cout << "Введите факультет: ";
        getline(cin >> ws, nauchnic.faculty);
        cout << "Введите оценки (по 5 предметам): " << endl;
        for (int i = 0; i < MAX_GRADES; ++i) {
            cout << "Оценка " << i + 1 << ": ";
            cin >> nauchnic.grades[i];
        }
        bool allGradesAbove50 = true;
        for (int i = 0; i < MAX_GRADES; ++i) {
            if (nauchnic.grades[i] <= 50) {
                allGradesAbove50 = false;
                break;
            }
        }
        if (allGradesAbove50) { nauchnic.stipendiya = 4; }
        else { nauchnic.stipendiya = 0; }
    }
    else if (student.klass == "ЦКМР") {
        ckmr.klass = student.klass;
        cout << "Введите ФИО: ";
        getline(cin >> ws, ckmr.name);
        cout << "Введите факультет: ";
        getline(cin >> ws, ckmr.faculty);
        cout << "Введите оценки (по 5 предметам): " << endl;
        for (int i = 0; i < MAX_GRADES; ++i) {
            cout << "Оценка " << i + 1 << ": ";
            cin >> ckmr.grades[i];
        }
        bool allGradesAbove50 = true;
        for (int i = 0; i < MAX_GRADES; ++i) {
            if (ckmr.grades[i] <= 50) {
                allGradesAbove50 = false;
                break;
            }
        }
        if (allGradesAbove50) { ckmr.stipendiya = 5; }
        else { ckmr.stipendiya = 0; }
    }
    cin.ignore();
}
 
void printStudentList(Student& student, Sportsman& sportsman, Activist& activist, Nauchnic& nauchnic, Ckmr& ckmr) {
    string klass;
    cout << "Студентов какой организации вывести? (студенты, спортсмены, активисты, научники, ЦКМР): ";
    getline(cin >> ws, klass);
    if (klass == "студенты") { cout << "ФИО: " << student.name << ", Принадлежность: " << student.klass << ", Стипендия: " << student.stipendiya << endl; }
    else if (klass == "спортсмены") { cout << "ФИО: " << sportsman.name << ", Принадлежность: " << sportsman.klass << ", Стипендия: " << sportsman.stipendiya << endl; }
    else if (klass == "активисты") { cout << "ФИО: " << activist.name << ", Принадлежность: " << activist.klass << ", Стипендия: " << activist.stipendiya << endl; }
    else if (klass == "научники") { cout << "ФИО: " << nauchnic.name << ", Принадлежность: " << nauchnic.klass << ", Стипендия: " << nauchnic.stipendiya << endl; }
    else if (klass == "ЦКМР") { cout << "ФИО: " << ckmr.name << ", Принадлежность: " << ckmr.klass << ", Стипендия: " << ckmr.stipendiya << endl; }
}
 
#endif
