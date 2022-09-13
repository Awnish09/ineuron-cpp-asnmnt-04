/*Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/

#include<iostream>
using namespace std;

class Staticcount
{
    private:
        static int a;
    public:
        void messgage()
        {
            cout<<"Hello\n";
            a++;
        }
        int displaycount()
        {
            return a;
        }

};
int Staticcount::a;

int main()
{
    Staticcount x;
    for(int i=1; i<=4; i++)
    {
        x.messgage();
    }
    cout<<"The result of count is "<<x.displaycount();
}
