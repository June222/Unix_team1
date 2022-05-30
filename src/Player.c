#include<stdio.h>
#include<string.h>
#include<textfileWriter.h>
#include<linkedlist.h>

void add(char* name);
void del(char* name);
void list();
void next();
void prev();
void move(int index);
void play();
void clear();
void quit();
void load(char* fileName);
void save(char* fileName);

int main() {
    
}

void add(char* name) {
    append(strlen(name),name);
}

void del(char* name) {
    delete(name);
}
