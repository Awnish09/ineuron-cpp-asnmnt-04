/*Define a class Date and write a program to Display Date and initialize date object
using Constructors.*/

#include<iostream>
using namespace std;

class Date
{
    private:
        int d, m, y;
    public:
        Date(int a, int b, int c)
        {
            d=a;
            m=b;
            y=c;
        }
        void display()
        {
            cout<<d<<"/"<<m<<"/"<<y;
        }
};

int main()
{
    Date d(12,9,2022);
    d.display();

}
