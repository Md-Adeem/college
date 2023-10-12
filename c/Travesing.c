#include <stdio.h>

// Function to traverse and print the elements of an array
void traverse(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specific index
void insert(int arr[], int *size, int element, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index for insertion.\n");
        return;
    }

    for (int i = *size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    (*size)++;
}

// Function to delete an element at a specific index
void deleteElement(int arr[], int *size, int index) {
    if (index < 0 || index >= *size) {
        printf("Invalid index for deletion.\n");
        return;
    }

    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int size = 5;

    // Traversing the array
    traverse(arr, size);

    // Inserting an element (e.g., 10) at index 2
    insert(arr, &size, 10, 2);
    traverse(arr, size);

    // Deleting the element at index 3
    deleteElement(arr, &size, 3);
    traverse(arr, size);

    return 0;
}
