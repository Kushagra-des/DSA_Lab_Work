#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
scanf("%d", &n);

// For Inputing the elements in the array.

    int *a = malloc(n * sizeof(int));
    for(int i= 0; i <n; i++) {
      scanf("%d", &a[i]);
}
// Main Logic to printing the array in reverse.

    for (int i= n-1; i >= 0; i -- ) {
        printf("%d", a[i]) ;
        if (i != 0) printf(" ");

/* Starts from i = n-1 (last element).
Keeps decrementing until i = 0.
printf("%d", a[i]); prints the element.
if (i != 0) printf(" "); > prints a space after every number except the last one */

printf("\n");

free (a);
return 0;
