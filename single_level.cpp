#include<iostream>
#include<string.h>

using namespace std;

class human
{
    public:
        int age;
        int dob;

        void setdata(int age , int dob)
        {
            this->age = age;
            this->dob = dob;
        }
        void print()
        {
            cout<<"Age is : "<<age<<endl;
            cout<<"DOB is : "<<dob<<endl;
        }
};

class male : public human
{
    public:
        char name[20];
        void setdataM(char name[])
        {
            strcpy(this->name,name);
        }
        void print()
        {
            cout<<"Name is : "<<name<<endl;
            cout<<"Age is : "<<age<<endl;
            cout<<"DOB is : "<<dob<<endl;
        }
};

int main()
{
    male m1;
    char name[10]="Grahit";
    m1.setdataM(name);
    m1.setdata(21,2610);
    m1.print();
}