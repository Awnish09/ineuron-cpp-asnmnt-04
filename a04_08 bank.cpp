/*Define a class Bank and define member functions to read principal , rate of interest and year. Another member functions to calculate simple interest and display it.
Initialize all details using constructor.*/

#include<iostream>
using namespace std;

class Bank
{
    private:
        int principal, rate, year;
        float intrst;
    public:
        Bank(int x, int y, int z)
        {
            principal=x;
            rate=y;
            year=z;
        }
        void interest()
        {
            intrst=principal*rate*year/100;
        }
        void display()
        {
            cout<<"The interest of amount "<<principal<<" at the rate "<<rate<<"% for "<<year<<" year is "<<intrst<<endl;
        }
};

int main()
{
    Bank a1(12000,4,2);
    a1.interest();
    a1.display();

}
