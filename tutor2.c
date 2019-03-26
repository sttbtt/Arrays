#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct Array {
  int capacity;  // How many elements can this array hold?
  int count;  // How many states does the array currently hold?
  char **elements;  // The string elements contained in the array
} Array;

Array *create_array (int capacity) {
  // Allocate memory for the Array struct
  Array *arr = malloc(sizeof(Array));

  // Set initial values for capacity and count
  arr->capacity = capacity;
  arr->count = 0;

  // Allocate memory for elements
  arr->elements = malloc(16 * sizeof(char *) * capacity);

  return arr;
}

void destroy_array(Array *arr) {

  // Free all elements
  free(arr->elements);

  // Free array
  free(arr);

}

void arr_append(Array *arr, char *element) {

  // Resize the array if the number of elements is over capacity
  // or throw an error if resize isn't implemented yet.

  // Copy the element and add it to the end of the array
  printf("%s\n", element);
  arr->elements[arr->count] = element;
  
  // Increment count by 1
  arr->count++;

}

int main() {

  Array *arr1 = create_array(1);
  arr_append(arr1, "STRING4");
  destroy_array(arr1);
  
  return 0;
}