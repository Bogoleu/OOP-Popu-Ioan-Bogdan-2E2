#include "Student.h"
#include "StudentComparison.h"
#include <iostream>
using namespace std;

int main() {
    Student s1, s2;

    cout << "Enter name for student 1: ";
    string name1;
    cin >> name1;
    s1.SetName(name1);

    cout << "Enter Math grade for student 1: ";
    float math1;
    cin >> math1;
    s1.SetMathGrade(math1);

    cout << "Enter English grade for student 1: ";
    float english1;
    cin >> english1;
    s1.SetEnglishGrade(english1);

    cout << "Enter History grade for student 1: ";
    float history1;
    cin >> history1;
    s1.SetHistoryGrade(history1);

    cout << "Enter name for student 2: ";
    string name2;
    cin >> name2;
    s2.SetName(name2);

    cout << "Enter Math grade for student 2: ";
    float math2;
    cin >> math2;
    s2.SetMathGrade(math2);

    cout << "Enter English grade for student 2: ";
    float english2;
    cin >> english2;
    s2.SetEnglishGrade(english2);

    cout << "Enter History grade for student 2: ";
    float history2;
    cin >> history2;
    s2.SetHistoryGrade(history2);

    cout << "\nComparison Results:\n";

    int nameComparison = CompareByName(s1, s2);
    if (nameComparison == -1) {
        cout << "Comparing by name: " << s1.GetName() << endl;
    }
    else if (nameComparison == 1) {
        cout << "Comparing by name: " << s2.GetName() << endl;
    }
    else {
        cout << "Comparing by name: Both have the same name." << endl;
    }

   
    int mathComparison = CompareByMathGrade(s1, s2);
    if (mathComparison == -1) {
        cout << "Comparing by Math grade: " << s1.GetName() << endl;
    }
    else if (mathComparison == 1) {
        cout << "Comparing by Math grade: " << s2.GetName() << endl;
    }
    else {
        cout << "Comparing by Math grade: Both have the same Math grade." << endl;
    }


    int englishComparison = CompareByEnglishGrade(s1, s2);
    if (englishComparison == -1) {
        cout << "Comparing by English grade: " << s1.GetName() << endl;
    }
    else if (englishComparison == 1) {
        cout << "Comparing by English grade: " << s2.GetName() << endl;
    }
    else {
        cout << "Comparing by English grade: Both have the same English grade." << endl;
    }


    int historyComparison = CompareByHistoryGrade(s1, s2);
    if (historyComparison == -1) {
        cout << "Comparing by History grade: " << s1.GetName() << endl;
    }
    else if (historyComparison == 1) {
        cout << "Comparing by History grade: " << s2.GetName() << endl;
    }
    else {
        cout << "Comparing by History grade: Both have the same History grade." << endl;
    }


    int averageComparison = CompareByAverageGrade(s1, s2);
    if (averageComparison == -1) {
        cout << "Comparing by average grade: " << s1.GetName() << endl;
    }
    else if (averageComparison == 1) {
        cout << "Comparing by average grade: " << s2.GetName() << endl;
    }
    else {
        cout << "Comparing by average grade: Both have the same average grade." << endl;
    }

    return 0;
}
