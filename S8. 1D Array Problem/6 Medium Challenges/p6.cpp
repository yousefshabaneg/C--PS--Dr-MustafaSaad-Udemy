#include <iostream>
using namespace std;

/*  Sorting numbers.

    * read integer n (<=900), followed bu reading n integers (0 <= value <= 500).
    * print the sorted list of the numbers.

    * input:  13  1 5 5 2 5 7 2 3 3 3 5 2 7.

    ans[501] --> idx  0 1 2 3 4 5 6 7 8 9 10 11 ---
                 val  0 1 3 3 0 4 0 2 0 0 0  0


    * output: 1 2 2 2 3 3 3 5 5 5 5 7 7

*/

int main()
{
    int n, ans[501]{0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        ans[num]++;
    }

    int count = 0;

    for (int i = 0; i < 501; i++)
    {
        for (int j = 0; j < ans[i]; j++)
        {
            cout << i << " ";
            count++;
        }
        if (count == n)
            break;
    }

    return 0;
}