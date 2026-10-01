#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int* b = &a;
    cout <<"value of a " <<a <<endl;
    cout <<"value of a " <<*b<<endl;
    cout <<"addr of  a " <<b<<endl;
    cout <<"addr of  a " <<&a<<endl;
    
    int **c = &b;
    cout<<endl;
    cout <<"addr of a or value at memory address of b " << *c<<endl;
    cout <<"addr of a or value at memory address of b " << &a<<endl;
    cout <<"value of a " << **c<<endl;
    cout <<"value of a " << a<<endl;
    cout <<"addr of  b " <<c<<endl;
    cout <<"addr of  b " <<&b<<endl;
    cout <<"addr of  c " <<&c<<endl;
    
    return 0;
}
