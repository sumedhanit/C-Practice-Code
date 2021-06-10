#include <iostream.h>
using namespace std;
int main()
{
    number num; //object of the class
                // num.a = 1;  error becoz a is private we cannot access it we have to inisialise first
    num.c = 3;
    num.d = 4;
    num.setData(1, 2);
    num.getData();
    return 0;
}

class number
{
private:
    int a, b;

public:
    int c, d;
    void setData(int a1, int b1);
    void getData(c, d)
    {

        cout << "the value of a is" << a << endl;
        cout << "the value of b is" << b << endl;
        cout << "the value of c is" << c << endl;
        cout << "the value of d is" << d << endl;
    }
};
void number ::setData(int a1, int b1)
{
    a = a1;
    b = b1;
}