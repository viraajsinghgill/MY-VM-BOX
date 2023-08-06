
#include <iostream>

using namespace std;
#define pi (3.141592653589)
#define ll long long

class TimeSum
{
    int hours, minutes, seconds;

public:
    void getData();

    void display();

    void Calculate(TimeSum, TimeSum);
};
void TimeSum::getData()
{
    cout << "\nHour : ";
    cin >> hours;
    cout << "\nMinute : ";
    cin >> minutes;
    cout << "\nseconds : ";
    cin >> seconds;
}
void TimeSum::display()
{
    cout << "\nFinal Time : ";
    cout << hours << "hr " << minutes << "min " << seconds << "sec"
         << "\n";
}
void TimeSum::Calculate(TimeSum t1, TimeSum t2)
{
    seconds = t1.seconds + t2.seconds;
    minutes = t1.minutes + t2.minutes + (seconds / 60);
    hours = t1.hours + t2.hours + (minutes / 60);
    seconds = seconds % 60;
    minutes = minutes % 60;
}

int main()
{
    TimeSum t1, t2, t3;
    cout << "Enter 1st Time : \n";
    t1.getData();
    cout << "\nEnter 2nd Time: \n";
    t2.getData();

    t3.Calculate(t1, t2);

    t3.display();

    return 0;
}
