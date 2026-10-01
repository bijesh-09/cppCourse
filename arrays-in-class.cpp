#include <iostream>

using namespace std;

class Shop
{
    int counter;
    int itemID[100];
    float price[100];

public:
    void innitCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void Shop ::setPrice()
{
    cout << "Enter item id_" << counter + 1 << endl;
    cin >> itemID[counter];

    cout << "Enter item price_" << counter + 1 << endl;
    cin >> price[counter];
    counter++;
}

void Shop ::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Item id_" << i + 1  << ": " << itemID[i] << endl;

        cout << "Item price_" << i + 1  << ": " << price[i] << endl;
    }
}

int main()
{
    Shop pasal;
    pasal.innitCounter();

    pasal.setPrice();
    pasal.setPrice();
   

    pasal.displayPrice();
    return 0;
}
