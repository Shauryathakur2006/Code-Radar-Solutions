#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

    printf("%d",&n);
    scanf("%d", &n);

    int arr[n];

    printf("n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("%d\n", evenCount);
    printf(" %d\n", oddCount);

    return 0;
}