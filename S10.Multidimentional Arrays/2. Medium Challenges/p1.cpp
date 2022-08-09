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
  int n, m;
  cin >> n >> m;
  int arr[n][m]{0};
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  int q = 0;
  cin >> q;
  while (q--)
  {
    int primes = 0;
    int i, j, r, c;
    cin >> i >> j >> r >> c;
    for (int k = 0; k < r; k++)
    {
      for (int z = 0; z < c; z++)
      {
        int current = arr[(i + k)][j + z];
        if (current == 2)
        {
          primes++;
          cout << current << " ";
          continue;
        }
        else if (current % 2 == 0)
          continue;
        else
        {
          int isPrime = true;
          for (int index = 3; index < current; index++)
          {
            if (current % index == 0)
            {
              isPrime = false;
              break;
            }
          }
          if (isPrime)
          {
            cout << current << " ";
            primes++;
          }
        }
      }
    }
    cout << "Primes: " << primes << endl;
  }
  // 3 4 8 2 9 5 3 2 27 6 7 8 29 22 2 1 0 2 2 0 1 2 3
  return 0;
}
