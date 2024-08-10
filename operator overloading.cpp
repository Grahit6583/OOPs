#include<iostream>

using namespace std;

class A
{
    public:
        int a;
        int b;
    public:
        int add()
        {
            return a+b;
        }

        void operator +(A &obj)
        {
            int num1 = this->a;
            int num2 = obj.a;
            cout<<num2-num1;
        }
        void operator -(A &obj)
        {
            int num1 = this->a;
            int num2 = obj.a;
            cout<<num2+num1;
        }
};

int main()
{
    A obj1,obj2;
    obj1.a=23;
    obj2.a=45;
    obj1+obj2;
    cout<<endl;
    obj1-obj2;
}