/* Copyright suhai */

// #include<cstdio>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// struct phone {
    // char num[8];
    // int time;
// };
int key[26] = {2, 2, 2,
                3, 3, 3,
                4, 4, 4,
                5, 5, 5,
                6, 6, 6,
                7, 0, 7, 7,
                8, 8, 8,
                9, 9, 9, 0};

// static int comp1(const struct phone *a, const struct phone *b) {
    // return strcmp(a->num, b->num);
// }
int comp1(const void *a, const void *b) {
    int o = *(int *)a;
    int t = *(int *)b;
    return o<t;
}

int main() {
    int nDatasets = 0;
    scanf("%d", &nDatasets);
    while (nDatasets--) {
        int num, nump, i = 0, sum = 0;
        scanf("%d", &num);
        nump = num;
        // struct phone *k = (struct phone *)malloc(sizeof(struct phone) * (num+1));
        int a[100002];
        // int phoneLen = 0;
        while (num--) {
            int j = 0;
            char *p;
            char input[40];
            char number[8];
            scanf("%s", p);
            input = gets();
            for (p = input; *p != '\0'; p++) {
                if (*p == '-') {
                    continue;
                } else {
                  a[num] = a[num] * 10 + key[*p-'0'];
                }
            }
            // for (j = 0; j < phoneLen; j++) {
                // if (strcmp(number, k[j].num) == 0) {
                    // k[j].time+=1;
                    // break;
                // }
            // }
            // if (j == phoneLen) {
                // phoneLen+=1;
                // snprintf(k[j].num, sizeof(char) * 8, "%s", number);
                // k[j].time = 1;
            // }
        }
        qsort(a, nump, sizeof(int), comp1);
        while (i < nump-1) {
          int j = i;
          while (j < nump-1 && a[j] == a[j+1]) j++;

        }
        // qsort(k, phoneLen, sizeof(struct phone), comp1);
        // for (i = 0; i < phoneLen; i++) {
            // if (k[i].time > 1) {
                // struct phone p = k[i];
                // dupFlag = 0;
                // printf("%c%c%c-%c%c%c%c %d\n", p.num[0], p.num[1], p.num[2], p.num[3], p.num[4], p.num[5], p.num[6], p.time);
            // }
        // }
        // if (dupFlag == 1) {
            // printf("No duplicates.\n");
        // }
        // printf("\n");
    }
    return 0;
}

