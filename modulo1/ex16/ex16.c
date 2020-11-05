#include "ex16.h"

char* where_exists(char* str1, char* str2){
 if (str2 == NULL || str1 == NULL) {
        return NULL;
    }

    for ( ; *str2; str2++) {
        // Is str1 in str2 atm
        const char *h, *n;
        for (h = str2, n = str1; *h && *n && (*h == *n); ++h, ++n) {
            // finding match
        }
        if (*n == '\0') {
            // Found match!
            return str2;
        }
        // NO Match
    }
    return NULL;
}