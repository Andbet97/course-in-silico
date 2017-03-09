#ifdef JUDGE
#include <fstream>
std::ifstream cin("input.txt");
std::ofstream cout("output.txt");
#else
#include <iostream>
using std::cin;
using std::cout;
#endif

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long a, b;
    cin >> a >> b;
    cout << a + (b*b) << endl;
    return 0;
}
