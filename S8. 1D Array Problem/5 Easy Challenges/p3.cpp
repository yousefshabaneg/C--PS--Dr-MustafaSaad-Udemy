#include <iostream>
using namespace std;

/* Unique numbers of ordered list

    * read integer n , followed by reading integers
    * the N numbers are ordered from small to large.
    *   print the {unique} list of numbers, but in given orderd
    *  12   1 1 2 2 2 5 6 6 7 8 9 9  -->     1 2 5 6 7 8 9
*/

int main()
{
    /*
        * using array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << arr[0] << " ";
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
            cout << arr[i] << " ";
    }

        * without array */

    int n, num, temp = -1;
    cin >> n;
    while (n--)
    {
        cin >> num;
        if (num != temp)
        {
            cout << num << " ";
        }
        temp = num;
    }

    return 0;
}