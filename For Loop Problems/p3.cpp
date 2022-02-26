#include <iostream>
using namespace std;

/*
Count homw many (a,b,c,d) with following:

    1 <=  a,b,c,d  <= 200

    a+b = c + d

*/
int main()
{
    int count = 0;
    for (int a = 1; a <= 200; a++)
    {
        for (int b = 1; b <= 200; b++)
        {
            for (int c = 1; c <= 200; c++)
            {
                int d = a + b - c;
                if (d >= 1 && d <= 200)
                    count++;
            }
        }
    }

    cout << count;

    return 0;
}