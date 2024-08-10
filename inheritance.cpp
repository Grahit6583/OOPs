#include<iostream>

using namespace std;

class human
{
    public :
        int age;
        int height;
        int weight;
        
        void setage(int age)
        {
            this->age = age;
        }

        void setweight(int weight)
        {
            this->weight = weight;
        }

        void setheight(int height)
        {
            this->height = height;
        }

        void print()
        {
            cout<<"age is : "<<age<<endl;
            cout<<"weigth is : "<<weight<<endl;
            cout<<"height is : "<<height<<endl;
        }
};

class male : public human
{
    public:
        
        void setdata()
        {
            human::print();
            cout<<"Hello world"<<endl;
        }
};

int main()
{
    male m1;
    m1.setage(20);
    m1.setweight(40);
    m1.setheight(6);

    m1.setdata();
}