#include <iostream>
using namespace std;

/*  Digits Frequency

    * read integer n, then read n (<=200)integers, for all digits from 0-9,
    * input -->  2 78 307
    * output:
    * 0 1
    * 1 0
    * 2 0
    * 3 1
    * 4 0
    * 5 0
    * 6 0
    * 7 2
    * 8 1
    * 9 0
*/

int main()
{
    int ans[10]{0}, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num, temp;
        cin >> num;
        if (num)
            ans[0]++;

        while (num)
        {
            temp = num % 10;
            num /= 10;
            ans[temp]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << " " << ans[i] << endl;
    }

    return 0;
}