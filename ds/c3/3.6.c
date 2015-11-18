List *add(List* L1, List* L2) {
    List *L = newNode();
    Position *P = L;
    while(L1 != NULL && L2 != NULL) {
        if (L1 == NULL || L1->m < L2->m) {
            P->next = newNode(L2->val, L2->m);
            L2 = L2->next;
        } else if (L2 == NULL || L1->m > L2->m) {
            P->next = newNode(L1->val, L1->m);
            L1 = L1->next;
        } else {
            P->next = newNode(L1->val + L2->val, L2->m);
            L1 = L1->next;
            L2 = L2->next;
        }
        P = P->next;
    }
    return L;
}
