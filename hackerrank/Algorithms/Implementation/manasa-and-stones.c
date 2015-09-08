// CopyRight suhai
#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
  return (*(int *)a) > (*(int *)b);
}

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int n, a, b, i;
    int res[1002];
    scanf("%d %d %d", &n, &a, &b);
    for (i = 0; i < n; i++) {
      res[i] = a * i + (n - i - 1) * b;
      // printf("%d + % d = %d \n", a * i, (n - i) * b, res[i]);
    }
    qsort(res, n, sizeof(int), compare);
    for (i = 0; i < n; i++) {
      if (i > 0 && res[i] == res[i-1]) {
        continue;
      }
        printf("%d ", res[i]);
    }
    printf("\n");
  }
  return 0;
}
