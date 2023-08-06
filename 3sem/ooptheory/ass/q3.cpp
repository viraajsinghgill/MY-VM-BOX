#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    
    ofstream dest("destination.txt");
    ifstream src("source.txt");
    char ch;
    if (src && dest)
    {
        while (src.get(ch))
        {
            if (ch == '@'  || ch == '&' || ch == '#')
                dest << ch << " ";
        }

        cout << "Copied Successfully \n";
    }
    else
    {
        cout << "Error! Not able to read file.";
    }
    dest.close();
    src.close();
    
    return 0;
}
