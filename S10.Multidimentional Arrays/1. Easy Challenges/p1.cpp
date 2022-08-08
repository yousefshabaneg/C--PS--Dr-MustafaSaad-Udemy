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
