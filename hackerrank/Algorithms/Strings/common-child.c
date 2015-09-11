#include <stdio.h>
#include <string.h>

int dp[5002][5002] = {0};

int main() {
  char a[5002], b[5002];
  int lena, lenb, i, j;
  scanf("%s", a);
  scanf("%s", b);
  lena = strlen(a);
  lenb = strlen(b);
  dp[0][0] = 1;
  for (i = 1; i <= lena; i++){
    for (j = 1; j <= lenb; j++){
      if (a[i-1] == b[i-1]) {
        dp[i][j] = dp[i-1][j-1] + 1;
      } else {
        if (dp[i][j] < dp[i-1][j]) {
          dp[i][j] = dp[i-1][j];
        }
        if (dp[i][j] < dp[i][j-1]) {
          dp[i][j] = dp[i][j-1];
        }
      }
    }
  }

  printf("%d\n", dp[lena][lenb]);

  return 0;
}
