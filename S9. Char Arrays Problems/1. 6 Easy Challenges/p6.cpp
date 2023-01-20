#include <iostream>
using namespace std;
/* Grouping.

    * Read a string then divide it to consecutive groups of same letter. print each group
    "111222aabbb"    --> 111 222 aa bbb
*/
int main()
{

    string str;
    cin >> str;

    for (int i = 1; i <= str.size(); i++)
    {
        cout << str[i - 1];
        if (str[i - 1] != str[i])
            cout << " ";
    }
    cout << endl;
    return 0;
}