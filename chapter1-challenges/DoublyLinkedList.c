#include <stdio.h>
#include "string.h"

struct Node {
    char data[30];
    struct Node *next;
    struct Node *predecessor;
};
typedef struct Node Node;

Node *head;
Node *tail;

void printList() {
    Node *iterator = head;

    while(iterator !=  NULL) {
        printf("%s - ", iterator->data);
        iterator = iterator->next;
    }
    printf("\n");
}

int find(Node node) {
    Node *iterator = head;
    int index = 0;

    while(iterator !=  NULL) {
        if(strcmp(node.data, iterator->data) == 0) {
            return index;
        }
        ++index;
        iterator = iterator->next;
    }
}

int main() {
    printf("Hello, World!\n");
    return 0;
}
