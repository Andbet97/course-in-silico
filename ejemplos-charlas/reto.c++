//Bracket Sequence week 2

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

char cierre (char c) {
  char t = 'n';
  if (c == '(')
    t = ')';
  if (c == '[')
    t = ']';
  if (c == '{')
    t = '}';
  return t;
}

int main() {
  ios::sync_with_stdio(false);
  ifstream fin("input.txt");
  ofstream fout("output.txt");

  int n;
  fin >> n;
  for (int i = 0; i <n; i++) {
    stack<char> s;
    string c;
    fin >> c;
    for (int j = 0; j < c.size(); j++) {
      if (s.empty()) {
        s.push(c[j]);
        continue;
      }
      if (c[j] == cierre(s.top()))
        s.pop();
      else
        s.push(c[j]);
    }
    if (s.empty())
      fout << "YES" << endl;
    else {
      fout << "NO" << endl;
    }
  }
  return 0;
}
