#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int N1, N2, resultado;
   cin >> N1 >> N2;
   resultado = N1;
   for (int var = 1; var < N2; ++var) {
        resultado = resultado + N1;
   }
   cout << resultado << endl;

}
