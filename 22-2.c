#include<stdio.h>
#include<stdlib.h>

int main (){
    int *ptr,n,num,i;
    float avg,sum=0;

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
     for (i=0; i<n; i++){
           sum=sum+ptr[i];
     }
     avg=sum/n;
     printf("\nThe average of all the data values : %.2f\n", avg);

     free(ptr);

      return 0;
}
