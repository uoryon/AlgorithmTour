void printList(List *L) {
    Position *p = L;
    while (p != NULL) {
        printf("%d", p->val);
        p = p->next;
    }
}
