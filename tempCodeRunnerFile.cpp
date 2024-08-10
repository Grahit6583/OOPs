#include<iostream>

using namespace std;

class A
{
    public:
        void setdata();
};

class B
{
    public:
        friend void A :: setdata();
};

void A :: setdata()
{
    cout<<"hello world";
}

int main()
{
    A a1;
    B b1;
    a1.setdata();

}