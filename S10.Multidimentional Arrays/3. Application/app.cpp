#include <iostream>
#include <assert.h>
using namespace std;
/*
    ? N×N Tic tac toe
    ! Read an integer N for the Dimension of tic tac toe (3<= N <= 9).
    ! Then run a game of 2 users who keep playing till one of them wins or tie.
    ! Print the grid after each round.
*/
int main()
{
  int grid[100][100]{0};
  int n;
  cout << "Enter grid dimension: ";
  cin >> n;
  assert(n >= 3 && n <= 9); // ensure first condition.

  int rs[100], cs[100], dr[100], dc[100];
  int verify = 0;

  // Add row n positions to verify.
  for (int r = 0; r < n; r++)
    rs[verify] = r, cs[verify] = 0, dr[verify] = 0, dc[verify++] = 1;

  // Add column n positions to verify.
  for (int c = 0; c < n; c++)
    rs[verify] = 0, cs[verify] = c, dr[verify] = 1, dc[verify++] = 0;

  // Add diagonal 1.
  rs[verify] = 0, cs[verify] = 0, dr[verify] = 1, dc[verify++] = 1;

  // Add diagonal 2.
  rs[verify] = 0, cs[verify] = n - 1, dr[verify] = 1, dc[verify++] = -1;

  int turn = 0; // 0 for x, 1 for o.
  int steps = 0;
  while (true)
  {
    if (steps == n * n)
    {
      cout << "Tie\n";
      break;
    }
    char symbol = 'x';
    if (turn == 1)
      symbol = 'o';

    cout << "Player " << symbol << " turn. Enter empty location(r,c): ";
    int r, c;
    cin >> r >> c;

    r--, c--;

    if (r < 0 || r >= n || c < 0 || c >= n || grid[r][c] != 0)
    {
      cout << "Invalid input, Try again\n";
      continue;
    }

    grid[r][c] = turn + 1;

    // Print the grid
    for (int r = 0; r < n; r++)
    {
      for (int c = 0; c < n; c++)
      {
        char ch = '.';
        if (grid[r][c] == 1)
          ch = 'x';
        else if (grid[r][c] == 2)
          ch = 'o';

        cout << ch;
      }
      cout << endl;
    }

    // check win state.
    for (int check = 0; check < verify; check++)
    {
      int r = rs[check], c = cs[check], rd = dr[check], cd = dc[check];
      int cnt = 0, first = grid[r][c];

      if (first == 0)
        continue;

      for (int step = 0; step < n; step++, r += rd, c += cd)
        cnt += grid[r][c] == first;

      if (cnt == n)
      {
        cout << "Player " << symbol << " won\n";
        return 0;
      }
    }
    turn = !turn;
    steps++;
  }

  return 0;
}
