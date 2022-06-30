#include <iostream>
using namespace std;
/*
    ? How Many Primes?
    ! Read 2 intgers N,M ,then read matrix NxM
    ! Then Read integer Q, for Q queries.

    TODO: Each Query read 4 integers : i j r c
          * represents a grid (submatrix) : top left (i,j) and #rows #cols for (r c)
    Todo: For each query, print how many prime numbers in the requested grid.
    Todo: Each query should be answered using nested loops maximum not more.

    Todo: Inputs ===========> OutPuts

        * 3 4 8 2 9 5 3 2 27 6 7 8 29 22 2 1 0 2 2 0 1 2 3

        * n=3 , m=4

        * 8 2 9 5
        * 3 2 27 6
        * 7 8 29 22

        * q = 2

        * 1 0   2 2   --> 3 primes 3 2 7 in rectangle (0,1), (2,1)

        * 0 1   2 3   --> 3 primes 2 5 2 in rectangle (0,1), (1,3)

*/
int main()
{
    int n, m, q, count = 0;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    cin >> q;
    while (q--)
    {
        int i, j, r, c;
        cin >> i >> j >> r >> c;
        int rowCount = 0;
        while (rowCount < r)
        {
            int colCount = 0;
            while (colCount < c)
            {
                int current = arr[i][j + colCount];
                bool flag = true;
                for (int i = 2; i < current && flag; i++)
                {
                    if (current % i == 0)
                        flag = false;
                }
                if (flag)
                    cout << current << " ";

                colCount++;
            }
            rowCount++;
            i++;
        }
        cout << endl;
    }
    return 0;
}