#include <iostream>
using namespace std;

struct employee
{
  string name;
  int age;
  double salary;
  char gender;

  void read_emp()
  {
    cout << "Enter Employee's name, age, salary and gender: ";
    cin >> name >> age >> salary >> gender;
  }

  void print_emp()
  {
    cout << name << " " << salary << " " << age << endl;
  }
};

const int MAX = 10000;
int added = 0;
employee employees_arr[MAX];

void add_emp(employee emp)
{
  employees_arr[added++] = emp;
}

employee read_emp()
{
  employee emp;
  cout << "Enter Employee's name, age, salary and gender: ";
  cin >> emp.name >> emp.age >> emp.salary >> emp.gender;
  return emp;
}

void print_employees()
{
  for (int i = 0; i < added; i++)
    employees_arr[i].print_emp();
}

int main()
{

  employee emp1 = {"Yousef", 23, 48500, 'M'};
  employee emp2 = {"Mohamed", 25, 26500, 'M'};
  add_emp(emp1);
  add_emp(emp2);

  // employee emp3 = read_emp();
  // add_emp(added, emp3);

  employees_arr[added++].read_emp();

  print_employees();

  return 0;
}
