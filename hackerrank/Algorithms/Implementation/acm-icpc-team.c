// CopyRight suhai
#include<stdio.h>

int count1(char *a, char *b, int l) {
  int count = 0, i = 0;
  for (i = 0; i < l; i++) {
    if (a[i] == '1' || b[i] == '1') {
      count++;
    }
  }
  return count;
}

int main() {
  int n, m, i, j, num, max = 0, count = 0, mc = 0;
  char a[502][502] = {0};
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++) {
    scanf("%s", a[i]);
  }
  for (i = 0; i < n; i++) {
    for (j = i+1; j < n; j++) {
      int tt = count1(a[i], a[j], m);
      if (max == tt) {
        count++;
      } else if (max < tt) {
        max = tt;
        count = 1;
      }
    }
  }
  printf("%d\n%d\n", max, count);
  return 0;
}
