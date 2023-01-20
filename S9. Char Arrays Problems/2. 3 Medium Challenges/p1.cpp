#include <iostream>
using namespace std;
/*
    ? Compressing
    ! Read a string of letters and then compress each group of same letter.

    TODO: IF the Sub_string is --> cccc => c4
    Todo: Use _ between each group.

    Todo: Inputs ===========> OutPuts
        * ccccdddxxxxxe ===> c4_d3_x5_e1
*/
int main()
{

  string word;
  int count = 0;
  cin >> word;
  for (int i = 0; i < word.size(); i++)
  {
    if (word[i] == word[i + 1])
    {
      count++;
    }
    else
    {
      count++;
      cout << word[i] << count;
      if (i != word.size() - 1)
        cout << "_";
      count = 0;
    }
  }

  return 0;
}
