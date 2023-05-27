#include <stdio.h>

int max(int[]);

int main() {
    int a[4];
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    int ans = max(a);
    printf("%d", ans);
    
    return 0;
}

int max(int a[]){
    int max = a[0];
    for (int i = 1; i < 4; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}
