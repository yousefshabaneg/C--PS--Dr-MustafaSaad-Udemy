#include <iostream>
using namespace std;
/* Is Substring ?

    * Read two strings word and str, print YES if str is a Substring for word, Otherwise print NO
    abcdefg   abc ===> YES
    abcdefg   def ===> YES
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

    int start = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == str[0])
        {
            start = i;
            break;
        }
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != word[i + start])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}