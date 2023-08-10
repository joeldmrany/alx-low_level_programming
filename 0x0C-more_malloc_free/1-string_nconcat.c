#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	char* string_nconcat(char* s1, char* s2, unsigned int n) {
    char* d = malloc(strlen(s1) + strlen(s2) + 1);

    memcpy(d, s1, strlen(s1));

    if (n < strlen(s2)) {
        memcpy(d + strlen(s1), s2, n);
    } else {
        memcpy(d + strlen(s1), s2, strlen(s2));
    }

    if (d == NULL) {
        free(s1);
        free(s2);
        return NULL;
    }

    memcpy(d, s1, strlen(s1));

    if (n >= strlen(s2)) {
        memcpy(d + strlen(s1), s2, strlen(s2));
    } else {
        memcpy(d + strlen(s1), s2, n);
    }

    return d;
}

