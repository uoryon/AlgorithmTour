// CopyRight suhai

#include <stdio.h>
#include <stdlib.h>

int a[101][101];

int main() {
  int n, i, j, k;
  int maxD = 0, tempD;
  char s[102] = {0};
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s", s);
    for (j = 0; j < n; j++) {
      a[i][j] = s[j] - '0';
    }
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i != 0 && i != n-1 && j != 0 && j != n-1) {
        if (a[i][j]-a[i-1][j] > 0 &&
            a[i][j]-a[i][j-1] > 0 &&
            a[i][j]-a[i+1][j] > 0 &&
            a[i][j]-a[i][j+1] > 0) {
          printf("X");
          continue;
        }
      }
      printf("%d", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
