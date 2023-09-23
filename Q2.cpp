#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    string dateOfJoining;
    string department;
    string address;
public:
    inline void getdata() {
    cout<<"Enter the employee name: ";
    cin>>name;
    cout<<"Enter the employee age: ";
    cin>>age;
    cout<<"Enter the employee date of joining: ";
    cin>>dateOfJoining;
    cout<<"Enter the employee department: ";
    cin>>department;
    cout<<"Enter the employee address: ";
    cin>>address;
    };
    inline void showdata() {
    cout<<endl<<name<<"\t"<<age<<"\t"<<dateOfJoining<<"\t"<<department<<"\t"<<address<<endl;
    };
};

 int main() {
    Employee emp1;
    cout<<"Enter the employee information:"<<endl;
    emp1.getdata();
    cout<<endl<<"The employee information is:";
    emp1.showdata();
    return 0;
 }