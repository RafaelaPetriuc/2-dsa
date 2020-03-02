//
// Created by Lenovo on 3/2/2020.
#include <stdio.h>
#include <stdlib.h>
#include "head.h"

void PRINT_ALL(node_t *node){
    while(node != NULL){
        printf(" %d ", node->value);
        node = node->next;
    }
    printf("\n");
}

void AF(node_t **head, int new_data){
    node_t* new_node = (node_t*) malloc(sizeof(node_t));
    new_node->value = new_data;
    new_node->next = (*head);
    (*head) = new_node;
}

void AL(node_t **head, int new_data){
    node_t *new_node=(node_t*) malloc(sizeof(node_t));
    node_t *last= *head;
    new_node->value = new_data;
    new_node->next = NULL;
    if(*head==NULL)
    {
        *head = new_node;
        return;
    }
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}
void DF(node_t **head)
{
    node_t *toDelete = *head;
    toDelete = toDelete->next;
    free(head);
    *head = toDelete;
}

void DL(node_t *head)
{
    node_t *toDelete = head;
    node_t *t;
    while(toDelete->next != NULL)
    {
        t=toDelete;
        toDelete= toDelete->next;
    }
    free(t->next);
    t->next = NULL;
}

void DOOM_THE_LIST(node_t **head)
{
    node_t *current = *head;
    node_t *next;
    while(current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

void DE(node_t **head, int no)
{
    node_t *toDelete = *head;
    node_t *prev;
    if(toDelete != NULL && toDelete->value == no)
    {
        *head = toDelete->next;
        free(toDelete);
        return;
    }
    while(toDelete !=NULL && toDelete->value != no)
    {
        prev = toDelete;
        toDelete = toDelete->next;
    }
    if(toDelete == NULL)
        return;
    prev ->next = toDelete->next;
    free(toDelete);
}

//

