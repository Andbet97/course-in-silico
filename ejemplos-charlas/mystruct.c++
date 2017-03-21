//Funcion que me de el minimo actual de la cola
//Simular una cola con dos pilas
//>push O(1)
//>pop O(1)
//>query O(1)

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

class MinQueue {
  private:
    stack<int> s1;
    stack<int> s2;
    int minIn;

  public:
    MinQueue();
    void push(int x);
    void update();
    void pop();
    int query();
};

MinQueue::MinQueue() {
  minIn = 1e9;
}

void MinQueue::push(int x) {
  s1.push(x);
  minIn = min(x, minIn);
}

void MinQueue::update() {
  while (!s1.empty()) {
    int x = s1.top();
    s1.pop();
    if (s2.empty() || x < s2.top())
      s2.push(x);
    else
      s2.push(s2.top());
  }
  minIn = 1e9;
}

void MinQueue::pop() {
  if (s2.empty())
    update();
  s2.pop();
}

int MinQueue::query() {
  if (s2.empty())
    update();
  return min(minIn, s2.top());
}

int main() {
  ios::sync_with_stdio(false);
  ifstream fin("input.txt");
  ofstream fout("output.txt");

  int n;
  fin >> n;
  MinQueue mq;
  for (int i = 0; i <n; i++) {
    char c;
    fin >> c;
    if (c == '+') {
      int x;
      fin >> x;
      mq.push(x);
    }
    if (c == '-') {
      mq.pop();
    }
    if (c == '?') {
      fout << mq.query() << endl;
    }
  }

  return 0;
}
