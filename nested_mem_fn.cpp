#include<iostream>
#include<string>

using namespace std;

class binary{
    string s;

    public:
    void read();
    void check();
    void onesComplement();
    void display();
    
    
};

void binary :: read(){
    cout << "Enter a binary number: " <<endl;
    cin >> s;
    check();
}
void binary :: check(){
    for (int i = 0; i < s.length(); i++)
    {
        if ( s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect format!" << endl << "Terminating...";
            exit(1);
        }
        
    }
    
    
}
void binary :: onesComplement(){
    for (int i = 0; i < s.length(); i++)
    {
        if ( s.at(i) == '0' )
        {
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
        
    }
    
}
void binary :: display(){
   cout<<s<<endl;
}

int main(){
    binary b;
    b.read();
    b.onesComplement();
    b.display();
    return 0;
}