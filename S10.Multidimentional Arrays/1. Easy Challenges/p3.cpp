#include <iostream>
using namespace std;
/*
    ? Get Transpose Matrix
    ! Read integers N, M , then read N x M

    TODO: Compute the Transpose Matrix M X N

    Todo: Inputs ===========> OutPuts
        * 3
        * 8 16 9
        * 3 15 27
        * 14 25 29

        * Output
        * 8 3 14
        * 16 15 25
        * 9 27 29
*/
int main()
{
    int rows, cols;
    cin >> rows >> cols;
    int matrix[rows][cols];
    int transpose[cols][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}