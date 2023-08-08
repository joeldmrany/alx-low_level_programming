#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    char *nea;

    if (size < 1) {
        return NULL;
    } else {
        nea = malloc(size*sizeof(char));
        if(nea == NULL) {
            return NULL;
        }
    }
    nea[0] = c;
    for(int i = 0; i < size - 1; i++) {
        nea[i+1] = c;
    }
    return nea;
}

