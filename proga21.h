// Header.h
#ifndef HEADER_H
#define HEADER_H
 
#include <iostream>
#include <string>
using namespace std;
const int MAX_GRADES = 5;
 
class Student {
    public:
        string name;
        string faculty;
        int grades[MAX_GRADES];
        string klass;
        int stipendiya;
    public:
        void inputData()
        {
            cout << "К какой организации относится: ";
            getline(cin >> ws, klass);
 
            if (klass == "студент") {
                cout << "Введите ФИО: ";
                getline(cin >> ws, name);
                cout << "Введите факультет: ";
                getline(cin >> ws, faculty);
                cout << "Введите оценки (по 5 предметам): " << endl;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    cout << "Оценка " << i + 1 << ": ";
                    cin >> grades[i];
                }
                bool allGradesAbove50 = true;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    if (grades[i] <= 50) {
                        allGradesAbove50 = false;
                        break;
                    }
                }
                if (allGradesAbove50) { stipendiya = 1; }
                else { stipendiya = 0; }
            }
            else if (klass == "спортсмен") {
                cout << "Введите ФИО: ";
                getline(cin >> ws, name);
                cout << "Введите факультет: ";
                getline(cin >> ws, faculty);
                cout << "Введите оценки (по 5 предметам): " << endl;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    cout << "Оценка " << i + 1 << ": ";
                    cin >> grades[i];
                }
                bool allGradesAbove50 = true;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    if (grades[i] <= 50) {
                        allGradesAbove50 = false;
                        break;
                    }
                }
                if (allGradesAbove50) { stipendiya = 2; }
                else { stipendiya = 0; }
            }
 
            else if (klass == "активист") {
                cout << "Введите ФИО: ";
                getline(cin >> ws, name);
                cout << "Введите факультет: ";
                getline(cin >> ws, faculty);
                cout << "Введите оценки (по 5 предметам): " << endl;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    cout << "Оценка " << i + 1 << ": ";
                    cin >> grades[i];
                }
                bool allGradesAbove50 = true;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    if (grades[i] <= 50) {
                        allGradesAbove50 = false;
                        break;
                    }
                }
                if (allGradesAbove50) { stipendiya = 3; }
                else { stipendiya = 0; }
            }
            else if (klass == "научник") {
                cout << "Введите ФИО: ";
                getline(cin >> ws, name);
                cout << "Введите факультет: ";
                getline(cin >> ws, faculty);
                cout << "Введите оценки (по 5 предметам): " << endl;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    cout << "Оценка " << i + 1 << ": ";
                    cin >> grades[i];
                }
                bool allGradesAbove50 = true;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    if (grades[i] <= 50) {
                        allGradesAbove50 = false;
                        break;
                    }
                }
                if (allGradesAbove50) { stipendiya = 4; }
                else { stipendiya = 0; }
            }
            else if (klass == "ЦКМР") {
                cout << "Введите ФИО: ";
                getline(cin >> ws, name);
                cout << "Введите факультет: ";
                getline(cin >> ws, faculty);
                cout << "Введите оценки (по 5 предметам): " << endl;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    cout << "Оценка " << i + 1 << ": ";
                    cin >> grades[i];
                }
                bool allGradesAbove50 = true;
                for (int i = 0; i < MAX_GRADES; ++i) {
                    if (grades[i] <= 50) {
                        allGradesAbove50 = false;
                        break;
                    }
                }
                if (allGradesAbove50) { stipendiya = 5; }
                else { stipendiya = 0; }
            }
            cin.ignore();
        }
        void printList() {
            cout << "ФИО: " << name << ", Принадлежность: " << klass << ", Стипендия: " << stipendiya << endl;
        };
};
 
    class Sportsman {
        string name;
        string faculty;
        int grades[MAX_GRADES];
        string klass;
        int stipendiya;
        public:
            void inputData()
            {
                cout << "К какой организации относится: ";
                getline(cin >> ws, klass);
 
                if (klass == "студент") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 1; }
                    else { stipendiya = 0; }
                }
                else if (klass == "спортсмен") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 2; }
                    else { stipendiya = 0; }
                }
 
                else if (klass == "активист") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 3; }
                    else { stipendiya = 0; }
                }
                else if (klass == "научник") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 4; }
                    else { stipendiya = 0; }
                }
                else if (klass == "ЦКМР") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 5; }
                    else { stipendiya = 0; }
                }
                cin.ignore();
            }
            void printList() {
                cout << "ФИО: " << name << ", Принадлежность: " << klass << ", Стипендия: " << stipendiya << endl;
            };
    };
 
    class Activist {
        string name;
        string faculty;
        int grades[MAX_GRADES];
        string klass;
        int stipendiya;
        public:
            void inputData()
            {
                cout << "К какой организации относится: ";
                getline(cin >> ws, klass);
 
                if (klass == "студент") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 1; }
                    else { stipendiya = 0; }
                }
                else if (klass == "спортсмен") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 2; }
                    else { stipendiya = 0; }
                }
 
                else if (klass == "активист") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 3; }
                    else { stipendiya = 0; }
                }
                else if (klass == "научник") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 4; }
                    else { stipendiya = 0; }
                }
                else if (klass == "ЦКМР") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 5; }
                    else { stipendiya = 0; }
                }
                cin.ignore();
            }
            void printList() {
                cout << "ФИО: " << name << ", Принадлежность: " << klass << ", Стипендия: " << stipendiya << endl;
            };
    };
 
    class Nauchnic {
        std::string name;
        std::string faculty;
        int grades[MAX_GRADES];
        string klass;
        int stipendiya;
        public:
            void inputData()
            {
                cout << "К какой организации относится: ";
                getline(cin >> ws, klass);
 
                if (klass == "студент") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 1; }
                    else { stipendiya = 0; }
                }
                else if (klass == "спортсмен") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 2; }
                    else { stipendiya = 0; }
                }
 
                else if (klass == "активист") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 3; }
                    else { stipendiya = 0; }
                }
                else if (klass == "научник") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 4; }
                    else { stipendiya = 0; }
                }
                else if (klass == "ЦКМР") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 5; }
                    else { stipendiya = 0; }
                }
                cin.ignore();
            }
            void printList() {
                cout << "ФИО: " << name << ", Принадлежность: " << klass << ", Стипендия: " << stipendiya << endl;
            };
    };
 
    class Ckmr {
        string name;
        string faculty;
        int grades[MAX_GRADES];
        string klass;
        int stipendiya;
        public:
            void inputData()
            {
                cout << "К какой организации относится: ";
                getline(cin >> ws, klass);
 
                if (klass == "студент") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 1; }
                    else { stipendiya = 0; }
                }
                else if (klass == "спортсмен") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 2; }
                    else { stipendiya = 0; }
                }
 
                else if (klass == "активист") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 3; }
                    else { stipendiya = 0; }
                }
                else if (klass == "научник") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 4; }
                    else { stipendiya = 0; }
                }
                else if (klass == "ЦКМР") {
                    cout << "Введите ФИО: ";
                    getline(cin >> ws, name);
                    cout << "Введите факультет: ";
                    getline(cin >> ws, faculty);
                    cout << "Введите оценки (по 5 предметам): " << endl;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        cout << "Оценка " << i + 1 << ": ";
                        cin >> grades[i];
                    }
                    bool allGradesAbove50 = true;
                    for (int i = 0; i < MAX_GRADES; ++i) {
                        if (grades[i] <= 50) {
                            allGradesAbove50 = false;
                            break;
                        }
                    }
                    if (allGradesAbove50) { stipendiya = 5; }
                    else { stipendiya = 0; }
                }
                cin.ignore();
            }
            void printList() {
                cout << "ФИО: " << name << ", Принадлежность: " << klass << ", Стипендия: " << stipendiya << endl;
            };
    };
 
#endif
