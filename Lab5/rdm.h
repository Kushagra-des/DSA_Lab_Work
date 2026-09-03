#ifndef RDM_H
#define RDM_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int *Rdm(int n) {
    if (n <= 0) {
        fprintf(stderr, "Array size must be positive.\n");
        return NULL;
    }

    int *arr = malloc((size_t)n * sizeof(*arr));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return NULL;
    }

    static int seeded = 0;
    if (!seeded) {
        srand((unsigned)time(NULL));
        seeded = 1;
    }

    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;

    return arr;
}

#endif
