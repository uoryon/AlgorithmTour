// CopyRight suhai
#include<stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int M, N, c[10002], i, j;
    scanf("%d", &M);
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
      scanf("%d", &c[i]);
    }
    for (i = 0; i < N; i++) {
      int flag = 0;
      for (j = i+1; j < N; j++) {
        if (c[i] + c[j] == M) {
          flag = 1;
          break;
        }
      }
      if (flag == 1) {
        break;
      }
    }
    printf("%d %d\n", i+1, j+1);
  }
  return 0;
}

