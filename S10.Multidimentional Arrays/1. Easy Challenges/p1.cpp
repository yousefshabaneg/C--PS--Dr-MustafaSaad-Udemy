#include <iostream>
using namespace std;
/*
    ? Smaller row ?
    ! Read integers n,m , then ream n x m then read q for q queries.

    TODO: Each Query is 2 integers: 1st and 2nd row indices.
    Todo: compare the 2 rows and print (YES) if the 1st Row < 2nd Row.

    Todo: Inputs ===========> OutPuts
        * 3 4
        * 8 16 9 52
        * 3 15 27 6
        * 14 25 29 10
        * 2
        * 1 2 --> NO
        * 2 3 --> YES
*/
int main()
{
    int rows, cols, q;
    cin >> rows >> cols;
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
    }

    cin >> q;
    while (q--)
    {
        int first, second;
        cin >> first >> second;
        bool isFirstSmaller = true;
        first--;
        second--;
        for (int i = 0; i < cols && isFirstSmaller; i++)
        {
            if (arr[first][i] > arr[second][i])
            {
                isFirstSmaller = false;
            }
        }
        if (isFirstSmaller)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}