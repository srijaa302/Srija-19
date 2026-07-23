#include <iostream>
#include <string>
using namespace std;

class QuizScoreTracker {
private:
    string studentName;
    int score;

public:
    // Function to add student details
    void addMarks() {
        cout << "Enter Student Name: ";
        cin.ignore();
        getline(cin, studentName);

        cout << "Enter Score: ";
        cin >> score;
    }

    // Function to display grade
    void displayGrade() {
        cout << "\nStudent Name: " << studentName << endl;
        cout << "Score: " << score << endl;

        if (score >= 90)
            cout << "Grade: A" << endl;
        else if (score >= 75)
            cout << "Grade: B" << endl;
        else if (score >= 60)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: Needs Improvement" << endl;
    }
};

int main() {
    QuizScoreTracker student;

    student.addMarks();
    student.displayGrade();

    return 0;
}




