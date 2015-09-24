#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int img[32][32];

char tree[2000];
int step;

void fill(int a, int b, int w) {
  char p = tree[step];
  int i = 0, j = 0;
  step++;
  if (p == 'p') {
    fill(a+w/2, b, w/2);
    fill(a, b+w/2, w/2);
    fill(a, b, w/2);
    fill(a+w/2, b+w/2, w/2);
  }

  if (p == 'f') {
    for (i = a; i < a+w; i++){
      for (j = b; j < b+w; j++){
        img[i][j] = 1;
      }
    }
  }

}

int main(){
  int T;
  scanf("%d", &T);
  while (T--) {
    int count = 0, i, j;
    memset(img, 0, sizeof(img));
    memset(tree, 0, sizeof(tree));
    step = 0;
    scanf("%s", tree);
    fill(0, 0, 32);
    step = 0;
    memset(tree, 0, sizeof(tree));
    scanf("%s", tree);
    fill(0, 0, 32);

    for(i = 0; i < 32; i++){
      for(j = 0; j < 32; j++){
        if (img[i][j] == 1) {
          count ++;
        }
      }
    }

    printf("There are %d black pixels.\n", count);

  }

  return 0;

}
