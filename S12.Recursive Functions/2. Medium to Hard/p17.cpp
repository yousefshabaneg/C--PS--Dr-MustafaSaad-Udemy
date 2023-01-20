#include <iostream>
using namespace std;
/*
    ? Fibonacci
    ! Implement fibonacci: int Fibonacci(int n)
    TODO: Recall fibonacci sequence: 1 1 2 3 5 8 13 21 35
    todo: e.g. fibonacci(6) = 13
    todo: recall that: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2). E.G--> fib(5) + fib(4) = 13
      * so it calls 2 subproblems of its type
*/

double answers[100]{0};

double fibonacci(int n)
{
  if (n <= 1)
    return 1;

  if (answers[n] != 0)
    return answers[n];

  answers[n] = fibonacci(n - 1) + fibonacci(n - 2);
  return answers[n];
}
int main()
{
  double x = fibonacci(60);
  cout << x;

  return 0;
}
