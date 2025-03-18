#include "Sort.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>

Sort::Sort(int count, int min, int max) {
    srand(time(0));
    for (int i = 0; i < count; i++) {
        elements.push_back(min + rand() % (max - min + 1));
    }
}
Sort::Sort(const std::vector<int>& vec) : elements(vec) {}

Sort::Sort(const std::string& str) {
    std::stringstream ss(str);
    int number;
    char comma;
    while (ss >> number) {
        elements.push_back(number);
        ss >> comma; 
    }
}

Sort::Sort(int count, ...) {
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        elements.push_back(va_arg(args, int));
    }
    va_end(args);
}

void Sort::InsertSort(bool ascendent) {
    for (size_t i = 1; i < elements.size(); i++) {
        int key = elements[i];
        int j = i - 1;
        while (j >= 0 && (ascendent ? elements[j] > key : elements[j] < key)) {
            elements[j + 1] = elements[j];
            j--;
        }
        elements[j + 1] = key;
    }
}

void Sort::BubbleSort(bool ascendent) {
    for (size_t i = 0; i < elements.size() - 1; i++) {
        for (size_t j = 0; j < elements.size() - i - 1; j++) {
            if (ascendent ? elements[j] > elements[j + 1] : elements[j] < elements[j + 1]) {
                std::swap(elements[j], elements[j + 1]);
            }
        }
    }
}

void Sort::QuickSort(bool ascendent) {
    if (elements.size() < 2) return;
    std::vector<int> left, right;
    int pivot = elements[elements.size() / 2];
    for (size_t i = 0; i < elements.size(); i++) {
        if (i == elements.size() / 2) continue;
        if (ascendent ? elements[i] < pivot : elements[i] > pivot) {
            left.push_back(elements[i]);
        }
        else {
            right.push_back(elements[i]);
        }
    }
    Sort leftSort(left);
    Sort rightSort(right);
    leftSort.QuickSort(ascendent);
    rightSort.QuickSort(ascendent);
    elements.clear();
    elements.insert(elements.end(), leftSort.elements.begin(), leftSort.elements.end());
    elements.push_back(pivot);
    elements.insert(elements.end(), rightSort.elements.begin(), rightSort.elements.end());
}


void Sort::Print() {
    for (int num : elements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int Sort::GetElementsCount() {
    return elements.size();
}

int Sort::GetElementFromIndex(int index) {
    if (index >= 0 && index < elements.size()) {
        return elements[index];
    }
    return -1; 
}
