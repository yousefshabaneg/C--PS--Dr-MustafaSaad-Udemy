#include <iostream>
using namespace std;
/*
    ? Calculator ?
    ! Write a function that allows user to do the following (menu):
    * Add 2 numbers
    * Subtract 2 numbers
    * Multiply 2 numbers
    * Divide 2 numbers
    * END the Program

    TODO: read 2 double numbers - by reference
    TODO: 4 functions, one for each operation. Don't Divide by zero.
    TODO: Function to display the menu of the 5 options - read number and return it.

        Todo : user should enter number from 1 to 5. if not, display an error message.
        Todo : if exist, end the program by printing how many operations were done.

*/

void showChoicesMessage()
{
  cout << "What do you want ? write a number for the operation: \n\n";
  cout << "1- Add 2 numbers" << endl;
  cout << "2- Subtract 2 numbers" << endl;
  cout << "3- Multiply 2 numbers" << endl;
  cout << "4- Divide 2 numbers" << endl;
  cout << "5- END the Program \n \n";
}

int menu()
{
  int choice = -1;
  while (choice == -1)
  {
    showChoicesMessage();
    cin >> choice;
    if (!(choice >= 1 && choice <= 5))
    {
      cout << "Invalid choice, try again...";
      choice = -1;
    }
  }
  return choice;
}

void read_2_num(double &a, double &b)
{
  cout << "Enter the two numbers: ";
  cin >> a >> b;
}

void add(double a, double b)
{
  cout << "a + b = " << a + b << "\n";
}

void subtract(double a, double b)
{
  cout << "a - b = " << a - b << "\n";
}

void multiply(double a, double b)
{
  cout << "a * b = " << a * b << "\n";
}

void divide(double a, double b)
{
  if (b == 0)
    cout << "Can't divide by zero, try again\n\n";
  else
    cout << "a / b = " << a / b << "\n";
}

int main()
{
  int total_operations = 0;
  double a, b;

  while (true)
  {
    int choice = menu();

    if (choice == 5)
      break;

    total_operations++;

    read_2_num(a, b);

    switch (choice)
    {
    case 1:
      add(a, b);
      break;
    case 2:
      subtract(a, b);
      break;
    case 3:
      multiply(a, b);
      break;
    case 4:
      divide(a, b);
      break;
    }
  }

  return 0;
}
