#include<iostream>

using namespace std;

struct Employee
{
    string name;
    float salary;
};

using Emp = Employee;




int main(){
    Emp e;
    e.name = "Pro";
    e.salary = 1000000;
    cout << e.name << endl;
    cout << e.salary << endl;
    return 0;
}