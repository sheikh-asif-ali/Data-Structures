#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node* reverse(struct node* head){
    struct node *prev,*curr, *next;
    prev = next = NULL;
    curr = head;

    while(curr->next != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
}
int main(){

}