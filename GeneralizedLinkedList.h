#include <stdbool.h>

typedef struct Node {
    int type; //0 - átomo e 1 - lista.
    union {
        int atom;
        struct Node *list;
    }atomlist;
    struct Node *next;
}Node;

int addAtom(Node **list, int atom);
int addList(Node **list, Node **subList);
Node* head(Node *list);
Node* tail(Node *list);
void show(Node *list);
bool search(Node *list, int atom);
int depth(Node *list);



