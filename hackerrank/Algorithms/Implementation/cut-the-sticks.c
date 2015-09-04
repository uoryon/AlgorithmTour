#include <stdio.h>

int a[1002]={0};

int main() {
  int n, i, count;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int flag = 0;
  do {
    int small = 1001;
    count = 0;
    flag = 0;
    for (i = 0; i < n; i++) {
      if (a[i] > 0 && a[i] < small) {
        small = a[i];
      }
    }
    for (i = 0; i < n; i++) {
      if (a[i] != 0) {
        a[i] -= small;
        count++;
        flag = 1;
      }
    }
    if (count)
    printf("%d\n", count);
  } while (flag);
  return 0;
}