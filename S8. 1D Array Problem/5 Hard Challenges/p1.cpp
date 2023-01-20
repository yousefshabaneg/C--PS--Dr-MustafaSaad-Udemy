#include <iostream>
using namespace std;

/*  Recaman's Sequence

    for this sequence:   0,1,3,6,2,7,..

    so last value is 7 and its index is 5

    the next value is either:

    * 1-  LastValue - LastIndex - 1 if:
            * value > 0   and  it did not appear before.
            * eg:   7 - 5 - 1 = 1  (> 0  but already exists).

    * 2-  LastValue + LastIndex + 1 = 7 + 5 +1 = 13

    * read integer zero based index n ([1, 200]), then print value of this index

    * io/p =>  6 ==> 13   ,  9 ==> 21
*/

int main()
{
    int index, ans[201]{0}, occurance[201 * 10]{0};
    cin >> index;
    ans[0] = 0;
    occurance[0] = 1;
    for (int i = 1; i <= 201; i++)
    {
        int cur = ans[i - 1] - (i - 1) - 1;
        if (cur < 0 || occurance[cur] == 0)
            cur = ans[i - 1] + (i - 1) + 1;

        ans[i] = cur;
        occurance[cur] = 1;
        // cout << "index " << i << " first: " << firstCondition << "  second: " << secondCondition << " ans: " << ans[i] << endl;
    }

    cout << ans[index];

    return 0;
}