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
  int n, m;
  cin >> n >> m;
  int arr[n][m]{0};
  for (int row = 0; row < n; row++)
    for (int col = 0; col < m; col++)
      cin >> arr[row][col];

  int q = 0;
  cin >> q;
  while (q--)
  {
    bool isFirstSmaller = true;
    int r1, r2;
    cin >> r1 >> r2;
    r1--, r2--;
    for (int col = 0; col < m; col++)
    {
      if (arr[r1][col] >= arr[r2][col])
      {
        isFirstSmaller = false;
        break;
      }
    }
    string result = isFirstSmaller ? "YES" : "NO";
    cout << result << endl;
  }
  // 3 4 8 16 9 52 3 15 27 6 14 25 29 10 3 1 2 2 3 1 3
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
