/* copyright */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char vowel[] = {'A', 'U', 'E', 'O', 'I'};
char consonant[] = {'J', 'S', 'B', 'K', 'T', 'C', 'L', 'D', 'M', 'V',
                    'N', 'W', 'F', 'X', 'G', 'P', 'Y', 'H', 'Q', 'Z', 'R'
                   };

int cmp(const void *a, const void *b) {
    char a1 = *(const char *)a;
    char a2 = *(const char *)b;
    if (a1 < a2) return -1;
    else if (a1 > a2) return 1;
    return 0;
}

int main(int argc, char const *argv[]) {
    int N = 0, i, j, k, ee, bb;
    char vname[202] = {0};
    char cname[202] = {0};
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        int n = 0;
        scanf("%d", &n);

        memset(vname, 0, 202 * sizeof(char));
        memset(cname, 0, 202 * sizeof(char));

        for (j = 1, k = 0; j <= (n + 1) / 2; j++) {
            vname[j - 1] = vowel[k];
            if (j % 21 == 0) k++;
        }
        for (j = 1, k = 0; j <= n / 2; j++) {
            cname[j - 1] = consonant[k];
            if (j % 5 == 0) k++;
        }

        qsort(vname, (n + 1) / 2, sizeof(char), cmp);
        qsort(cname, n / 2, sizeof(char), cmp);
        printf("Case %d: ", i + 1);
        for (j = 0; j < n; j++) {
            printf("%c", j % 2 == 0 ? vname[j / 2] : cname[(j - 1) / 2]);
        }
        printf("\n");
    }
    return 0;
}
