#include <iostream>
using namespace std;

/*  Is Prime ?

    Read an Integer N (< 500) and print YES if it is prime, otherwise NO

    prime number --> number % anyNumber != 0
    prime numbers --> 2,3,5,7,11,13,17,19,23
*/
int main()
{
    int number;
    cin >> number;
    if (number == 1)
        cout << "NO";
    else
    {
        bool prime = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                prime = false;
                break;
            }
        }

        string result = (prime) ? "YES" : "NO";

        cout << result;
    }

    return 0;
}