#include<stdio.h>
#include<stdlib.h>

int main (){
    int *ptr,n,i;

    printf("Enter the number of data values : \n");
    scanf("%d", &n);

    ptr = (int*) malloc(n*sizeof(int));

    if (ptr == NULL){
        printf("Memory Allocation Failed");
        return 0;
    }

    printf("Enter the data values : \n");

    for (i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    printf("The Data values are : \n");
     for (i=0; i<n; i++){
           printf("%d  ",ptr[i]);
     }

     free(ptr);

      return 0;
}
