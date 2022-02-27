#include <iostream>
using namespace std;

/*  Unique numbers of unordered list.

    * read integer n (<=900), followed bu reading n integers (0 <= value <= 500).
    * print the unique list of the numbers, but preserve the given order.

    * input:  13  1 5 5 2 5 7 2 3 3 3 5 2 7.

    * solve --> another array with flag value 0 or 1  for all possible values from 0 to 500 with size 501.

    * if array[num] == 0 that means it doesn't appear before. so print it and change its flag from 0 to 1.

    * output: 1 5 2 7 3

*/

int main()
{
    int n, ans[501]{0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (ans[num] == 0)
        {
            cout << num << " ";
            ans[num]++;
        }
    }

    return 0;
}