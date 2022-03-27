#include <iostream>
using namespace std;

/*  Josephus problem
    * read integer N (<200) and K (<= 1000000). code for small k first.

    * there is a group of n people in circle named 1,2,...,N
        * SOME IS A MASTER OF THE GAME
        * HE STARTS FROM PERSON 1 , COUNT K . THEN REMOVE THIS PERSON FROM CIRCLE.
        * HE KEEPS DOING SO TILL ONLY 1 PERSON REMAINS.  THIS IS THE WINNER.

    * Input 7 2
              i       0 1 2 3 4 5 6
    * We have people: 1,2,3,4,5,6,7., start_index =  0.     arr[(start_people + k - 1) % n]
    * Count 2 (2 removed) , start_index = 2%7 = 2           arr[0+2-1 % 7]=arr[1] = 2
    * Count 2 (4 removed) , start_index = 4%7 = 4           arr[2+2-1 % 7]=arr[3] = 4
    * Count 2 (6 removed) , start_index = 6%7 = 6           arr[4+2-1 % 7]=arr[5] = 6
    * Count 2 (1 removed) , start_index = 8%7 = 3           arr[6+2-1 % 7]=arr[0] = 1
    * Count 2 (5 removed) , start_index = 10%7 = 3          arr[3+2-1 % 7]=arr[4] = 5
    * Count 2 (3 removed) , start_index = 12%7 = 5          arr[5+2-1 % 7]=arr[4] = 5
    * Count 2 (7 removed) , start_index = 14%7 = 0

    *   So, output => 2 4 6 1 5 3 7

    (1),*2,3,4,5,6,7
    1 2x (3) *4 5 6 7
    1 2x 3 4x (5) *6 7
    1* 2x 3 4x 5 6x (7)
    1x 2x (3) 4x *5 6x 7
    1x 2x *3 4x 5x 6x (7)
    1x 2x 3x 4x 5x 6x *7

*/

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    int ans[n]{0}, start_people = 0;

    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = arr[(start_people + k - 1) % n];
            start_people += k;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}