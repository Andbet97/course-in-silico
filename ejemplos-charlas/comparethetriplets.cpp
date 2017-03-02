#include <bits/stdc++.h> //libreria que incluye todas las librerias estandar
using namespace std;

int main ()
{
    int Alice[3], Bob[3];
    for (int i = 0; i < 3; i++){
        cin >> Alice[i];
    }
    for (int i = 0; i < 3; i++){
        cin >> Bob[i];
    }
    int a = 0, b = 0;
    for (int i = 0; i < 3; i++){
        if (Alice[i] > Bob[i])
            a++;
        if (Alice[i] < Bob[i])
            b++;
    }
    cout << a << " " << b << endl;
    return 0;
}
