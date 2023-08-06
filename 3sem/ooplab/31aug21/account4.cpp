#include <iostream>
#include <string>
using namespace std;
class bank_account
{
    string name, type;
    long account;
    float amount;

public:
    void initial()
    {
        name = "viraaj";
        type = "Savings";
        account = 1;
        amount = 0.0;
    }
    void input()
    {
        cout << "Enter the Amount to be deposited \n";
        cin >> amount;
    }
    void withdraw()
    {
        float amt;
        if (amount > 0.0)
        {
            cout << "Enter the amount to be withdrawl\n";
            cin >> amt;
            {
                if (amt <= amount)
                {
                    amount = (float)amount - amt;
                }
                else
                {
                    cout << "Withdrawl not successful due to insufficient account balance\n";
                }
            }
        }
        else
        {
            cout << "Account Balance is not sufficient for withdrwal\n";
        }
    }
    void display()
    {
        cout << "\nName of the account- " << name << "\n";
        cout << "Type of  account- " << type << "\n";
        cout << "Balance left in the account- " << amount;
    }
};
int main()
{
    bank_account ob;
    ob.initial();
    ob.input();
    ob.withdraw();
    ob.display();
    return 0;
}
