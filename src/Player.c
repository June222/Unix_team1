
#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>

#include "linkedlist.h"
#include "textfilewriter.h"

int main() {
    int InpCnt = 0;
    scanf("%d",&InpCnt);
    for(;InpCnt>0;InpCnt--) {
        char* songName;
        scanf(" %s",songName);
        append_left(strlen(name),name);
    }
    scanf("%d",&InpCnt);
    for(;InpCnt>0;InpCnt--) {
        char* cmd;
        scanf(" %s",cmd);
        if(strcpy(cmd,"add")==0) {
            char* name;
            scanf(" %s",name);
            append_left(strlen(name),name);
        }else if(strcpy(cmd,"del")==0) {
            char* name;
            scanf(" %s",name);
            delete_by_data(name);
        }else if(strcpy(cmd,"list")==0) {
            print();
        }else if(strcpy(cmd,"next")==0) {
            next();
        }else if(strcpy(cmd,"prev")==0) {
            prev();
        }else if(strcpy(cmd,"move")==0) {
            int index;
            scanf("%d",&index);
            Node* copyNode;
            *copyNode = {(char*)malloc(sizeof(char)*strlen(_cur_node->data)),NULL,NULL};
            insert_after(get_node(index),copyNode);
            delete_node(_cur_node);
        }else if(strcpy(cmd,"play")==0) {
            printf("%s is now playing!\n",_cur_node->data);
        }else if(strcpy(cmd,"clear")==0) {
            clear();
        }else if(strcpy(cmd,"quit")==0) {
            clear();
            printf("quit!");
            return 0;
        }else if(strcpy(cmd,"load")==0) {
            char* fileName;
            scanf(" %s",fileName);

        }else if(strcpy(cmd,"save")==0) {
            char* fileName;
            scanf(" %s",fileName);

        }
    }
}