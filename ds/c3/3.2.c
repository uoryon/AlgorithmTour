
void PrintLots(List *L, List *P) {
    int d = 0;
    while(P != NULL) {
        int n = P->val - d;
        while(n--) {
            L = L->next;
        }
        printf("%d\n", L->val);
        d = P->val;
        P = P->next;
    }
}
