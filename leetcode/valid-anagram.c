bool isAnagram(char* s, char* t) {
    int c1[30] = {0}, c2[30] = {0}, i = 0;
    for(i = 0; i < strlen(s); i++) {
        c1[s[i] - 'a'] +=1;
    }
    for(i = 0; i < strlen(t); i++) {
        c2[t[i] - 'a'] +=1;
    }
    for (i = 0; i < 26; i++) {
        if (c1[i] != c2[i]) return false;
    }
    return true;
}
