#include <iostream>
using namespace std;

/* Is Increasing Array ?

    Read integer N , then read N integer and print yes if the array is increasing.

    Inputs
        *  4   1 2 2 5      --> YES
        *  5   1 0 7 8 9    --> NO
        *  2   -10 10       --> YES
*/

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool is_increasing = true;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            is_increasing = false;
    }

    string result = is_increasing ? "YES" : "NO";

    cout << result;

    return 0;
}