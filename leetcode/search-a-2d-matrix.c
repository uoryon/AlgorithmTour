bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    int l = 0, r = matrixRowSize-1, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (matrix[mid][0] > target) {
            r = mid - 1;
        } else if (matrix[mid][0] <= target) {
            if (mid + 1 == matrixRowSize || matrix[mid+1][0] > target) {
                break;
            } else {
                l = mid+1;
            }
        }
    }
    int row = mid;
    l = 0;
    r = matrixColSize-1;
    while (l <= r) {
        mid = (l+r)/2;
        if (matrix[row][mid] > target) {
            r = mid - 1;
        } else if (matrix[row][mid] < target) {
            l = mid + 1;
        } else {
            break;
        }
    }
    if (matrix[row][mid] != target) {
        return false;
    }
    return true;
}
