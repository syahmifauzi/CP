#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << endl 
using namespace std;

int r, c;
char a[21][21];
char aa[21][21];
char words[42][21];
int ii = 0, jj = 0;

int getSmallestWordIndex() {
  int minIdx = 0;
  rep(i, 1, ii) {
    rep(j, 0, 21) {
      if (words[minIdx][j] > words[i][j])
        minIdx = i;
      if (words[minIdx][j] != words[i][j])
        break;
    }
  }
  return minIdx;
}

void getWords(int row, int col, char arr[][21]) {
  rep(i, 0, row) {
    rep(j, 0, col) {
      if (arr[i][j] == '#') {
        if (jj >= 2) ii++;
        jj = 0;
      } else {
        words[ii][jj++] = arr[i][j];
      }
      if (j == col-1 && jj >= 2) ii++; 
    }
    jj = 0;
  }
}

void transposeMatrix() {
  rep(i, 0, c)
    rep(j, 0, r)
      aa[i][j] = a[j][i];
}

int main()
{
  scanf("%d%d", &r, &c);

  rep(i, 0, r)
    rep(j, 0, c)
      scanf(" %c", &a[i][j]);

  getWords(r, c, a);
  transposeMatrix();
  getWords(c, r, aa);

  // printf("====== OUTPUT ======\n");
  // rep(i, 0, ii) {
  //   rep(j, 0, 21)
  //     printf("%c", words[i][j]);
  //   printf("\n");
  // }

  // printf("====== SMALLEST ======\n");
  int idx = getSmallestWordIndex();
  rep(i, 0, 21)
    printf("%c", words[idx][i]);
  printf("\n");

  return 0;
}
