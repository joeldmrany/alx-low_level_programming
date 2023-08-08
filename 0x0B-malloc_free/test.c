#include <stdlib.h>
#include <string.h>
#include "main.h"

char *_strdup(char *str) {
  size_t str_len = strlen(str);
  char *strdup = malloc(1 * str_len + 1);
  strcpy(strdup, str);
  if (strdup == NULL) {
    return NULL;
  }
  return strdup;
}

