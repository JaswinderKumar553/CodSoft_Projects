#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students;
    string name;
    double grade;

    // Input student names and grades
    while (true) {
        cout << "Enter student name (or 'exit' to stop): ";
        cin >> name;

        if (name == "exit") {
            break;
        }

        cout << "Enter grade for " << name << ": ";
        cin >> grade;

        students.push_back({name, grade});
    }

    // Calculate average grade
    double totalGrade = 0.0;
    double highestGrade = students[0].grade;
    double lowestGrade = students[0].grade;

    for (const Student& student : students) {
        totalGrade += student.grade;
        highestGrade = max(highestGrade, student.grade);
        lowestGrade = min(lowestGrade, student.grade);
    }

    double averageGrade = totalGrade / students.size();

    // Display results
    cout << "\n----- Grades Summary -----\n";
    cout << "Number of students: " << students.size() << endl;
    cout << "Average grade: " << averageGrade << endl;
    cout << "Highest grade: " << highestGrade << endl;
    cout << "Lowest grade: " << lowestGrade << endl;

    return 0;
}
 