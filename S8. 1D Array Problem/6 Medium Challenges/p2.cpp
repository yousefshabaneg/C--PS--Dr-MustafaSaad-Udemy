#include <iostream>
using namespace std;

/*  Search for a numbers.

    * read integer n, then read n integers,  [0 <= a[i] <= 500]
    * read integer q, then rad q integers
    * for each integer q, find the last occurance in the array, print its index.
    * if doesn't exist, print -1.

    *  5    1 2 7 3 7    3   7 9 2    output -->    4   -1    1
*/

int main()
{
    /*Nested Loops
    int n, q;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> q;

    while (q--)
    {
        int num;
        cin >> num;

        int last_index = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == num)
            {
                last_index = i;
                break;
            }
        }
        cout << last_index << endl;
    }
    */

    /*Single Loop*/
    int n, q, num, ans[501];
    for (int i = 0; i < 501; i++)
        ans[i] = -1;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        ans[num] = i;
    }

    int query;
    cin >> q;
    while (q--)
    {
        cin >> query;
        cout << ans[query] << endl;
    }

    return 0;
}