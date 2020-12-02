#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " >> " << x << '\n'
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define repr(i, a, n) for (int i = a; i > n; --i)
#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define min(x, y) x < y ? x : y
#define max(x, y) x > y ? x : y
#define all(a) a.begin(), a.end()
#define alla(a, b) a, a + b
#define in(a, x) find(all(a), x) != a.end()
#define ina(a, b, x) find(alla(a, b), x) != a + b
#define sz(a) sizeof(a) / sizeof(a[0])
#define s(n) scanf("%d", &n)
#define sc(n) scanf(" %c", &n)
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define ss(n) scanf("%s", &n)
#define pws() printf(" ")
#define pnl() printf("\n")
#define p(n) printf("%d", n)
#define pc(n) printf("%c", n)
#define pl(n) printf("%lld", n)
#define pf(n) printf("%lf", n)
#define ps(n) printf("%s", n)
#define INF (int)1e9
#define EPS 1e-9
using namespace std;

int a[4][4], op;

void slideLeft() {
  rep(i, 0, 4) {
    rep(j, 0, 3) {
      rep(k, j+1, 4) {
        if (a[i][j] != 0) break;
        if (a[i][k] == 0) continue;
        a[i][j] = a[i][k];
        a[i][k] = 0;
      }
    }
  }
}

void mergeLeft() {
  slideLeft();
  rep(i, 0, 4) {
    rep(j, 0, 3) {
      if (a[i][j] == a[i][j+1]) {
        a[i][j] *= 2;
        a[i][j+1] = 0;
      }
    }
  }
  slideLeft();
}

void rotateCCW() {
  int aa[4][4];
  rep(i, 0, 4)
    rep(j, 0, 4)
      aa[i][j] = a[j][3-i];
  rep(i, 0, 4)
    rep(j, 0, 4)
      a[i][j] = aa[i][j];
}

int main()
{
  rep(i, 0, 4) rep(j, 0, 4) s(a[i][j]);
  s(op);

  switch (op) {
    case 0: // left
      mergeLeft();
      break;
    case 1: // up
      rotateCCW();
      mergeLeft();
      rotateCCW();
      rotateCCW();
      rotateCCW();
      break;
    case 2: // right
      rotateCCW();
      rotateCCW();
      mergeLeft();
      rotateCCW();
      rotateCCW();
      break;
    case 3: // down
      rotateCCW();
      rotateCCW();
      rotateCCW();
      mergeLeft();
      rotateCCW();
      break;
  }

  rep(i, 0, 4) {
    rep(j, 0, 4)
      printf("%d ", a[i][j]);
    pnl();
  }

  return 0;
}

// 64 0 2 0
// 16 0 0 0
// 8 8 0 0
// 2 2 4 2
// 0

// 4 8 2 0
// 4 8 2 0
// 4 2 0 0
// 2 0 0 0
// 1
