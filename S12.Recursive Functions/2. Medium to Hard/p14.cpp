#include <iostream>
using namespace std;
/*
    ? without running do_something function code
    ! Trace by hand: What does this method do?
    "ANSWER":
      * first the if condition keep going until the n got to {zero}

      * simply it, print the last digit of the number and divide it then print the last digit of the new number until
      * it get to zero. so the output get the reversed number ==> 654321

    TODO: What happens if we swapped lines 6 & 7 ?
    "Answer"
      * the output will get in the order 123456.
*/

void do_something(int n)
{
  if (n)
  {
    do_something(n / 10);
    cout << n % 10;
  }
}

//! if we swapped.
// 1- do(12345)  n = 123456 --> 6
// 2- do(1234)  n = 12345   --> 5
// 3- do(123)  n = 1234     --> 4
// 4- do(12)  n = 123       --> 3
// 5- do(1)  n = 12         --> 2
// 5- do(0)  n = 1          --> 1

int main()
{
  do_something(123456);
  return 0;
}
