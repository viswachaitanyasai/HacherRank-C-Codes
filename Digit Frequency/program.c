#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    int count[57] = {0};
    gets(s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            count[s[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++) {
    printf("%d ",count[i]);
    }
    return 0;
}
