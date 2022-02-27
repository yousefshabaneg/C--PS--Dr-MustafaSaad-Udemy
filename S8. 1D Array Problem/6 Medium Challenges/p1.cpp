#include <iostream>
using namespace std;

/*  Find the 3 minimum values.

    * read integer n (>= 3), then n integers, find the 3 lowest numbers.
    * c --> don't change array content
    * c --> don't iterate on the array more than once.

    *  5    4 1 3 10 8   -->   1 3 4
    *  3    7 9 -2       -->  -2 7 9
    *
*/

int main()
{
    int n, mn1, mn2, mn3, temp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mn1 = arr[0];
    mn2 = arr[1];
    mn3 = arr[2];
    if (n > 3)
    {
        for (int i = 3; i < n; i++)
        {
            if (arr[i] < mn1 && mn1 > mn2 && mn1 > mn3)
                mn1 = arr[i];
            else if (arr[i] < mn2 && mn2 > mn1 && mn2 > mn3)
                mn2 = arr[i];
            else if (arr[i] < mn3 && mn3 > mn1 && mn3 > mn2)
                mn3 = arr[i];
        }
    }

    if (mn2 < mn1)
    {
        temp = mn1;
        mn1 = mn2;
        mn2 = temp;
    }
    if (mn3 < mn2)
    {
        temp = mn3;
        mn3 = mn2;
        mn2 = temp;

        if (mn2 < mn1)
        {
            temp = mn1;
            mn1 = mn2;
            mn2 = temp;
        }
    }

    cout << mn1 << " " << mn2 << " " << mn3;

    return 0;
}