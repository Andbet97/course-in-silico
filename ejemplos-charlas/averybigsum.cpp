#include<bits/stdc++.h> 
using namespace std;

int main ()
{
	int n;
    cin >> n;
    long int r = 0;
    long int a;
    for (int i = 0; i < n; i++){
        cin >> a;
        r += a;
    }
    cout << r << endl;
    return 0;
}
