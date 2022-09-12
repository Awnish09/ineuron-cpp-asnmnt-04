/*Define a class Cube and calculate Volume of Cube and initialize it using constructor.*/

#include<iostream>
using namespace std;

class Cube
{
    private:
        int side;
    public:
        Cube(int x)
        {
            side=x;
        }
        int volume()
        {
            return side*side*side;
        }
        int getside()
        {
            return side;
        }
};

int main()
{
    Cube c(5);
    cout<<"The volume of a cube of sides "<<c.getside()<<" is "<<c.volume();
}
