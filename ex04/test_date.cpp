#include "Date.h"
#include <iostream>

using namespace std;

int main(void)
{
  Date d;
  int month, day, year, com;
  cout << "Input the number of month, day and year -> ";
  cin >> month >> day >> year;
  d.set(month, day, year);

  cout << endl;
  cout << "---------------------------------------" << endl;
  cout << " The command Number " << endl;
  cout << " 1 : Increase the number of month" << endl;
  cout << " 2 : Increase the number of day" << endl;
  cout << " 3 : Increase the number of year" << endl;
  cout << " 4 : Help" << endl;
  cout << " 5 : Finish" << endl;
  cout << "---------------------------------------" << endl;

  while (1)
  {
    cout << endl;
    d.print();
    cout << endl
         << "Input the command number -> ";

    cin >> com;

    if (com == 1)
      d.inc_month();
    if (com == 2)
      d.inc_day();
    if (com == 3)
      d.inc_year();
    if (com == 4)
    {
      cout << endl;
      cout << "---------------------------------------" << endl;
      cout << " The command Number " << endl;
      cout << " 1 : Increase the number of month" << endl;
      cout << " 2 : Increase the number of day" << endl;
      cout << " 3 : Increase the number of year" << endl;
      cout << " 4 : Help" << endl;
      cout << " 5 : Finish" << endl;
      cout << "---------------------------------------" << endl;
    }
    if (com == 5)
      break;
  }
}
