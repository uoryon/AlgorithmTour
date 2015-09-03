#include <stdio.h>
#include <math.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int a, b;
    int count = 0;
    int i;
    scanf("%d %d", &a, &b);
    for (i = (int)sqrt(a)+1; i * i <= b; i++) {
        count ++;
    }
    if (sqrt(a) == (int)sqrt) {count ++;} 
    printf("%d\n", count);
  }
  return 0;
}