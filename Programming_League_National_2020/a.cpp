#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

int T, I, O;
string S;

bool correctBase() {
  for (char x: S)
    if (x - '0' >= I)
      return false;
  return true;
}

int toBase10() {
  int res = 0;
  for (int i = S.size()-1, b = 0; i >=0; --i, ++b)
    res += pow(I, b) * (S[i] - '0');
  return res;
}

string toBaseO(int x) {
  string res = "";
  while (x) {
    res = to_string(x % O) + res;
    x /= O;
  }
  return res;
}

int main()
{
  scanf("%d", &T);
  while (T--) {
    cin >> S;
    scanf("%d%d", &I, &O);
    if (!correctBase()) {
      printf("INVALID\n");
      continue;
    }
    int x = toBase10();
    printf("%s\n", toBaseO(x).c_str());
  }

  return 0;
}

// 4
// 8 10 8
// 101 2 10
// 90 9 10
// 354 10 2

// 13b8 -> b10 == (8^1 * 1) + (8^0 * 0 + 3)
