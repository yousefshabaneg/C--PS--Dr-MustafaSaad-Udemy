#include <iostream>
using namespace std;

struct Book
{
  int id;
  string name;
  int quantity;

  Book(int id, string name, int quantity)
  {
    this->id = id;
    this->name = name;
    this->quantity = quantity;
  }

  void printBook()
  {
    cout << id << ", " << name << ", " << quantity << endl;
  }
};

int main()
{
  Book b1 = Book(1, "JavaScript", 5);
  b1.printBook();
  return 0;
}
