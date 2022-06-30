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
    int arr[20][30];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    return 0;
}