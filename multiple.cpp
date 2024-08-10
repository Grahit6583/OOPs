#include<iostream>

using namespace std;

class num1
{
    public: 
        int a;
};

class num2
{
    public:
        int b;
};

class add : public num1 ,public num2
{
    public:
        void print()
        {
            cout<<a+b<<endl;
        }
};

int main()
{
    add a1;
    a1.a=90;
    a1.b=80;
    a1.print();
}