#include<stdio.h>
int main() {
    int a, i,p;
    printf("enter the number of pocket");
    scanf("%d",&a);
    int arr[a];
    printf("Enter any  array number: ");
    for (i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    {
    printf("enter the position:\n");
    scanf("%d",&p);
    printf("the value is%d\n",arr[p]);
    }
}
