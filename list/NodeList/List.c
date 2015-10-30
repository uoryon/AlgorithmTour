#include <stdio.h>
#include <stdlib.h>
#include"list.h"

#define true 1
#define false 0

typedef ElementType int;

struct Node {
    Position Next;
    ElementType X;
};

List MakeEmpty( List L ) {
    Position p = L->Next, q;
    while (p != NULL) {
        q = p->Next;
        free(p);
        p = q;
    }
    return L;
}

int IsEmpty( List L ) {
    if (L->Next == NULL) return true;
    else return false;
}

int IsLast( Position P, List L ) {
    Position q = L->Next;
    while (q != NULL ) {
        if (q == P && q->Next == NULL) {
            return true;
        }
        q = q->Next;
    }
    return false;
}

Position Find ( ElementType X, List L) {
    Position p = L;
    while (p != NULL) {
        if (p->X == X) break;
    }
    return p;
}

void Delete( ElementType X, List L ) {
    Position p, q;
    q = FindPrevious(X, L);
    p = Find(X, L);
    q->next = p->next;
    free(p);
}

Position FindPrevious( ElementType X, List L) {
    Position p = L;
    while(p->Next != NULL) {
        if (p->Next == X) break;
        p = p->Next;
    }
    return p;
}

void Insert( ElementType X, List L, Position P ) {
    Node * a
}

int main() {
    List l = (L)malloc(sizeof(Node));
}
