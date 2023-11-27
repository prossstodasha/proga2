#include <string>
#include <vector>
#include <map>

using namespace std;

struct Student { //��������� �������
    string name;
    string faculty;
    vector<string> subjects;
    vector<int> grades;
};

map<string, vector<Student>> studentsByFaculty;

void addStudent(const string& name, const string& faculty, const vector<string>& subjects, const vector<int>& grades) { //����� ���������� �������� 
    Student newStudent = { name, faculty, subjects, grades };
    studentsByFaculty[faculty].push_back(newStudent);
}

int calculateStudentDebts(const string& name) { //����� �������� ������
    int totalDebts = 0;
    for (const auto& faculty : studentsByFaculty) {
        for (const auto& student : faculty.second) {
            if (student.name == name) {
                for (size_t i = 0; i < student.subjects.size(); ++i) {
                    if (student.grades[i] < 25) {
                        totalDebts++;
                    }
                }
            }
        }
    }
    return totalDebts;
}

int calculateTotalDebts() { //����� �������� ��������� ������
    int totalDebts = 0;
    for (const auto& faculty : studentsByFaculty) {
        for (const auto& student : faculty.second) {
            for (size_t i = 0; i < student.subjects.size(); ++i) {
                if (student.grades[i] < 25) {
                    totalDebts++;
                }
            }
        }
    }
    return totalDebts;
}