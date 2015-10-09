int addDigits(int num) {
    while (num >= 10) {
        int out = 0;
        while (num > 0) {
            out +=num%10;
            num/=10;
        }
        num = out;
    }
    return num;
}
