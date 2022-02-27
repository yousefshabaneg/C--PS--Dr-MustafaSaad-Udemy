#include <iostream>
using namespace std;

/* Replace Min Max

    * read integer n, then read n integers.
    * find min and max in array:
    *   replace each min with max and vica verse.

    *  7   4 (1) 3 [10] 8 [10] [10]  --> 4 (10) 3 [1] 8 [1] [1]
*/

int main()
{
    int n, minimum = 10000, maximum = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maximum)
            maximum = arr[i];
        else if (arr[i] < minimum)
            minimum = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maximum)
            arr[i] = minimum;
        else if (arr[i] == minimum)
            arr[i] = maximum;
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}