#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main()
{
    int flag = 0;
    char user_name[20], password[10];
    cout << "\nEnter username : ";
    cin.getline(user_name, 20);
    try
    {
        for (int i = 0; i < strlen(user_name); i++)
            if (isdigit(user_name[i]))
                flag = -1;
        if (flag == -1)
            throw 1;
        else
        {
            cout << "\nEnter password : ";
            cin.getline(password, 10);
            try
            {
                if (strcmp(password, "kiit"))
                    throw 1;
                else
                    cout << "\nWelcome to KIIT university !!";
            }
            catch (int)
            {
                cout << "\n password mis-matched!!";
                return 0;
            }
        }
    }
    catch (int)
    {
        cout << "\ninvalid username";
        return 0;
    }
    return 0;
}
