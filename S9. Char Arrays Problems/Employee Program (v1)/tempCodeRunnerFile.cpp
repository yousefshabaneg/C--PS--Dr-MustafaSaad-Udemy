#include <iostream>
using namespace std;
/*
    ? Employee Program (v1)
    ! Create a program that does the following:
        ! Display the following choices:
            * 1)  Add new Employee.
                    --> Ask user to input: Name, Age, Salary, and Gender letter.
                    --> Add this to database.
            * 2)  print all Employees.
            * 3)  Delete by age.
                    --> User enter two values, start age and end age.
                    --> Find all employees with: start_age <= age <= end_age.  and remove them.
            * 4)  Update Salary by name.
                    --> User enter the name, then salary
                    --> Find employee and update his salary.
    ! will keep the program running forever. Display choices and user input from 1 to 4.
*/
int main()
{
    const int MAX = 10000;
    string names[MAX];
    int ages[MAX];
    double salaries[MAX];
    char genders[MAX];
    int added = 0;
    while (true)
    {
        int choice;
        cout << "Enter your choice:" << endl;
        cout << "1) Add new Employee." << endl;
        cout << "2) Print all Employees." << endl;
        cout << "3  Delete by age." << endl;
        cout << "4) Update Salary by name." << endl;
        cin >> choice;
        if (!(choice >= 1 && choice <= 4))
        {
            cout << "Invalid Choice, Try again..." << endl;
            continue;
        }
        switch (choice)
        {
        case 1:
        {
            cout << "Enter name: ";
            cin >> names[added];
            cout << "Enter age: ";
            cin >> ages[added];
            cout << "Enter salary: ";
            cin >> salaries[added];
            cout << "Enter gender: (M/F) ";
            cin >> genders[added];
            added++;
            break;
        }
        case 2:
        {
            if (added > 0)
            {
                for (int i = 0; i < added; i++)
                {
                    cout << names[i] << " " << ages[i] << " " << salaries[i] << " " << genders[i] << endl;
                }
                cout << endl;
            }
            else
            {
                cout << "No Employees exist, try to add some..." << endl;
                continue;
            }
            break;
        }

        case 3:
        {
            cout << "Please Enter First age and Second Age" << endl;
            int first_age, second_age;
            cin >> first_age >> second_age;
            for (int i = 0; i < added; i++)
            {
                if (ages[i] >= first_age && ages[i] <= second_age)
                {
                }
            }
            break;
        }

        case 4:
        {
            if (added > 0)
            {
                cout << "Please Enter name and salary" << endl;
                double salary;
                string name;
                cin >> name >> salary;
                for (int i = 0; i < added; i++)
                {
                    if (name == names[i])
                    {
                        salaries[i] = salary;
                    }
                }
            }
            else
            {
                cout << "No Employees exist, try to add some..." << endl;
                continue;
            }

            break;
        }

        default:
            break;
        }
    }
    return 0;
}