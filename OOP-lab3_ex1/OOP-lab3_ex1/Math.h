#include <cstdarg>  
#include <cstring>  

class Math
{
private:

public:

    static int Add(int a, int b);
    static int Add(int a, int b, int c);
    static int Add(double a, double b);
    static int Add(double a, double b, double c);
    static int Mul(int a, int b);
    static int Mul(int a, int b, int c);
    static int Mul(double a, double b);
    static int Mul(double a, double b, double c);
    static int Add(int count, ...); //sum a list of integers (variadic function)
    static char* Add(const char* str1, const char* str2); 
};


