#include<iostream>

using namespace std;

class A
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }
        int add(int a, int b, int c)
        {
            return a+b+c;
        }
        int add(int a, int b, int c,int d)
        {
            return a+b+c+d;
        }
};

int main()
{
    A a;
    cout<<a.add(10,20)<<endl;
    cout<<a.add(10,20,30)<<endl;
    cout<<a.add(10,20,30,40)<<endl;

}