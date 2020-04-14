#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert(int data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;

    if(head == NULL){
        head = new_node;
        tail = new_node;
    }
    else {
        tail->next = new_node;
        tail = new_node;
    }
}

void traverse() {
    struct node *curr_node = head;
    if(head==NULL)
        // cout<<"list is empty"<<endl;
        printf("%s\n", "LIST IS EMPTY");
    else {
        while(curr_node!=NULL) {
            printf("%d\n", curr_node->data);
            // cout<<curr_node->data<<endl;
            curr_node = curr_node->next;
        }
    }
}

void duplicateRemoval() {
    struct node *curr_node = head;
    struct node *next_node;
    // struct node *temp_node = NULL;

    if(curr_node==NULL)
        return;
    else {
        while(curr_node->next!=NULL) {
            if(curr_node->data == curr_node->next->data) {
                next_node = curr_node->next->next;
                free(curr_node->next);
                curr_node->next = next_node;
            }
            else {
                curr_node = curr_node -> next;
            }
        }
    }
}

int main() {
    insert(5);
    insert(5);
    insert(6);
    insert(6);
    insert(6);
    insert(7);
    insert(7);
    insert(8);
    insert(8);
    insert(9);
    duplicateRemoval();
    traverse();
    return 0;
} 