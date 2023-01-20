#include <iostream>
using namespace std;
/*
 * assume year is 12 months , month is 30 days --> year = 360 days
 ? read an integer : days of someone age --> print 3 number {total years, total months, remaining days}
 * 360 -> 1 0 0
 * 10 -> 0 0 10
 */

int main()
{
  int days, years, months;
  cin >> days;

  years = days / 360;

  days %= 360;

  months = days / 30;
  days %= 30;

  cout << years << " " << months << " " << days << endl;

  return 0;
}
