#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int main(){
  cout << "Which month would you like to print (1=Jan, 2=Feb etc..)? ";
  int month;            // needed to calculate the maximum days in that month
  cin >> month;
  cout << "which year? ";
  int year;             // needed to decide whether it's a leap year (for February)
  cin >> year;
  cout << "enter the day of the week for the 1st of the month (1=Sun, 2=Mon etc) ";
  int first;
  cin >> first;
}

int find_max_days(int month, int year){
// find the number of days in that particular month
  int max_days;
  switch (month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: max_days = 31; break;
    case 4: case 6: case 9: case 11: max_days = 30; break;
    case 2: if (year % 4 != 0 || year%100==0 && year%400!=0)
               max_days = 28;
            else max_days = 29; break;
    default: break;
  }}

string month_name(int mth){
// find the name of the month
  switch (mth){
    case 1: return "January"; break;
    case 2: return "February"; break;
    case 3: return "March"; break;
    case 4: return "April"; break;
    case 5: return "May"; break;
    case 6: return "June"; break;
    case 7: return "July"; break;
    case 8: return "August"; break;
    case 9: return "September"; break;
    case 10: return "October"; break;
    case 11: return "November"; break;
    case 12: return "December"; break;
    }
// print a heading
  /*cout << "\n        Calendar for month " << mth << " of "<< year <<endl<<endl;
  cout << " Sun Mon Tue Wed Thu Fri Sat\n";
// Print the whole month*/
}


string day_of_week (int first, int&max_days){
  int day = 1;
  cout << setw (first*4) << day; // position the "1" under the right day of the week
  int pos = first;  // used to place the number in the correct column
  for (day = 2; day <= max_days; day++){        // loop to print all the days
     if (pos % 7 == 0)              // go to a new line at the end of the week
        cout << endl;
     cout << setw(4) << day;
     pos++;
  }
// print the last weekday of the month
  cout <<"\n\nThe month ends on a ";
  switch (pos%7){
     case 1: cout << "Sunday"; break;
     case 2: cout << "Monday"; break;
     case 3: cout << "Tuesday"; break;
     case 4: cout << "Wednesday"; break;
     case 5: cout << "Thursday"; break;
     case 6: cout << "Friday"; break;
     case 0: cout << "Saturday"; break;
  }

  getch();
}

