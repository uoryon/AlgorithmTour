/* Copyright */
#include <stdio.h>

void print(int num) {
    if (num < 10) {
        printf("  %d", num);
    } else {
        printf(" %d", num);
    }
}

int main() {
    int n, k, m;
    int arr[20];
    while (scanf("%d %d %d", &n, &k, &m) != EOF && n != 0 && k != 0 && m != 0) {
        int i = 0, l = 0, r = 0;
        int out = 0;
        for (i = 0; i < n; i++) {
            arr[i] = i+1;
        }
        l = 0, r = n-1;
        while (out != n) {
            int count;
            for (count = 0; count < k-1;) {
                l = (l+1)%n;
                if (arr[l] != 0) {
                    count++;
                }
            }

            for (count = 0; count < m-1;) {
                r = (r+n-1)%n;
                if (arr[r] != 0) {
                    count++;
                }
            }

            if (l != r) {
                print(arr[l]);
                print(arr[r]);
                out += 2;
            } else {
                print(arr[l]);
                out += 1;
            }
            arr[l] = arr[r] = 0;
            if (out != n) {
                printf(",");
                while (arr[l]==0) {l = (l+1)%n;}
                while (arr[r]==0) {r = (r-1)%n;}
            }
        }
        printf("\n");
    }
    return 0;
}
