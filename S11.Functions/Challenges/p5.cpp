#include <iostream>
using namespace std;
/*
    ? Set-Powers ?
    ! Implement this function .
    TODO: void set_power(int arr[], int len = 5, int m =2)
    Todo: this function will fill the array of len as following:
      * the i-th position: m^i, e.g. m*m*m .. i times.
      * E.g for len = 6, m = 2, ==> 1 2 4 8 16 32
      * E.g for len = 4, m = 3, ==> 1 3 9 27

    * read integer n , followed by reading integers
    * an array is called palindrome if it reads the same backward and forward.
    * arrays {1} and {1,2,3,2,1} are palindrome.
    *  5  1 3 2 3 1  -->   YES
    *  4  1 2 3 4    -->   NO


*/

void set_power(int arr[], int len = 5, int m = 2)
{
  arr[0] = 1;
  for (int i = 1; i < len; i++)
    arr[i] = arr[i - 1] * m;
}

int main()
{
  int arr[100];
  int len, m;
  cin >> len >> m;

  set_power(arr, len, m);
  for (int i = 0; i < len; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
