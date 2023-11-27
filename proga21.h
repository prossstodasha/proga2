#include 
#include 
#include 

using namespace std;

class Student {
	string name;
	string faculty;
	vector subjects;
	vector grades;

public:
	Student(const string& name, const string& faculty, const vector& subjects, const vector& grades) {
		this->name = name;
		this->faculty = faculty;
		this->subjects = subjects;
		this->grades = grades;
	}
	string getName() const {
		return name;
	}

	string getFaculty() const {
		return faculty;
	}

	vector<string> getSubjects() const {
		return subjects;
	}

	vector<int> getGrades() const {
		return grades;
	}
};

class University {
	map<string, vector> studentsByFaculty;

public:
	void addStudent(const string& name, const string& faculty, const vector& subjects, const vector& grades) {
		Student newStudent(name, faculty, subjects, grades);
		studentsByFaculty[faculty].push_back(newStudent);
	}
	int calculateStudentDebts(const string& name) {
		int totalDebts = 0;
		for (const auto& faculty : studentsByFaculty) {
			for (const auto& student : faculty.second) {
				if (student.getName() == name) {
					vector<int> studentGrades = student.getGrades();
					for (size_t i = 0; i < studentGrades.size(); ++i) {
						if (studentGrades[i] < 25) {
							totalDebts++;
						}
					}
				}
			}
		}
		return totalDebts;
	}

	int calculateTotalDebts() {
		int totalDebts = 0;
		for (const auto& faculty : studentsByFaculty) {
			for (const auto& student : faculty.second) {
				vector<int> studentGrades = student.getGrades();
				for (size_t i = 0; i < studentGrades.size(); ++i) {
					if (studentGrades[i] < 25) {
						totalDebts++;
					}
				}
			}
		}
		return totalDebts;
	}