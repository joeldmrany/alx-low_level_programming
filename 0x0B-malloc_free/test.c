#include <stdlib.h>
#include <string.h>
#include "main.h"

char *str_concat(char *s1, char *s2) {
	char *f;
	int a, b, c;
	if (!s1 || !s2 || !strlen(s1) || !strlen(s2)) {
		return NULL;
	}
	f = NULL;
	a = strlen(s1), b = strlen(s2), c = a + b;
	f = malloc(c);
	if (!f) {
		return NULL;
	}
	strncpy(f, s1, a);
	strncpy(f + a, s2, b);
	return f;
}

