#pragma once
#include <vector>
#include <string>
#include <cstdarg>
class Sort
{
private:
	std::vector<int> elements;
public:
    Sort(int count, int min, int max);

    Sort(const std::vector<int>& vec);

    Sort(const std::string& str);

    Sort(int count, ...);

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    int GetElementsCount();
    int GetElementFromIndex(int index);
    void Print();

};

