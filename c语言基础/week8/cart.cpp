#include <iostream>
using namespace std;

int main()
{
  // 用best枚举最好的车
  int best;
  for (best = 1; best < 5; best++)
  {
    int a = best == 2;
    int b = best == 4;
    int c = best != 3;
    int d = !b;

    if (a + b + c + d == 1)
    {
      cout << best << endl;
      if (a == 1)
      {
        cout << 'A' << endl;
      }
      else if (b == 1)
      {
        cout << 'B' << endl;
      }
      else if (c == 1)
      {
        cout << 'C' << endl;
      }
      else if (d == 1)
      {
        cout << 'D' << endl;
      }
    }
  }

  return 0;
}