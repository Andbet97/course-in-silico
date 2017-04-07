/*se resuelve con la mediana de los ejes*/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf 10001

int pertenece(long int *X, long int b)
{
  for (long int i = sizeof(X)/sizeof(long int); i >= 0; i--){
    if (X[i] == b)
      return -1;
  }
  return 1;
}

int main()
{
  fast
  int t;
  while (cin >> t) {
    long int X[inf], Y[inf];
    long int i = 0, j = 0;
    while (t--){
      long int x, y;
      cin >> x >> y;
      if (pertenece(X, x) == 1){
        X[i] = x;
        i++;
      }
      if (pertenece(Y, y) == 1){
        Y[j] = y;
        j++;
      }
    }
    cout << X[i/2]+Y[j/2] << endl;
  }
  return 0;
}
