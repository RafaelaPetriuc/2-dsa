//
// Created by Lenovo on 3/2/2020.
//

#ifndef ASSIGNMENT1_HEAD_H
#define ASSIGNMENT1_HEAD_H

struct node{
    int value;
    struct node* next;
};
typedef struct node node_t;

void PRINT_ALL(node_t *node);
void AF(node_t **head, int new_data);
void AL(node_t **head, int new_data);
void DF(node_t **head);
void DL(node_t *head);
void DOOM_THE_LIST(node_t **head);
void DE(node_t **head, int no);


#endif //ASSIGNMENT1_HEAD_H
