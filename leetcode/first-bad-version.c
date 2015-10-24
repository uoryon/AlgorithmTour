// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

int firstBadVersion(int n) {
    int l = 1, r = n;
    if (n == 1) return n;
    while (l + 1 < r) {
        int mid = l + (r - l) / 2;
        if (isBadVersion(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }
    if (isBadVersion(l)) return l;
    else return r;
}
