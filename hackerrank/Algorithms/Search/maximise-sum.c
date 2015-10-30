// CopyRight Suhai
#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, i, l, r;
    long long array[100003] = {0}, m, temp, now, max;
    scanf("%d %lld", &n, &m);
    for (i = 0; i < n; i++) {
      scanf("%lld", &temp);
      array[i] = temp % m;
    }
    l = 0, r = 0;
    max = now = array[l];
    while (r != n-1) {
      temp = array[++r];
      while (now + temp >= m && l < r) {
        now -= array[l--];
      }
      now += temp;
      if (now > max) max = now;
    }
    printf("%lld\n", max);
  }
  return 0;
}
