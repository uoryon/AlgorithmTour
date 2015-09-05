#include <stdio.h>

int a(int n, int m) {
  int r = 0;
  while (n/m > 0) {
    r += n/m;
    n = n/m + n % m;
  }
  return r;
}

int main() {
  int t, n, c, m;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d %d", &n, &c, &m);
    printf("%d\n", n/c+ a(n/c, m));
  }
  return 0;
}