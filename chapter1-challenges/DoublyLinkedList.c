#include <stdio.h>
#include "string.h"
#include <stdbool.h>

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
    return -1;
}

bool delete(Node node) {
    Node *iterator = head;

    while(iterator != NULL) {
        if(strcmp(node.data, iterator->data) == 0) {
            iterator->predecessor->next = iterator->next;
            return true;
        }
        iterator = iterator->next;
    }
    return false;
}

bool insert(Node node, int index) {
    Node *iterator = head;
    Node *temp;

    if(index == 0) {
        if(head == NULL) {
            head = &node;
        } else {
            head->predecessor = &node;
            head = head->predecessor;
        }
        return true;
    }

    for(; index > 0; index--) {
        if(iterator->next != NULL) {
            iterator = iterator->next;
        } else {
            return false;
        }
    }
    temp = iterator->next;
    iterator->next = &node;
    if(temp != NULL) {
        node.next = temp->next;
    }
    return true;
}

int main() {
    Node n1;
    strcpy(n1.data, "test");
    insert(n1, 0);
    printList();
    return 0;
}
