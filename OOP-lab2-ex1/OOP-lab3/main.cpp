#include "NumberList.h"
#include <iostream>
using namespace std;

int main() {
    NumberList list;
    list.Init();

    int num, total;
    cout << "Cate numere adaugi? (Max 10): ";
    cin >> total;

    if (total > 10) total = 10;

    for (int i = 0; i < total; i++) {
        cout << "Introduceti numarul " << i + 1 <<": ";
        cin >> num;
        list.Add(num);
    }

    cout << "Inainte de sortare:" << endl;
    list.Print();

    list.Sort();
   cout << "Dupa sortare:" << endl;
    list.Print();

    return 0;
}

