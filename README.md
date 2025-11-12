📘 Project Title: Number of Days, Hours, Minutes, and Seconds from a Given Year
🧩 Description

This C++ program calculates the total number of days, hours, minutes, and seconds in a given year entered by the user.
It also determines whether the year is a leap year or not, which affects the number of days (366 or 365).

⚙️ Features

Accepts a year input from the user.
Checks if the year is a leap year.
Calculates and displays:
Number of days in the year.
Equivalent hours, minutes, and seconds.
Displays all results in a clear and formatted way.

🧮 Leap Year Logic

A year is a leap year if:
It is divisible by 400, or
It is divisible by 4 but not by 100.

💻 Example Output
Enter a year: 2024  
This year [2024] is a leap year.  
Number of days: 366  
Hours: 8784  
Minutes: 527040  
Seconds: 31622400  

🛠️ Technologies Used
Language: C++
Compiler: Any standard C++ compiler (e.g., Visual Studio, Code::Blocks, g++).

⚙️ How It Works
The program asks the user to enter the month and year.
It checks whether the year is a leap year to determine the number of days in February.
It uses a mathematical formula to find the starting day of the month (Saturday, Sunday, etc.).
It prints the names of the days in the first row, then arranges the days below using setw() to keep the columns aligned.

🧩 Main Functions
ReadYear() and ReadMonth(): Read the user's input.
IsLeapYear(year): Determines if the year is a leap year.
NumberOfDaysInMonth(month, year): Returns the number of days in the given month.
DayOfWeek(day, month, year): Calculates the weekday on which the month starts.
PrintDaysOfMonth(month, year): Prints the calendar days in a structured week grid.
PrintCalendarForm(): The main function that coordinates and combines all previous functions to display the full calendar.

💻 Example Output
Enter a Month? 10
Enter a Year? 2025
_______________________Oct______________________
    Sat    Sun    Mon    Tue    Wed    Thu    Fri
              1      2      3      4      5      6
      7      8      9     10     11     12     13
     14     15     16     17     18     19     20
     21     22     23     24     25     26     27
     28     29     30     31
_________________________________________________

🛠️ Technologies Used
Language: C++
Compiler: Any standard C++ compiler (e.g., Visual Studio, Code::Blocks, g++).

👨‍💻 Author
Created by Hazem Ahmad Mohamed as part of learning and practicing C++ fundamentals.
