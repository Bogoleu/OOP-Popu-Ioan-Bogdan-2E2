#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student {
private:
    string name;
    float mathGrade;
    float englishGrade;
    float historyGrade;

public:
    void SetName(string studentName);
    string GetName() const;

    void SetMathGrade(float grade);
    float GetMathGrade() const;

    void SetEnglishGrade(float grade);
    float GetEnglishGrade() const;

    void SetHistoryGrade(float grade);
    float GetHistoryGrade() const;

    float GetAverageGrade() const;
};

#endif
