#include <iostream>
using namespace std;

/* Is Palindrome ?

    * read integer n , followed by reading integers
    * an array is called palindrome if it reads the same backward and forward.
    * arrays {1} and {1,2,3,2,1} are palindrome.
    *  5  1 3 2 3 1  -->   YES
    *  4  1 2 3 4    -->   NO
*/

int main()
{
    int n, iteration;
    cin >> n;
    int arr[n];
    iteration = n / 2;
    bool is_palindrome = true;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < iteration; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            is_palindrome = false;
            break;
        }
    }

    string result = is_palindrome ? "YES" : "NO";
    cout << result;

    return 0;
}