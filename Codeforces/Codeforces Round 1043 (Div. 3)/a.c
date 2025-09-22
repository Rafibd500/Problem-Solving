#include <stdio.h>
#include <stdlib.h>

struct BST {
    int key;
    struct BST *L, *R;
};

struct BST* make(int k) {
    struct BST* n = malloc(sizeof(*n));
    n->key = k; n->L = n->R = NULL;
    return n;
}

struct BST* bstInsert(struct BST* t, int k) {
    if (!t) return make(k);
    if (k < t->key) t->L = bstInsert(t->L, k);
    else if (k > t->key) t->R = bstInsert(t->R, k);
    return t;
}

struct BST* bstFind(struct BST* t, int k) {
    if (!t || t->key == k) return t;
    if (k < t->key) return bstFind(t->L, k);
    return bstFind(t->R, k);
}

void bstInorder(struct BST* t) {
    if (!t) return;
    bstInorder(t->L);
    printf("%d ", t->key);
    bstInorder(t->R);
}

struct BST* minNode(struct BST* t) {
    while (t && t->L) t = t->L;
    return t;
}

struct BST* bstDelete(struct BST* t, int k) {
    if (!t) return NULL;
    if (k < t->key) t->L = bstDelete(t->L, k);
    else if (k > t->key) t->R = bstDelete(t->R, k);
    else {
        if (!t->L && !t->R) { free(t); return NULL; }
        else if (!t->L) { struct BST* r=t->R; free(t); return r; }
        else if (!t->R) { struct BST* l=t->L; free(t); return l; }
        else {
            struct BST* s = minNode(t->R);
            t->key = s->key;
            t->R = bstDelete(t->R, s->key);
        }
    }
    return t;
}

int main() {
    struct BST* root = NULL;
    int vals[] = {50,30,70,20,40,60,80};
    for (int i=0;i<7;i++) root = bstInsert(root, vals[i]);
    bstInorder(root); printf("\n");
    printf("Search 60: %s\n", bstFind(root, 60) ? "Found" : "Not Found");
    root = bstDelete(root, 70);
    bstInorder(root); printf("\n");
    return 0;
}
