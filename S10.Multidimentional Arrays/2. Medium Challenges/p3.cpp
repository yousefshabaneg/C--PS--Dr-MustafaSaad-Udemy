#include <iostream>
using namespace std;

/*
    ? Active Robot
    ! Read 2 integers N,M represents a matrix. a robot starts at cell (0,0).
    ! Read integer K, then K commands. each command is 2 values.
      * Direction: from 1 to 4 : up, right, down, left.
      * Steps: number of steps to take in the direction.
      * if the robot hits the wall during the move, it circulates in the matrix.

    Todo: for every command, print where the robot now.
    Todo: Inputs

    * 3 4  4   (2 1) (3 2) (4 2) (1 3)

    * (2 1) means --> to right, 1 step

    *outputs:  (0,1) (2,1) (2,3) (2,3)
*/
int main()
{
  int n, m, k, r = 0, c = 0;
  cin >> n >> m >> k;

  // from 1 to 4 : up, right, down, left
  int rd[4]{-1, 0, 1, 0};
  int cd[4]{0, 1, 0, -1};

  while (k--)
  {
    int dir, steps;
    cin >> dir >> steps;
    --dir;

    r = (r + rd[dir] * steps) % n;
    c = (c + cd[dir] * steps) % m;

    if (r < 0)
      r += n;
    if (c < 0)
      c += m;

    cout << r << " " << c << endl;
  }

  // 3 4 4 2 1 3 2 4 2 1 3
  return 0;
}
