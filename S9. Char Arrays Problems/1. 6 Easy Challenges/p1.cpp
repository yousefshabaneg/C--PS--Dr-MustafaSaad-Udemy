#include <iostream>
using namespace std;
/* Is Prefix ?

    * Read two strings word and str, print YES if str is a prefix for word, Otherwise print NO
    abcdefg   abc ===> YES
    abcdefg   def ===> NO
*/
int main()
{

    string word, str;
    cin >> word >> str;

    if (str.size() > word.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != word[i])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}