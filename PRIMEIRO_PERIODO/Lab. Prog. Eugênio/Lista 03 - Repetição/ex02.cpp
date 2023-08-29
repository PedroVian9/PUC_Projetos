#include <iostream>

using namespace std;

int main()
{
    int X, Y, resultado;
      cin >> X >> Y;
      int K = X;
      for (int var = 1; var < Y; ++var) {
           K = K * X;
      }
      cout << "K = " << K << endl;
}
