// Copyright suhai
#include <stdio.h>

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int n = 0, i = 0, aL = 0, aR = 0, mid = 0;
    int flag = 0;
    int a[10004];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      if (i < (n-1) / 2) {
        aL += a[i];
      } else if (i > (n-1) / 2) {
        aR += a[i];
      }
    }
    mid = (n-1)/2;
    if (aL < aR) {i = 1;}
    else {i = -1;}
    while (1) {
      if (aL == aR) {
        flag = 1;
        break;
      } else if (i == 1 && aL < aR) {
        aL+=a[mid];
        mid++;
        aR-=a[mid];
      } else if (i == -1 && aL > aR) {
        aR+=a[mid];
        mid--;
        aL-=a[mid];
      } else {
        break;
      }
    }
  if (flag == 1) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  }
  return 0;
}
