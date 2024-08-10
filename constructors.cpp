#include<iostream>

using namespace std;

class data
{
    public:
    int age;
    data()
    {
        cout<<"constructor called \n";
    }

    data(int age) // parameterised constructor
    {
        this->age = age;
        cout<<"age is : "<<age<<endl;
    }

    // data(data & temp) //copy constructor
    // {
    //     this->age = temp.age;
    // }

    void print()
    {
        cout<<"age is :"<<age<<endl;
    }

    ~data()
    {
        cout<<"distructor called "<<endl;
    }
};



int main()
{
    // data d1; // static constructor 

    // // dyanmic constructor called
    // data *d2 = new data;
    // // or
    // data *d3 = new data();

    // data dt(50);  //parameterised constructor
    // dt.age =90;
    // cout<<"is age : "<<dt.age;

    data dt(50);    //default and manmade constructor
    data R(dt);
    R.print();
    // method for calling distructor in dynamically created object
    // data *p = new data; 
    // delete p;
}