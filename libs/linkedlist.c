#include "linkedlist.h"
#include "string.h"

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
    fprintf(stream,"%d\n",size());
    Node* curr = _tail->prev;
    while(curr != _head) {
        fprintf(stream,"%s\n",curr->data);
        curr = curr->prev;
    }
}

void clear() {
    Node* curr = _tail->prev;
    whlie(curr != _head) {
        curr = delete_node(curr)->prev;
    }
    printf("LinkedList is cleared!");
}

Node* append_left(size_t n, char new_data[n]){
    Node* newNode = {"", _head, _head->next};
    _head->next = newNode;
    newNode->data = molloc(size_of(char)*n);
    strcpy(newNode->data, new_data);
    return newNode;
}

Node* insert_after(Node* cur_node, Node* new_node){
    cur_node->next->prev = new_node;
    new_node->next = cur_node->next;
    cur_node->next = new_node;
    new_node->prev = cur_node;
    return _cur_node;
}

Node* append(size_t n, char new_date[n]){
    Node* newNode = {"", _tail->prev, _tail};
    _tail->prev = newNode;
    newNode->data = molloc(size_of(char)*n);
    strcpy(newNode->data, new_data);
    return newNode;
}

Node* delete_node(Node* cur_node){
    _cur_node = cur_node->next;
    cur_node->next->prev = cur_node->prev;
    cur_node->prev->next = cur_node->next;
    free(cur_node);
    return _cur_node;
}

Node* delete_by_data(char* data){
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

Node* first_node() {
    _cur_node = _head->next;
    return _cur_node;
}

Node* last_node() {
    _cur_node = _tail->prev;
    return _cur_node;
}

Node* next() {
    if(_cur_node != _tail && _cur_node->next != _tail)
        _cur_node = _cur_node->next;
    return _cur_node;
}

Node* prev() {
    if(_cur_node != _head && _cur_node->prev != _head)
        _cur_node = _cur_node->prev;
    return _cur_node;
}
