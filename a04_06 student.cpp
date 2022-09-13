/*Define a class student and write a program to enter student details using constructor
and define member function to display all the details.*/

#include<iostream>
#include<string.h>
using namespace std;

class student
{
    private:
        int RollNo, Class;
        long long int phone_number;
        char *Name, Section;
    public:
        student(char *n, int x, char s, int y, long long int p)
        {
            Name=n;
            Class=x;
            Section=s;
            RollNo=y;
            phone_number=p;
        }
        void display()
        {
            cout<<"Name of student - "<<Name<<endl;
            cout<<"Class - "<<Class<<"    Section - "<<Section<<endl;
            cout<<"Roll No. - "<<RollNo<<endl;
            cout<<"Phone No. - "<<phone_number<<endl;
        }
};

int main()
{
    char n[20]="Rajesh Kr";
    student s(n, 5, 'A', 27, 8822946270);
    s.display();
}
