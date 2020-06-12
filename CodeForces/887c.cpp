#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

int a[7][5], aa[4][2];
pair<int, int> opSides(0, 0);
bool f1 = 1, f2 = 1;

bool aToAa(int i, int j, int side, int x, int y) {
  aa[i][j] = a[side][x];
  return a[side][x] == a[side][y];
}

bool completeSide(int side) {
  int x = 0;
  rep(i, 1, 5) x += a[side][i];
  return a[side][1]*4 == x;
}

int main()
{
  rep(i, 1, 7)
    rep(j, 1, 5)
      scanf("%d", &a[i][j]);

  // find 2 completed opposite sides
  if (completeSide(1) && completeSide(3))
    opSides = make_pair(1, 3);
  if (completeSide(2) && completeSide(6))
    opSides = make_pair(2, 6);
  if (completeSide(4) && completeSide(5))
    opSides = make_pair(4, 5);

  if (opSides == make_pair(0, 0))
    goto cannot;

  if (opSides == make_pair(1, 3)) {
    if (!aToAa(0, 0, 4, 1, 2) ||
        !aToAa(0, 1, 4, 3, 4) ||
        !aToAa(1, 0, 2, 1, 2) ||
        !aToAa(1, 1, 2, 3, 4) ||
        !aToAa(2, 0, 5, 1, 2) ||
        !aToAa(2, 1, 5, 3, 4) ||
        !aToAa(3, 0, 6, 1, 2) ||
        !aToAa(3, 1, 6, 3, 4)) goto cannot;
  } else if (opSides == make_pair(2, 6)) {
    if (!aToAa(0, 0, 1, 1, 2) ||
        !aToAa(0, 1, 1, 3, 4) ||
        !aToAa(1, 0, 5, 2, 4) ||
        !aToAa(1, 1, 5, 1, 3) ||
        !aToAa(2, 0, 3, 4, 3) ||
        !aToAa(2, 1, 3, 2, 1) ||
        !aToAa(3, 0, 4, 3, 1) ||
        !aToAa(3, 1, 4, 4, 2)) goto cannot;
  } else if (opSides == make_pair(4, 5)) {
    if (!aToAa(0, 0, 1, 2, 4) ||
        !aToAa(0, 1, 1, 1, 3) ||
        !aToAa(1, 0, 2, 2, 4) ||
        !aToAa(1, 1, 2, 1, 3) ||
        !aToAa(2, 0, 3, 2, 4) ||
        !aToAa(2, 1, 3, 1, 3) ||
        !aToAa(3, 0, 6, 3, 1) ||
        !aToAa(3, 1, 6, 4, 2)) goto cannot;
  }

  // now work with aa[]
  rep(i, 0, 4) {
    if (aa[i][0] != aa[(i+1)%4][1]) f1 = 0;
    if (aa[i][0] != aa[(i+3)%4][1]) f2 = 0;
  }

  if (f1 || f2) {
    printf("YES\n");
  } else {
    cannot:
    printf("NO\n");
  }

  return 0;
}
