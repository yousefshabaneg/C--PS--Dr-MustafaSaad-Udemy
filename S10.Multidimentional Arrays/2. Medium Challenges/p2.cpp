#include <iostream>
using namespace std;
/*
    ? Find Mountains
    ! Read 2 intgers N,M ,then read matrix NxM
    ! Print all positions that are mountain.
    TODO: Position is mountain if its value > 8 neighbors values.
    TODO: Code Smartly

    Todo: Inputs ===========> OutPuts

        * 3 3
        * 8 6 1
        * 3 2 9
        * 1 6 4

        * Outputs
        * 0 0   (8 > 6,3,2)
        * 1 2   (9 > 1,2,5,4,6)

*/
int main()
{
  int n, m;
  cin >> n >> m;
  int arr[n][m]{0};
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  //       {d, r, u, l, ul, dr, ur, dl}
  int di[8]{1, 0, -1, 0, -1, 1, -1, 1};
  int dj[8]{0, 1, 0, -1, -1, 1, 1, -1};

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      bool valid_mountain = true;
      for (int d = 0; d < 8 && valid_mountain; d++)
      {
        int ni = i + di[d];
        int nj = j + dj[d];

        if (ni < 0 || ni >= n || nj < 0 || nj >= m)
          continue;

        if (arr[i][j] < arr[ni][nj])
        {
          valid_mountain = false;
          break;
        }
      }
      if (valid_mountain)
        cout << i << " " << j << endl;
    }
  }

  // 3 3 8 6 1 3 2 9 1 6 4
  return 0;
}
