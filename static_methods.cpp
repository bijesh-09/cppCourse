#include <iostream>

using namespace std;

class Employee
{
    static int count;
    int id;

public:
    void setData()
    {
        cout << "Enter an id:" << endl;
        cin >> id;
        count++;
    }
    void displayData()
    {
        cout << "Id: " << id << " Count: " << count << endl;
    }
    static void getCount()
    {
        cout << "Value of Counter: " << count;
    }
};

int Employee ::count;
int main()
{
    Employee bro, pro;
    bro.setData();
    bro.displayData();
    Employee ::getCount();
    pro.setData();
    pro.displayData();
    Employee ::getCount();
    return 0;
}