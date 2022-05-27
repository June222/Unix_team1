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
        curr = curr->prev;
        delete_node(curr->next);
    }
    printf("LinkedList is cleared!");
}

Node* append_left(size_t n, char new_data[n]){
    Node* curr = _head;
    int i;
    for(i=0;i<n;i++) {
        Node new = {new_data[i],curr,curr->next};
        curr->next->prev = &new;
        curr->next = new;
        curr = new;
    }
}

Node* insert_after(Node* cur_node, Node* new_node){
    cur_node->next->prev = new_node;
    new_node->next = cur_node->next;
    cur_node->next = new_node;
    new_node->prev = cur_node;
}

Node* append(size_t n, char new_date[n]){}

Node* delete_node(Node* cur_node){
    cur_node->next->prev = cur_node->prev;
    cur_node->prev->next = cur_node->next;
    return cur_node
}

Node* delete(char* data){
    Node* curr = _head->next;
    while(curr != _tail) {
        if(strcmp(curr->data,data) == 0) {
            return delete_node(curr);
        }
    }
    return NULL;
}

Node* get_node(size_t index){
    size_t now_index = 0;
    Node* curr = head->next;
    while(now_index < index) {
        if(curr == _tail) return NULL;
        curr = curr->next;
        now_index++;
    }
    return curr;
}

Node* first();

Node* last();

Node* next();

Node* prev();