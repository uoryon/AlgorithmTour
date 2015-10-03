bool checkCount(int *count) {
    int i = 0;
    for (i = 1; i <= 9; i++ ) {
        if (count[i]>1) {return false;}
    }
    return true;
}


bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
    int count[10] = {0}, i, j, ii, jj, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (ii = i * 3; ii < i*3+3; ii++) {
                for (jj = j * 3; jj < j *3+3; jj++) {
                    char now = board[ii][jj];
                    if (now != '.') {
                        count[now - '0']++;
                    }
                }
            }
            if (!checkCount(count)) {return false;}
            memset(count, 0, sizeof(count));
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            char now = board[i][j];
            if (now != '.') {
                count[now-'0']++;
            }
        }
        if (!checkCount(count)) {return false;}
            memset(count, 0, sizeof(count));
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            char now = board[j][i];
            if (now != '.') {
                count[now-'0']++;
            }
        }
        if (!checkCount(count)) {return false;}
            memset(count, 0, sizeof(count));
    }
    return true;
}