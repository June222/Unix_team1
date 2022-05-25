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
    while(curr != _tail) {
        size++;
        curr = curr->next;
    }
    return size;
}

void print() {
    printf("LinkedList [");
    Node* curr = _head->next;
    while(curr != _tail) {
        printf(" %s",curr->data);
        curr = curr->next;
    }
    printf(" ]\n");
}

void print_file(FILE* stream){
    fprintf(stream,"LinkedList [");
    Node* curr = _head->next;
    while(curr != _tail) {
        fprintf(stream," %s",curr->data);
        curr = curr->next;
    }
    fprintf(" ]\n");
}

void clear() {
    Node* curr = _tail->prev;
    whlie(curr != _head) {
        curr = delete_node(curr);
    }
    printf("LinkedList is cleared!");
}

Node* append_left(size_t n, char new_data[n]){}

Node* insert_after(Node* cur_node, Node* new_node){}

Node* append(size_t n, char new_date[n]){}

Node* delete_node(Node* cur_node){
    Node* _temp_node = cur_node->next->prev = cur_node->prev;
    cur_node->prev->next = cur_node->next;
    free(cur_node);
    return _temp_node;
}

Node* delete(char* data){
    Node* curr = _head->next;
    while(curr != _tail) {
        if(strcmp(curr->data,data) == 0) {
            delete_node(curr);
            break;
        }
    }
}

Node* get_node(size_t index){}

Node* first();

Node* last();

Node* next();

Node* prev();