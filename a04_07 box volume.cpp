/*Define a class Box and write a program to enter length, breadth and height and initialize objects using constructor also define member functions to calculate volume
of the box.*/

#include<iostream>
using namespace std;

class Box
{
    private:
        int length, breadth, height;
    public:
        Box(int x, int y, int z)
        {
            length=x;
            breadth=y;
            height=z;
        }
        int volume()
        {
            return length*breadth*height;
        }
};

int main()
{
    Box c(10,5,3);
    cout<<"The volume of the box is "<<c.volume();
}
