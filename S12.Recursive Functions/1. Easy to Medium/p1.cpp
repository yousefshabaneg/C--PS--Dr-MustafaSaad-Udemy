#include <iostream>
using namespace std;
/*
    ? Length of 3n+1 ?
    ! Write a function that compute the length of the sequence

    TODO: int length_3n_plus_1(int n)
    TODO: E.g length_3n_plus_1(6) ==> 9
    //* 6 3 10 5 16 8 4 2 1

*/

int length_3n_plus_one(int n)
{
  if (n == 1)
    return 1;

  if (n % 2 == 0)
    return 1 + length_3n_plus_one(n / 2);
  else
    return 1 + length_3n_plus_one(3 * n + 1);
}

int main()
{
  cout << length_3n_plus_one(6);
  return 0;
}
