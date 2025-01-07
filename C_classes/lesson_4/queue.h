//
// Created by Marcin Baranek on 07/01/2025.
//

#ifndef QUEUE_H
#define QUEUE_H
#include "domain.h"
// Define a Node for the linked list
struct Node {
    struct Item data;
    struct Node *next;
};

// Define the Queue structure
struct Queue {
    struct Node *front;
    struct Node *rear;
};

struct Queue *createQueue();
struct Node *createNode(struct Item data);
int isEmpty(struct Queue *q);
void enqueue(struct Queue *q, struct Item data);
struct Item dequeue(struct Queue *q);
// Function to remove an item from the queue (dequeue)
struct Item peek(struct Queue *q);
void displayQueue(struct Queue *q);
#endif //QUEUE_H
