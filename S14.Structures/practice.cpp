#include <iostream>
using namespace std;

struct queue
{
  int arr[100];
  int len;
  queue()
  {
    len = 0;
  }

  void add_end(int value)
  {
    arr[len++] = value;
  }

  void add_front(int value)
  {
    // shift to right
    for (int i = len; i >= 1; i--)
      arr[i] = arr[i - 1];

    arr[0] = value;
    len++;
  }

  int remove_front()
  {
    int first = arr[0];
    for (int i = 0; i < len; i++)
      arr[i] = arr[i + 1];

    len--;
    return first;
  }

  void print()
  {
    for (int i = 0; i < len; i++)
      cout << arr[i] << " ";

    cout << '\n';
  }
};

int main()
{
  queue my_queue;

  my_queue.add_end(1);
  my_queue.add_end(5);
  my_queue.add_end(6);
  my_queue.add_end(10);

  my_queue.add_front(15);

  my_queue.print();

  int first = my_queue.remove_front();

  my_queue.add_end(17);

  my_queue.print();

  return 0;
}
