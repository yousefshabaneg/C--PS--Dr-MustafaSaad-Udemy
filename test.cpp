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

int x()
{
  int rows, cols;
  cin >> rows >> cols;
  int arr[rows][cols]{0}, results[100];
  int countResult = 0;

  for (int row = 0; row < rows; row++)
  {
    for (int col = 0; col < cols; col++)
      cin >> arr[row][col];
  }

  int MAX = INT_MIN, idx_row = 0, idx_col = 0;

  /*
      3,9,12,10,15
  *            3       4      5     8      //3 4 3 4 5 8 9 2 1 7 6 12 10 15
  *            9       2      1     7
  *            6       12    10    15
  */

  cout << arr[0][0] << " ";
  while (idx_row < rows && idx_col < cols)
  {
    int bottom = arr[idx_row + 1][idx_col];
    int right = arr[idx_row][idx_col + 1];
    int diagonal = arr[idx_row + 1][idx_col + 1];

    if (bottom > right && bottom > diagonal)
    {
      MAX = bottom;
      idx_row++;
    }
    else
    {
      if (right > bottom && right > diagonal)
      {
        MAX = right;
        idx_col++;
      }
      else
      {
        MAX = diagonal;
        idx_col++;
        idx_row++;
      }
    }
    results[countResult++] = MAX;
  }

  for (int i = 0; i < countResult; i++)
  {
    cout << results[i] << " ";
  }

  return 0;
}

// * if we have positon (i,j) in 2D , what is indx in 1D array ?

// * solution -->  (cols x i) + j

// ! **********************************************

// * if we have index in 1D , what is postion (i,j) in 2D array ?

// * solution -->  i = idx / cols      ,   j = idx % cols
