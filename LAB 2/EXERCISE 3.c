#include <stdio.h>

int main() {
    const char *string1 = "Hashaam";
    printf(string1);
    printf("\n");
    const char *string2 = "Hashaam";
    printf(string2);
    printf("\n");
    if (comparision(string1, string2)) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    return 0;
}
int comparision(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0;  //Not equal
        }
        str1++;
        str2++;
    }
    return (*str1 == '\0' && *str2 == '\0');
}

