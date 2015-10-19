int max(int a, int b) {
    if (a > b) return a;
    else return b;
}
int trap(int* height, int heightSize) {
    int cHight = 0;
    int left = 0;
    int right = heightSize-1;
    int area = 0;
    while (left < right){
        if (height[left] < height[right]){
            cHight = max(height[left], cHight);
            area += cHight-height[left];
            left++;
        } else {
            cHight = max(height[right], cHight);
            area += cHight-height[right];
            right--;
        }
    }
    return area;
}
