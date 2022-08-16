#include <iostream>
using namespace std;
/*
    ? Array Average
    ! return sum of the array with recursion

    TODO: int arr_average(int arr[], int len)
    TODO: E.g arr_average( [1,8,2,10,3], 5 ) ==> 4.8

*/

double arr_average(int arr[], int len)
{
  if (len == 1)
    return arr[0];

  double sub_result = arr_average(arr, len - 1);
  sub_result = sub_result * (len - 1);

  return (sub_result + arr[len - 1]) / len;
}

// or like p4 get the sum in another function then divide it with l

int main()
{
  int arr[5]{1, 8, 2, 10, 3};

  cout << arr_average(arr, 5);
  return 0;
}
