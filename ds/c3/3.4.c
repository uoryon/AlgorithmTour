List *intersect(List *L1, List *L2) {
    List *L = (List *)malloc(sizeof(List));
    Position *P = L;
    while(L1 != NULL && L2 != NULL) {
        if (L1->val < L2->val) {
            L1 = L1->next;
        } else if (L1->val > L2->val) {
            L2 = L2->next;
        } else {
            P->next = L1;
            P = P->next;
            L1 = L1->next;
            L2 = L2->next;
        }
    }
    return L;
}
