#include<iostream>

using namespace std;

class data
{
    public: 
        int age;
        int weight;
        void setdata(int age,int weight)
        {
            this->age = age;
            this->weight = weight;
        }
};

class  animal : public data
{
    public:
        int date;
        void setanimal(int date)
        {
            this->date = date;
        } 
};

class dog : public animal
{
    public:
        int dob;
        void setdog(int dob)
        {
            this->dob = dob;
        }
        void print()
        {
            cout<<"Age : "<<age<<endl;
            cout<<"weight : "<<weight<<endl;
            cout<<"Date : "<<date<<endl;
            cout<<"dob : "<<dob<<endl;
        }
};

int main()
{
    dog d1;
    d1.age=90;
    d1.weight=100;
    d1.date=2310;
    d1.dob=2610;
    d1.print();
}