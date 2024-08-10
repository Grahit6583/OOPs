#include<iostream>
#include<string.h>

using namespace std;

class data
{
    private:
        int age;
        int roll_no;
    public:
        char *name ;
        data()
        {
            name = new char[100];
        }
        data(data& temp)
        {
            char *ch = new char[strlen(temp.name)+1];
            strcpy(ch,temp.name);
            this->name = ch;
            this->age = temp.age;
            this->roll_no = temp.roll_no;
        }


        void setname(char name[])
        {
            strcpy(this->name,name);
        }
        void setage(int age)
        {
            this->age = age;
        }
        void setroll_no(int roll_no)
        {
            this->roll_no = roll_no;
        }
        void print()
        {
            cout<<"Name : "<<this->name<<endl;
            cout<<"Roll No. : "<<this->roll_no<<endl;
            cout<<"Age : "<<this->age<<endl;
            cout<<endl;
        }
};

int main()
{
    // ----------------------shallow copy ----------------------------- //
    /*data d1;
    d1.setage(36);
    d1.setroll_no(32);
    char naam[10] = "Ram";
    d1.setname(naam);

    d1.print();

    data d2;
    d2 = d1;
    d2.print();

    naam[0] = 's';
    d1.setname(naam);
    d1.print();

    d2.print();*/

    // ----------------------deep copy -------------------------------- //

    data d1;
    d1.setage(36);
    d1.setroll_no(32);
    char naam[10] = "Ram";
    d1.setname(naam);

    d1.print();

    data d2(d1);
    d2.print();

    naam[0] = 's';
    d1.setname(naam);
    d1.print();

    d2.print();

}