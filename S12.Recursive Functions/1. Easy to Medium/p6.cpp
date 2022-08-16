#include <iostream>
using namespace std;
/*
    ? Array Increment
    ! increment each arr[i] with it's {i}

    TODO: void arr_increment(int arr[], int len)
    TODO: E.g arr_increment( [1,8,2,10,3], 5 ) ==> 4.8

*/

void arr_increment(int arr[], int len)
{
  if (len == 0)
    return;

  arr_increment(arr, len - 1);
  arr[len - 1] += len - 1;
}

int main()
{
  int arr[4]{1, 2, 5, 9};

  arr_increment(arr, 4);

  for (int i = 0; i < 4; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
