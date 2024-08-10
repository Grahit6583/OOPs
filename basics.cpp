#include<iostream>
#include "outside_class.cpp"

using namespace std;

class Grahit
{
    public:
    int age;
    char name[100];
    int roll_no;
};

class object
{
    public :
    int a,b;
    void setdata(int a,int b)
    {
        cout<<a/b<<endl;
    }
};


int main()
{
    // Grahit g1;
    // g1.age=22;
    // g1.roll_no=61;
    // cout<<"age is : "<<g1.age<<endl;
    // cout<<"roll_no : "<<g1.roll_no;

    // ggpro gg1;
    // gg1.output(100,900);

    object obj1;  //static allocation
    obj1.setdata(100,10);

    object *obj2 = new object; //dynamic allocation
    (*obj2).setdata(25,5);
    obj2->setdata(36,6);
}