#include <iostream>
using namespace std;

/*  Fixed Sliding Window

    * read integers K and N, where (K <= N). then read N < 200 integers

    * find sub-array (consecutive numbers) of K elements that has maximum sum

    * Input 3  7  [ 1 0 3 -4 2 -6 9 ]

    * sub-arrays:
        i = 0, j = (0-3) --> 1 0 3      ==> sum = 4
        i = 1, j = (1-4) --> 0 3 -4     ==> sum = -1
        i = 2, j = (2-5) --> 3 -4 2     ==> sum = 1
        i = 3, j = (3-6) -->-4 2 -6     ==> sum = -8
        i = 4, j = (4-7) --> 2 -6 9     ==> sum = 5

    *   output => 4 6 5  --> ( start_index, end_index, sum )
*/

int main()
{
  /* with nested
    int k, n;
    cin >> k >> n;
    int arr[n], sub_arrays = n - k + 1;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int start_idx = 0, end_idx = 0, sum = INT_MIN;
    for (int i = 0; i < sub_arrays; i++)
    {
        int temp = 0;
        for (int j = i; j < k + i; j++)
            temp += arr[j];

        if (temp > sum)
        {
            start_idx = i;
            sum = temp;
        }
    }
    end_idx = start_idx + k - 1;

    cout << start_idx << " " << end_idx << " " << sum;
    */

  // without nested
  int k, n;
  cin >> k >> n;
  int arr[n]{0};

  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int max = INT_MIN, start, end;
  for (int i = 0; i < n - k + 1; i++)
  {
    int x = i, y = i + k - 1;
    if (arr[x] + arr[y] > max)
    {
      max = arr[x] + arr[y];
      start = x;
      end = y;
    }
  }

  cout << start << " " << end << " " << max;

  return 0;
}
