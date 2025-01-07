//
// Created by Marcin Baranek on 07/01/2025.
//
// Function to check if the queue is empty
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// Function to create a new queue
struct Queue *createQueue() {
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// Function to create a new node
struct Node *createNode(struct Item data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Queue *q) {
    return q->front == NULL;
}

// Function to add an item to the queue (enqueue)
void enqueue(struct Queue *q, struct Item data) {
    struct Node *newNode = createNode(data);
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
}

// Function to remove an item from the queue (dequeue)
struct Item dequeue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow! Returning a default item.\n");
        struct Item emptyItem = {0, 0.0};
        return emptyItem;
    }
    struct Node *temp = q->front;
    struct Item data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }
    free(temp);
    return data;
}

// Function to get the front item without removing it (peek)
struct Item peek(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Returning a default item.\n");
        struct Item emptyItem = {0, 0.0};
        return emptyItem;
    }
    return q->front->data;
}

// Function to display the queue contents
void displayQueue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    struct Node *temp = q->front;
    while (temp != NULL) {
        printf("Label: %d, Value: %.2f\n", temp->data.label, temp->data.value);
        temp = temp->next;
    }
}