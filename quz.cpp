#include <iostream>
#include <string>
using namespace std;

class QuizScore{
private:
    string studentName;
    int score;

public:
    void addMarks() {
        cout << "Enter Student Name: ";
        cin>> Student Name;

        cout << "Enter Score: ";
        cin >> score;
    }
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
    QuizScore student;
    student.addMarks();
    student.displayGrade();

    return 0;
}

