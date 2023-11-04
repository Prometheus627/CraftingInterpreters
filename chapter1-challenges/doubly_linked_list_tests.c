//
// Created by Dennis Forster on 14-Oct-23.
//

#include "doubly_linked_list.c"
#include <assert.h>

int main() {
    assert(insert(1, "") == -1 && "insert out of bounds exception test");
    assert(insert(0, NULL) == -1 && "null pointer exception test");
    assert(insert(0, "test1") == 0 && "happy path test 1");
    assert(insert(1, "test2") == 0 && "happy path test 2");
    assert(insert(1, "test3") == 0 && "happy path test 3");
    return 0;
}
