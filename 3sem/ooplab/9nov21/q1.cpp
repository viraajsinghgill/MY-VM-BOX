#include <iostream>

using namespace std;

class Item
{
    int num;
    double price;

public:
    Item()
    {
        num = 0;
        price = 0.0;
    }
    void getData()
    {
        cout << "Enter the details of the item : " << endl;
        cout << "Item Number : ";
        cin >> num;
        cout << "Price : ";
        cin >> price;
    }
    void display()
    {
        cout << endl
             << "Displaying Details of the Item : " << endl;
        cout << "Item Number : " << num << endl;
        cout << "Price : " << price << endl;
    }
};

int main(void)
{
    Item ob1, ob2;
    cout << "For Pointer to Object :" << endl;
    ob1.getData();
    Item *ptrItem;
    ptrItem = &ob1;
    cout << endl
         << "For Normal Object : " << endl;
    ob2.getData();
    cout << endl
         << "Pointer to Object" << endl;
    ptrItem->display();
    cout << endl
         << "Normal Object" << endl;
    ob2.display();
    return 0;
}
