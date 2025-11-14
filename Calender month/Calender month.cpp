#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

short ReadYear()
{
    short Year;
    cout << "\nEnter a Year? ";
    cin >> Year;
    return Year;
}

short ReadMonth()
{
    short Month;
    cout << "\nEnter a Month? ";
    cin >> Month;
    return Month;
}

bool IsLeapYear(short year)
{
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

short NumberOfDaysInMonth(short Month, short year)
{
    if (Month < 1 || Month > 12)
        return 0;

    if (Month == 2)
        return IsLeapYear(year) ? 29 : 28;

    short arr31days[7] = { 1,3,5,7,8,10,12 };
    for (int i = 0; i < 7; i++)
    {
        if (arr31days[i] == Month)
            return 31;
    }
    return 30;
}

string NameMonth(short NameMonth)
{
    string arrMonthName[] = { "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
    return arrMonthName[NameMonth];
}

short DayOfWeek(short Day, short Month, short Year)
{
    short a = (14 - Month) / 12;
    short y = Year - a;
    short m = Month + 12 * a - 2;

    return (Day + y + (y / 4) - (y / 100) + (y / 400) + (31 * m) / 12) % 7;
}

void PrintCalenderForm(short Month, short Year)
{
    int Current = DayOfWeek(1, Month, Year);
    int NumberOfDays = NumberOfDaysInMonth(Month, Year);

    printf("\n\n  ________________ %s %d _______________\n\n",
        NameMonth(Month).c_str(), Year);

    printf("   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");

    int i;

    for (i = 0; i < Current; i++)
        printf("      ");

    for (int day = 1; day <= NumberOfDays; day++)
    {
        printf("%6d", day);

        if (++i == 7)
        {
            i = 0;
            printf("\n");
        }
    }

    printf("\n  _________________________________________\n");
}

int main()
{
    short Year = ReadYear();
    short Month = ReadMonth();
    PrintCalenderForm(Month, Year);
    system("pause>0");

}
