#include <iostream>
using namespace std;
/* Convert String to Number.

    * Read a string of 6 letters maximum, convert it into int then print { number, number*3}
    "100"   ===> 100 300
    "0200"  ===> 200 600
*/
int main()
{

    string str;
    cin >> str;
    double result = 0;

    for (int i = 0; i < str.size(); i++)
    {
        result = result * 10 + (str[i] - '0');
    }

    cout << result << " " << result * 3 << endl;
    return 0;
}