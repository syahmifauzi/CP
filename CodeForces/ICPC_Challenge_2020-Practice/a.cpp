#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cerr << ">>> " << #x << " = " << x << "\n";
#define pb push_back
#define mp make_pair
#define st first
#define nd second
using namespace std;
typedef long long ll;

int n, a[300003];

int main()
{
  scanf("%d", &n);
  rep(i, 0, n) scanf("%d", &a[i]);
  sort(a, a+n);
  rep(i, 0, n) printf("%d ", a[i]);
  puts("");

  return 0;
}
