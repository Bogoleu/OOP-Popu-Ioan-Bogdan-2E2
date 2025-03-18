#include "Sort.h"
#include <iostream>
using namespace std;
int main() {
    Sort s1(5, 10, 50);
    cout << "Random values: ";
    s1.Print();
    s1.BubbleSort(true);
    cout << "Sorted (ascending): ";
    s1.Print();

    Sort s2({ 30, 10, 50, 20, 40 });
    cout << "\nInitialization list: ";
    s2.Print();
    s2.InsertSort(false);
    cout << "Sorted (descending): ";
    s2.Print();

    vector<int> vec = { 5, 15, 25, 35, 45 };
    Sort s3(vec);
    cout << "\nVector constructor: ";
    s3.Print();
    s3.QuickSort(true);
    cout << "Sorted (ascending): ";
    s3.Print();

    Sort s4("10,40,100,5,70");
    cout << "\nString constructor: ";
    s4.Print();
    s4.BubbleSort(false);
    cout << "Sorted (descending): ";
    s4.Print();

    Sort s5(4, 80, 20, 60, 40);
    cout << "\nVariadic constructor: ";
    s5.Print();
    s5.InsertSort(true);
    cout << "Sorted (ascending): ";
    s5.Print();

    return 0;
}
