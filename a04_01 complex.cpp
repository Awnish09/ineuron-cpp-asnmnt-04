/*Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts.*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void setdata(int x, int y)
        {
            a=x;
            b=y;
        }
        void showdata()
        {
            cout<<a <<" + "<<b<<"i";
        }
        Complex add(Complex x)
        {
            Complex temp;
            temp.a= a + x.a;
            temp.b= b + x.b;
            return temp;
        }
};

int main()
{
    Complex num1, num2, num3;
    num1.setdata(7,3);
    num2.setdata(5,8);
    num3=num1.add(num2);
    cout<<"The sum of complex numbers "; num1.showdata(); cout<<" and "; num2.showdata(); cout<<" is "; num3.showdata();
}
