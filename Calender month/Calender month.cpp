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

void PrintDaysOfMonth(short Month, short Year)
{
    short daysInMonth = NumberOfDaysInMonth(Month, Year);

    short startDay = DayOfWeek(1, Month, Year); 
    short currentPosition = 0;

    
    for (short i = 0; i < startDay; i++)
    {
        cout << setw(7) << " ";
        currentPosition++;
    }

   for (short day = 1; day <= daysInMonth; day++)
   {
        cout << setw(7) << day;
        currentPosition++;

        if (currentPosition == 7)
        {
            cout << "\n";
            currentPosition = 0;
        }
   }

    if (currentPosition != 0)
        cout << "\n";
}

void PrintCalenderForm()
{
    short Month = ReadMonth();
    short Year = ReadYear();

    cout << "\n_______________________ " << NameMonth(Month) << " " << Year << " _______________________\n";
    cout << setw(8) << "Sun"
        << setw(7) << "Mon"
        << setw(7) << "Tue"
        << setw(7) << "Wed"
        << setw(7) << "Thu"
        << setw(7) << "Fri"
        << setw(7) << "Sat"
        << "\n";
    cout << "________________________________________________________\n";

    PrintDaysOfMonth(Month, Year);

    cout << "________________________________________________________\n";
}

int main()
{
    PrintCalenderForm();
    system("pause>0");
}
