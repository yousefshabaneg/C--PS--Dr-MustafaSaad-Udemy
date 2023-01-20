#include <iostream>
using namespace std;
/*
    ? Triangular Matrix
    ! Read integer N , then read N x N.

    TODO: Print sum of upper trinagle and lower trinagle

    Todo: Inputs ===========> OutPuts
        * 3
        * 8 16 9
        * 3 15 27
        * 14 25 29

        * OutPut
        * lower: 94 (8+15+29+3+25+14)
        * upper: 104 (8+15+29+16+17+9)
*/
int main()
{
    int n, upper = 0, lower = 0, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            if (i >= j)
                lower += val;
            if (i <= j)
                upper += val;
        }
    }

    cout << "uppper: " << upper << endl;
    cout << "lower: " << lower << endl;

    return 0;
}