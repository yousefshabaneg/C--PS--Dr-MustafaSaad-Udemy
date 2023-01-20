#include <iostream>
using namespace std;

/*  Find most frequent number.

    * read integer n, then read n (<=200)integers,
    * find value that repeated the most number of times.
    * each integer is --> -500 <= value <= 270
    * without nested loops

    * input  -->   7        -1 2 -1 3 -1 5 5
    * shifting --> +500     0  0  0 0  0 0 0
    * output -->  -1 repeated 3 times.
*/

int main()
{
    const int MAX = 270 + 500 + 1;
    int n, ans[MAX]{0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        ans[value + 500]++;
    }
    int mx_pos = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (ans[mx_pos] < ans[i])
            mx_pos = i;
    }
    cout << mx_pos - 500 << " repeated " << ans[mx_pos] << " times";
    return 0;
}