#include<stdio.h>
int main() {
    int a, i;
    printf("enter the number of pocket");
    scanf("%d",&a);
    int arr[a];
    printf("Enter any  array number: ");
    for (i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nAll Even Array number:\n");
    for (i = 0; i < a; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d\n ", arr[i]);
        }
    }
    return 0;
}
