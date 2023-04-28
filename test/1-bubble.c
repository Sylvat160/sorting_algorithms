#include "../sort.h"

/**
 * main - main entry
 * Return: void
 * 
 */

int main (void) {
    int ar[] = {1,3,5,45,34,65,67868,789,78,6,5};
    size_t n = sizeof(ar) / sizeof(ar[0]);

    bubble_sort(ar, n);
}