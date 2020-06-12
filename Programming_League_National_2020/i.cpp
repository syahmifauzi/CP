#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

int T, res;
string S;
stack<char> sc;

int main()
{
  scanf("%d", &T);
  while (T--) {
    res = 0;
    while (!sc.empty()) sc.pop();
    cin >> S;
    rep(i, 0, S.size()) {
      if (S[i] == '{') {
        sc.push(S[i]);
        continue;
      }
      if (sc.empty()) {
        sc.push('{');
        ++res;
        continue;
      }
      sc.pop();
    }
    if (!sc.empty()) res += sc.size() / 2;
    printf("%d\n", res);
  }

  return 0;
}

// 3
// }{
// {}{}{}
// {{{}
