#include <iostream>
using namespace std;
 
class a;
 
class b
{
private:
    int number;
public:
    b(int x)
    {
        number = x;
    }
void friend greatest(a a1,b b1);
};
 
class a 
{   
private:
    int number;
public: 
    a(int x)
    {
        number = x;
    }
void friend greatest(a a1,b b1);
};
 
void greatest(a a1,b b1)
{
    if(a1.number > b1.number)
    {
        cout<<"\n Number in class A is greatest i.e. "<<a1.number;
    }
    else if(a1.number < b1.number)
    {
        cout<<"\n Number in class B is greatest i.e. "<<b1.number;
    }
    else
    {
        cout<<"\n Number in both classes are equal";
    }
}
 
int main()
{
    cout<<"Program to find greatest of two numbers in two different classes using friend function"<<endl;
    int num;

    cout<<"Enter number for class A - ";
    cin>>num;
    a a1(num);
 
    cout<<"Enter number for class B - ";
    cin>>num;
    b b1(num);
 
    greatest(a1,b1);

    return 0;
}