#include "linkedlist.h"

static Node* _head = NULL;
static Node* _tail = NULL;
static Node* _cur_node = NULL;

bool empty() {
    return _head->next == _tail;
}

size_t size() {
    size_t size = 0;
    Node* curr = _head->next;
    while(curr != NULL) {
        size++;
        curr = curr->next;
    }
    return size;
}

void print() {
    printf("LinkedList [");
    Node* curr = _head->next;
    while(curr != NULL) {
        printf(" %s",curr->data);
        curr = curr->next;
    }
    printf(" ]\n");
}

void print_file(FILE* stream){
    fprintf(stream,"LinkedList [");
    Node* curr = _head->next;
    while(curr != NULL) {
        fprintf(stream," %s",curr->data);
        curr = curr->next;
    }
    fprintf(" ]\n");
}

void clear() {
    Node* curr = _tail->prev;
    while(curr != _head) {
        Node* _temp_node = curr->next->prev = curr->prev;
        free(curr);
        curr = _temp_node;
    }
    printf("LinkedList is cleared!");
}

Node* append_left(size_t n, char new_data[n]){}

Node* insert_after(Node* cur_node, Node* new_node){}

Node* append(size_t n, char new_date[n]){}

Node* delete_node(Node* cur_node){}

Node* delete(char* data){}

Node* get_node(size_t index){}

Node* first();

Node* last();

Node* next();

Node* prev();