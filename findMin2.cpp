#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, min;
    // int arr[5] = {5,7,9,2,4};
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for (i = 0; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("min = %d\n", min);

    return 0;
}
