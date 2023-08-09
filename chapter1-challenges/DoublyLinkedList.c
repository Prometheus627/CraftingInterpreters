#include <stdio.h>
#include "string.h"
#include <stdbool.h>
#include <malloc.h>

struct Node {
    char data[30];
    struct Node *next;
    struct Node *predecessor;
};
typedef struct Node Node;

Node *head;
Node *tail;

void print_list() {
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
            free(iterator);
            return true;
        }
        iterator = iterator->next;
    }
    return false;
}

bool insert(Node *node, int index) {
    Node *iterator = head;
    Node *temp;

    if(index == 0) {
        if(head == NULL) {
            head = node;
        } else {
            head->predecessor = node;
            head = head->predecessor;
        }
        return true;
    }

    for(; index > 0; index--) {
        if(iterator->next != NULL) {
            iterator = iterator->next;
        }
    }
    temp = iterator->next;
    iterator->next = node;
    if(temp != NULL) {
        node->next = temp->next;
    }
    return true;
}

Node *create_empty_node() {
    Node *result = malloc(sizeof(Node));
    result->next = NULL;
    result->predecessor = NULL;
    return result;
}

int main() {
    Node *n1 = create_empty_node();
    Node *n2 = create_empty_node();
    Node *n3 = create_empty_node();
    Node *n4 = create_empty_node();
    strcpy(n1->data, "test");
    strcpy(n2->data, "baka");
    strcpy(n3->data, "ahhh");
    strcpy(n4->data, "gugu");
    insert(n1, 0);
    insert(n2, 1);
    insert(n3, 2);
    insert(n4, 1);
    print_list();
    return 0;
}
