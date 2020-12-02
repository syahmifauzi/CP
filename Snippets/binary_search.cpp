#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; ++i)
#define sz(a) (sizeof(a) / sizeof(a[0]))
using namespace std;

int arr[] = {-5, -1, 0, 1, 3, 5};

int search(int i) {
  int l = 0, r = sz(arr) - 1;
  while (l <= r) {
    int mid = (l + r) / 2;
    if (i == arr[mid])
      return mid;
    else if (i > arr[mid])
      l = mid + 1;
    else
      r = mid - 1;
  }
  return -1;
}

int main()
{
  rep(i, -6, 7)
    printf("%d found at index %d\n", i, search(i));

  return 0;
}
