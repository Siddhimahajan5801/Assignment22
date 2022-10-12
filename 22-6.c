#include<stdio.h>
#include<stdlib.h>

int main (){
    int *ptr,n,num,i,max;

    printf("Enter the number of data values : \n");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL){
        printf("Memory Allocation Failed");
        return 0;
    }

    printf("Enter the data values : \n");

    for (i=0; i<n; i++){
        scanf("%d", &num);

        ptr[i]=num;
    }
       max=ptr[0];
    for (i=1; i<n; i++){

        max=max>ptr[i]? max : ptr[i];
    }
    printf("\nThe largest element is : %d\n ", max);

    free(ptr);

    return 0;
}
