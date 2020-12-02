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

string s, vowels = "aeiou";
int res;

int count(string ss) {
  if (in(vowel, ss[0]) || ss[0] == 'n') {
    ++res;
    return 1;
  } else if (in(vowel, ss[1])) {
    ++res;
    return 2;
  } else if ()

}

int main()
{
  getline(cin, s);
  rep(i, 0, s.size()-2) {
    if (in(vowels, s[i]) || s[i] == 'n') { // single vowel or n
      ++res;
    } else if (s[i+1] == 'n') { // end with n
      ++res;
    } else if (in(vowels, s[i+1])) { // end with vowel
      // fa,fc,faa,fca,fccca
    } else {
      ++res;
      ++i;
    }
  }
  printf("%s\n", s.c_str());

  return 0;
}

// 0x48 0x65 0x6c 0x6c 0x6f 0x2c 0x20 0x57 0x6f 0x72 0x6c 0x64 0x21 EOF
// 1. loop setiap 2 char:
// 2.        if first char a,e,i,o,u:
// 3.                res += 1
// 4.               then start at second char, goto 1
// 5.       else if second char is n:
