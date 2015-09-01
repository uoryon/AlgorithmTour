#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, flag = 0, k = 0, i;
    scanf("%d", &n);
    for (k = n - (n %3); k >= 0; k-=3) {
      if (k%3 == 0 && (n-k) % 5 == 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      printf("-1\n");
      continue;
    } else {
      for (int i = 0; i < k; i++) {
        printf("5");
      }
      for (int i = 0; i < n - k; i++) {
        printf("3");
      }
      printf("\n");
    }
  }
  return 0;
}