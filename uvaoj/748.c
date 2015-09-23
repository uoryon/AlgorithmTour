// Copyright 2015 suhai
#include<stdio.h>
#include<string.h>

#define MAXN 20000

char input[6] = {};
int o[6] = {0};
int output[MAXN] = {0}, s[MAXN] = {0};

int main() {
  int b, i, j, k, l;
  while ( scanf("%s %d", input, &b) != EOF ) {
    i = 0, j = 5, k = 0, l = 0;
    int len = strlen(input);
    int p = 0;
    for (i = 0; i < len; i++) {
      if (input[i] == '.') {
        p = len - i -1;
        p *=  b;
      } else {
        o[--j] = input[i]-'0';
      }
    }
    o[len-1] = 0;
    for (i = 0; i < len-1; i++) {
      output[i] = o[i];
    }
    for (i = 1; i < b; i++) {
      memset(s, 0, sizeof(s));
      for (j = 0; j < len; j++) {
        int c = 0;
        for (k = 0; k < MAXN; k++) {
          s[j+k] += output[k] * o[j] + c;
          c = s[j+k] / 10;
          s[j+k] %= 10;
        }
      }
      for (l = 0; l < MAXN; l++) {
        output[l] = s[l];
      }
    }
    for (i = MAXN; i >= 0; i--) {
      if (s[i] || i == p) {
        break;
      }
    }
    for (j = 0; j <= i; j++) {
      if (s[j]) {
        break;
      }
    }
    for (int l = i; l >= j; l --) {
        if (p == l && l == i) {
          if ( s[l] ) {
            printf("%d.", s[l]);
          } else {
            printf(".");
            continue;
          }
        }
        printf("%d", s[l]);
        if (p == l && l != i) printf(".");
    }
    printf("\n");
  }
  return 0;
}
