/*Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff*/

#include<iostream>
using namespace std;

class Bill
{
    private:
        int consumer_id, consumed_unit;
        long long int phone_no;
        char *name, consumer_no[10];
        float bill_amount;
    public:
        void get(char *n)
        {
            cout<<"Consumer Id   : ";
            cin>>consumer_id;
            cout<<"Consumer No   : ";
            cin>>consumer_no;
            name=n;
            cout<<"Consumer Name : "<<name<<endl;
            cout<<"Consumer Phone : ";
            cin>>phone_no;
            cout<<"Unit consumed : ";
            cin>>consumed_unit;
            cout<<endl<<endl;
        }
        void calculateBill()
        {
            if(consumed_unit>0 && consumed_unit<=100)
                bill_amount=consumed_unit*1.20;
            else if(consumed_unit>100 && consumed_unit<=200)
                bill_amount=(consumed_unit-100)*2.00+120;
            else if(consumed_unit>200)
                bill_amount=(consumed_unit-200)*3.00+120+200;
        }
        void displaybill()
        {
            cout<<"Consumer Id   : "<<consumer_id<<endl;
            cout<<"Consumer No   : "<<consumer_no<<endl;
            cout<<"Consumer Name : "<<name<<endl;
            cout<<"Consumer Phone : "<<phone_no<<endl;
            cout<<"Bill Amount   : "<<bill_amount<<endl;
        }

};

int main()
{
    char name[]="Ravi Kr";
    Bill a1;
    a1.get(name);
    a1.calculateBill();
    a1.displaybill();

}
