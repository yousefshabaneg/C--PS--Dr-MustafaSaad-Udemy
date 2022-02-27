#include <iostream>
using namespace std;

/*  Digits sum in range

    Read three Integers N, A, B

    Print summation of the numbers between 1 and N whose sum of digits is between a , b
    INPUT   --> 10 1 2
    OUTPUT  --> 13  sum of --> (1, 2 , 10 = 13 )
*/

/*
    INPUT   --> 15 1 5
    nums 1 to 15       --> 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15

    between 1-5        --> 1, 2, 3, 4, 5, 10, 11, 12, 13, 14

    Summation = 1+2+3+4+5+10+11+12+13+14 = 75


*/
int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for (int num = 1; num <= n; num++)
    {
        int digits_sum = 0;
        int tmp = num;
        while (tmp)
        {
            digits_sum += tmp % 10;
            tmp /= 10;
        }
        if (digits_sum >= a && digits_sum <= b)
            sum += num;
    }

    cout << sum;

    return 0;
}