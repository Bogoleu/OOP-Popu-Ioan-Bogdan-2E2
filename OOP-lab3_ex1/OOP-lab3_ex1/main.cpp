#include "Math.h"
#include <iostream>
using namespace std;

int main()
{
    
    cout << "Add(2, 3): " << Math::Add(2, 3) << endl;
    cout << "Add(1, 2, 3): " << Math::Add(1, 2, 3) << endl;

   
    cout << "Add(2.5, 3.5): " << Math::Add(2.5, 3.5) << endl;
    cout << "Add(1.1, 2.2, 3.3): " << Math::Add(1.1, 2.2, 3.3) << endl;

   
    cout << "Mul(2, 3): " << Math::Mul(2, 3) << endl;
    cout << "Mul(2, 3, 4): " << Math::Mul(2, 3, 4) << endl;

    
    cout << "Mul(2.5, 3.5): " << Math::Mul(2.5, 3.5) << endl;
    cout << "Mul(1.1, 2.2, 3.3): " << Math::Mul(1.1, 2.2, 3.3) << endl;

    
    cout << "Add(4, 1, 2, 3, 4): " << Math::Add(4, 1, 2, 3, 4) << endl;

    
    const char* str1 = "Hello, ";
    const char* str2 = "World!";
    char* result = Math::Add(str1, str2);
    if (result != nullptr)
    {
        cout << "Add(\"Hello, \", \"World!\"): " << result << endl;
        delete[] result; 
    }
    else
    {
        cout << "One of the strings is nullptr." << endl;
    }

    return 0;
}
