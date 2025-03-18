#ifndef STUDENT_COMPARISON_H
#define STUDENT_COMPARISON_H
#include "Student.h"
using namespace std;

int CompareByName(const Student& s1, const Student& s2);
int CompareByMathGrade(const Student& s1, const Student& s2);
int CompareByEnglishGrade(const Student& s1, const Student& s2);
int CompareByHistoryGrade(const Student& s1, const Student& s2);
int CompareByAverageGrade(const Student& s1, const Student& s2);

#endif
