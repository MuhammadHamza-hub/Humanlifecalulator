#include <iostream>
using namespace std;

int main()
{

    int birthyear, birthmonth, birthdate;
    int currentyear, currentmonth, currentdate;

    cout << "Enter your birth year: ";
    cin >> birthyear;

    cout << "Enter your birth month: ";
    cin >> birthmonth;

    cout << "Enter your birth date: ";
    cin >> birthdate;

    cout << "Enter current year: ";
    cin >> currentyear;

    cout << "Enter current month: ";
    cin >> currentmonth;

    cout << "Enter current date: ";
    cin >> currentdate;

    int year = currentyear - birthyear;

    int month = currentmonth - birthmonth;

    int date = currentdate - birthdate;

    if (date < 0)
    {
        date += 1;
        month--;
    }

    if (month < 0)
    {
        month += 12;
        year--;
    }

    cout << "your age is " << year << "years," << month << "months and " << date << "days old.";

    return 0;
}
