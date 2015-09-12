class Solution {
public:
    long long nthUglyNumber(int n) {
        long long d[10020] = {0};
        d[0] = 1;
        for (int i = 1; i < n; i++) {
            int i2 = i-1, i3 = i-1, i5 = i-1;
            while (i2 >= 0 && d[i2] * 2 > d[i-1]) {i2--;}
            while (i3 >= 0 && d[i3] * 3 > d[i-1]) {i3--;}
            while (i5 >= 0 && d[i5] * 5 > d[i-1]) {i5--;}
            d[i] = min(d[i2+1]*2, min(d[i3+1]*3, d[i5+1]*5));
        }
        return d[n-1];
    }
};