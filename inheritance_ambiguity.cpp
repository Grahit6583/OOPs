#include<iostream>

using namespace std;

class A
{
    public:
        void fun()
        {
            cout<<"ram ram"<<endl;
        }
};

class B
{
    public:
        void fun()
        {
            cout<<"sita sita"<<endl;
        }
};

class C : public A , public B
{
    public:
        void fun()
        {
            cout<<"hanuman"<<endl;
        }
};

int main()
{
    C c;
    c.A::fun();
    c.B::fun();
    c.C::fun();

    return 0;
}