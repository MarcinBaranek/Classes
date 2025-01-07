#include <stdio.h>
#include <stdlib.h>
#include "domain.h"
#include "queue.h"

void printArray(struct Item arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Label: %d, Value: %.2f\n", arr[i].label, arr[i].value);
    }
}

// Comparison function for qsort to sort by the 'value' field
int compareByValue(const void *a, const void *b) {
    struct Item *itemA = (struct Item *)a;
    struct Item *itemB = (struct Item *)b;
    if (itemA->value < itemB->value) return -1; // itemA comes before itemB
    if (itemA->value > itemB->value) return 1;  // itemA comes after itemB
    return 0;  // itemA is equal to itemB
}


int main() {
    struct Item arr[] = {
        {1, 45.6},
        {2, 12.3},
        {3, 78.9},
        {4, 23.5},
        {5, 56.7}
    };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting:\n");
    printArray(arr, n);

    // Sort the array by value
    qsort(arr, n, sizeof(struct Item), compareByValue);

    printf("\nAfter sorting by value:\n");
    printArray(arr, n);

    return 0;
}

// int main() {
//     // Create a queue
//     struct Queue *q = createQueue();
//
//     // Add items to the queue
//     struct Item item1 = {1, 45.6};
//     struct Item item2 = {2, 12.3};
//     struct Item item3 = {3, 78.9};
//     enqueue(q, item1);
//     enqueue(q, item2);
//     enqueue(q, item3);
//
//     printf("Queue contents after enqueue:\n");
//     displayQueue(q);
//
//     // Remove an item from the queue
//     struct Item removedItem = dequeue(q);
//     printf("\nDequeued item: Label: %d, Value: %.2f\n", removedItem.label, removedItem.value);
//
//     printf("\nQueue contents after dequeue:\n");
//     displayQueue(q);
//
//     // Peek at the front item
//     struct Item frontItem = peek(q);
//     printf("\nFront item: Label: %d, Value: %.2f\n", frontItem.label, frontItem.value);
//
//     // Free the queue
//     free(q);
//     return 0;
// }
