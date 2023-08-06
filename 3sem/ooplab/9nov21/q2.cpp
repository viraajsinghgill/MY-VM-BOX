
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

        cout << "Item Number : ";
        cin >> num;
        cout << "Price : ";
        cin >> price;
    }
    void display()
    {
        cout << "Item Number : " << num << endl;
        cout << "Price : " << price << endl;
    }
};

int main(void)
{
    int n;
    cout << "Enter the number of items : ";
    cin >> n;
    cout << endl;
    Item ob[n];
    cout << "Enter the details of the item : " << endl;
    for (int i = 0; i < n; i++)
    {
        ob[i].getData();
        cout << endl;
    }

    cout << " Details of the Item : " << endl
         << endl;
    ;
    for (int i = 0; i < n; i++)
    {
        Item *ptrItem;
        ptrItem = &ob[i];
        ptrItem->display();
        cout << endl;
    }

    return 0;
}
