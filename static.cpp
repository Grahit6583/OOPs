#include<iostream>

using namespace std;

class data
{
    public :
        static int num;
    ~data()
    {
        cout<<"destructor called "<<endl;
    }
};

int data::num = 100;

int main()
{
    cout<<data::num<<endl;

    data d1;
    d1.num =200;
    cout<<d1.num<<endl;
}