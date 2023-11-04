//
// Implementation of a doubly linked list with nodes holding char* as data
// Created by Dennis Forster on 14-Oct-23.
//

#include <stdio.h>

/**
 * Node defining data structure, which takes a char* as main data and two references to a predecessor- and successor
 * Node, respectively.
 */
typedef struct Node {
    char* data;
    struct Node* predecessor;
    struct Node* successor;
} Node;

/**
 * Constructor for a Node struct.
 * @param data main data for Node
 * @return Node with given char*
 */
Node nodeConstructor(char* data) {
    Node n1;
    n1.data = data;
    n1.predecessor = NULL;
    n1.successor = NULL;
    return n1;
}

/**
 * Inserts a node into the list at a given index, with the given data.
 * @param index index at which the node is to be inserted
 * @param data data of the node that is to be inserted
 * @return 0, if successful, -1 otherwise
 */
int insert(int index, char* data) {
    return -1;
}

/**
 * Deletes the first found node that has the given key.
 * @param key char* key that is to be searched for
 * @return 0, if successful, -1 otherwise
 */
int delete(char* key) {
    return -1;
}

/**
 * Returns the index of a node with the given key or -1, if no such node could be found.
 * @param key char* key that is to be searched for
 * @return the index of a node with the given key or -1, if no such node could be found
 */
int find(char* key) {
    return -1;

