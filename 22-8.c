#include <stdio.h>
int main (){
   int *ptr;

   ptr= (int*)malloc(sizeof(int));
   *ptr= 20;

   printf("Before free : %d\n", *ptr);

   free(ptr);
   printf("After free : %d\n", *ptr);

   return 0;
}
