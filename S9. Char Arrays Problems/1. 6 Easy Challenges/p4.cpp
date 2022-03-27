#include <iostream>
using namespace std;
/* Is Subsequence ?

    * Read two strings word and str, print YES if str is a Subsequence for word, Otherwise print NO
    abcdefg   abc ===> YES
    abcdefg   gd ===> NO
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
    int next_to_match = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == str[next_to_match])
        {
            ++next_to_match;
            if (next_to_match == str.size())
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}