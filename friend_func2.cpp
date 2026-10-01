#include<iostream>

using namespace std;

class c2;

class c1
{
    int value1;
    public:
        void setData(int a)
        {
            value1 = a;
        }
        friend void exchange(c1 &, c2 &);
        void display()
        {
            cout << value1 << endl;
        }
    };
    
    
    class c2
    {
        int value2;
        public:
        void setData(int b)
        {
            value2 = b;
        }
        friend void exchange(c1 &, c2 &);
        void display()
        {
            cout << value2 << endl;
        }
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;

}

int main(){
    c1 o1;
    c2 o2;
    o1.setData(1);
    o2.setData(2);

    cout << "Before:" << endl;
    o1.display();
    cout << endl;
    o2.display();

    exchange(o1,o2);
    
    cout << "After exchange:" << endl;
    o1.display();
    cout << endl;
    o2.display();

    return 0;
}