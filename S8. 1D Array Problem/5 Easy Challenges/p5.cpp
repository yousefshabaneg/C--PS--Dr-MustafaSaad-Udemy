#include <iostream>
using namespace std;

/* Samllest Pair.

    * read integer n , followed by reading integers
    * Print the smallest possible result of A[i] + A[j] + j - i.
    * 1 <= i < j <= n
    *  4    20 1 9 4 -->  7
*/

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i] + arr[j] + j - i;
            if (temp < minimum)
                minimum = temp;
        }
    }

    cout << minimum;

    return 0;
}