#include <string.h>
#include <stdbool.h>

bool isRotation(char *s1, char *s2) {
    if (strlen(s1) != strlen(s2)) return false;
    char temp[512];
    sprintf(temp, "%s%s", s1, s1);
    return strstr(temp, s2) != NULL;
}
