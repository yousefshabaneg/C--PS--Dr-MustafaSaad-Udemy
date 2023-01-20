#include <iostream>
using namespace std;
/*
    ? Array Accumulation
    ! Accumulate the array.
    ! input 1 2 3 4 5 6
    * 1, 1+2, 1+2+3 , 1+2+3+4, 1+2+3+4+5, 1+2+3+4+5+6

    TODO: void arr_accumulate(int arr[], int len)
    TODO: E.g 1 8 2 10 3 --> 1 9 11 21 24

*/

void arr_accumulate(int arr[], int len)
{
  if (len == 1)
    return;

  arr_accumulate(arr, len - 1);
  arr[len - 1] += arr[len - 2];
}

int main()
{
  int arr[5]{1, 8, 2, 10, 3};

  arr_accumulate(arr, 5);

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
