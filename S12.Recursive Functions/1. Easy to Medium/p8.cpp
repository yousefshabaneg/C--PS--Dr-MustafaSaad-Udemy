#include <iostream>
using namespace std;
/*
    ? Left Max
    ! Given array, change each element at position i to be the maximum of numbers from 0 to i
    ! input 1,3,5,7,4,2 -->
                        * [{1}], [1,{3}], [1,3,{5}], [1,3,5,{7}], [1,3,5,{7},4], [1,3,5,{7},4,2]

    TODO: void arr_accumulate(int arr[], int len)
    TODO: input 1,3,5,7,4,2 --> [1, 3, 5, 7, 7, 7]
*/

void left_max(int arr[], int len)
{
  if (len == 1)
    return;

  left_max(arr, len - 1);
  arr[len - 1] = max(arr[len - 1], arr[len - 2]);
}

int main()
{
  int arr[5]{1, 8, 2, 10, 3};

  left_max(arr, 5);

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
