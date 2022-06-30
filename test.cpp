#include <iostream>
using namespace std;

int main()
{
  int n, a, b;
  cin >> n >> a >> b;

  int sum = 0;

  for (int num = 1; num <= n; num++)
  {
    int temp = num;
    int digits_sum = 0;
    while (temp)
    {
      digits_sum += temp % 10;
      temp /= 10;
    }
    if (digits_sum >= a && digits_sum <= b)
      sum += num;
  }

  cout << sum;

  return 0;
}
