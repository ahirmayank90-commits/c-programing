#include <stdio.h>

int main() {
    int arr[5];
    int *ptra=arr;
    printf("element of array : ");
    for(int i=0;i<5;i++){
        scanf("%d",ptra+i);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",ptra+i);
    }
    printf("array : ");
    for(int i=0;i<5;i++){
        printf("%d ",*(ptra+i));
    }

    return 0;
}