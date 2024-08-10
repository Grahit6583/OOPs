#include<iostream>

using namespace std;

class A
{
    public:
        void fun1()
        {
            cout<<"ram ram"<<endl;
        }
};

class B : public A
{
    public:
        void fun2()
        {
            cout<<"sita sita"<<endl;
        }
};

class C : public A
{
    public:
        void fun3()
        {
            cout<<"hanuman"<<endl;
        }
};

int main()
{
    B b;
    b.fun1();
    b.fun2();

    C c;
    c.fun1();
    c.fun3();

    return 0;
}