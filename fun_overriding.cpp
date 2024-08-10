#include<iostream>

using namespace std;

class A
{
    public:
        void getdata()
        {
            cout<<"hello world";
        }
};

class B:public A
{
    public:
        void getdata()
        {
            cout<<"ram ram";
        }
};

int main()
{
    B b1;
    b1.getdata();
}