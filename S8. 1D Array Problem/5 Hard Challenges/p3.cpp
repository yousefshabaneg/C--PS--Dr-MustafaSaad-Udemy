#include <iostream>
using namespace std;

/*  Count Increasing Subarrays
    * read integer N, where , then read N (< 200) integers

    * o/p: Count how many subarrays are increasing in the array.
                 0  1 2 3
    * Input 4  [10 20 1 5]
    * Input 4  [1 2 3 4]

            i = l2 - l4 , j = 0-2 , k=j
    * sub-arrays:                                               n - l + 1
        Length:1 --> [10][20][1][5]         ==> sum += 4        4
        Length:2 --> [10 20][20 1][1 5]     ==> sum += 2        3
        Length:3 --> [10 20 1] [20 1 5]     ==> sum += 0        2
        Length:4 -->-[10 20 1 5]            ==> sum += 0        1

        * upper boundary.
        *  3 -->  6
        *  4 -->  10            (n * n-1) / 2
        *  5 -->  15

    *   So, output => 6
*/

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] >= arr[j - 1])
                count++;
            else
                break;
        }
    }
    cout << count + n;
    return 0;
}