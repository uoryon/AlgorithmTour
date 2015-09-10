// Copyright 2015 suhai
#include <stdio.h>
#include <string.h>

int main() {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int i, j, len, flag = 0, k;
    char w[102];
    scanf("%s", w);
    len = strlen(w);
    for (k = len-1; k >= 0; k--) {
      int ini = -1;
      char min = 'z'+1;
      for (i = k+1; i < len; i++) {
        if (w[i] < min && w[i] > w[k]) {
          ini = i;
          min = w[i];
        }
      }
      if (min != 'z'+1 && min > w[k]) {
        char temp = w[ini];
        w[ini] = w[k];
        w[k] = temp;
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      printf("no answer\n");
    } else {
      for (i = k+1; i < len; i++) {
        for (j = i+1; j < len; j++) {
          if (w[j] < w[i]) {
            char temp = w[j];
            w[j] = w[i];
            w[i] = temp;
          }
        }
      }
      printf("%s\n", w);
    }
  }
  return 0;
}
