List* unionList(List *L1, List *L2) {
    List *L = (List *)malloc(sizeof(List));
    Position *P = L;
    while(L1 != NULL || L2 != NULL) {
        if (L1 == NULL || L1->val > L2->val) {
            P->next = L2;
            L2 = L2->next;
        } else if (L2 == NULL || L1->val < L2->val) {
            P->next = L1;
            L1 = L1->next;
        } else if (L1->val == L2->val) {
            P->next = L1;
            L1 = L1->next;
            L2 = L2->next;
        }
        P = P->next;
    }
    return L;
}
