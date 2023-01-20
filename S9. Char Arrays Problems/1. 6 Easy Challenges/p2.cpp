#include <iostream>
using namespace std;
/* Is Suffix ?

    * Read two strings word and str, print YES if str is a Suffix for word, Otherwise print NO
    abcdefg   efg ===> YES
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
    int diff = word.size() - str.size();
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str[i] != word[i + diff])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}