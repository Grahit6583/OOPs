#include<iostream>

using namespace std;

class A
{
    public:
        virtual void getdata()
        {
            cout<<"ram ram"<<endl;
        }

        virtual void setdata()=0; //pure virtual function

        void show()
        {
            cout<<"this is base class"<<endl;
        }
};

class B:public A
{
    public:
        void getdata()
        {
            cout<<"sita sita"<<endl;
        }

        void setdata()
        {
            cout<<"hello class B"<<endl;
        }

        void show()
        {
            cout<<"this is derived class ";
        }
};

int main()
{
    A* a1;
    B b1;
    a1 = &b1;

    a1->getdata();
    a1->show();
    a1->setdata();
}