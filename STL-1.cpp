#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define dbg(x) cout << (#x) << " is " << x << "\n"
using namespace std;

bool rSortCmp(int x, int y) {
  return x > y;
}

void vectorDemo() {
  vector<int> A = {11, 2, 3, 14};
  dbg(A[1]);
  // O(NlogN)
  sort(A.begin(), A.end()); // 2, 3, 11, 14
  // O(logN)
  bool present = binary_search(A.begin(), A.end(), 3); // true
  present = binary_search(A.begin(), A.end(), 4); // false

  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(100);
  A.push_back(123); // 2, 3, 11, 14, *100*, 100, 100, 100, *123*

  // get the first occurence of 100
  vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); // >= // A[4]
  // get after the last occurence of 100
  // yes, can use auto because upper_bound return an iterator
  auto it2 = upper_bound(A.begin(), A.end(), 100); // > // A[8]
  dbg(*it); // 100
  dbg(*it2); // 123
  dbg(*(it-1)); // 14
  // count number of 100 in A
  dbg(it2-it); // 4

  // reverse sort
  sort(A.begin(), A.end(), rSortCmp);
  dbg(A[0]);

  // print vector
  vector<int>::iterator it3;
  for (it3 = A.begin(); it3 != A.end(); ++it3) {
    cout << *it3 << " ";
  }
  cout << "\n";
  // or
  for (int &x: A) {
    x++; // use &x for reference if you want to manipulate x
  }
  for (int x: A) {
    cout << x << " ";
  }
  cout << "\n";
}

void setDemo() {
  // set maintains ascending order
  set<int> S;
  S.insert(1); // O(logN)
  S.insert(2);
  S.insert(-1);
  S.insert(-10);
  // print set
  for (int x: S)
    cout << x << " ";
  cout << "\n";
  // -10, -1, 1, 2
  auto it = S.find(-1);
  if (it == S.end())
    cout << "not present\n";
  else
    cout << "present " << *it << "\n";
  // first number > 0
  auto it2 = S.upper_bound(0); // already have S.begin(), S.end() build in it
  auto it3 = S.upper_bound(-1);
  dbg(*it2);
  dbg(*it3);
  // no iterator upperbound than max num in set S
  auto it4 = S.upper_bound(2);
  if (it4 == S.end())
    printf("not found\n");
  else
    printf("found %d\n", *it4);
}

void mapDemo() {
  // also in O(logN)
  map<int, int> A;
  A[1] = 100;
  A[2] = -1;
  A[3] = 200;
  A[1000022] = 1;

  map<char, int> cnt;
  string s = "syahmi fauzi";
  for (char c: s)
    cnt[c]++;

  dbg(cnt['a']);
  dbg(cnt['f']);
}

int main()
{
  vectorDemo();
  setDemo();
  mapDemo();

  return 0;
}
