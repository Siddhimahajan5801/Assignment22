#include<stdio.h>
#include<stdlib.h>

int main (){
    int *ptr,n,num,i,sum=0;

    printf("Enter the number of data values : \n");
    scanf("%d", &n);

    ptr = (int*) malloc(n*sizeof(int));

    if (ptr == NULL){
        printf("Memory Allocation Failed");
        return 0;
    }

    printf("Enter the data values : \n");

    for (i=0; i<n; i++){
        scanf("%d", &num);

        ptr[i]=num;
    }

    printf("\nThe sum of all the data values :\n\n");
     for (i=0; i<n; i++){
           sum=sum+ptr[i];

           if (i!=n-1)
           printf("%d + ",ptr[i]);

           else printf("%d ", ptr[i]);

     }
     printf("= %d\n",sum);

     free(ptr);

      return 0;
}
