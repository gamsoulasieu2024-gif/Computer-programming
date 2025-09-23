#include "name_length.h"
int name_length(const char* name) {
    int len = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] != ' ') len++;
    }
    return len;
}
