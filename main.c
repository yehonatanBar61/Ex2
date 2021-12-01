#include <stdio.h>
#include "my_mat.h"

int main(){
   char req;
   int matrix[10][10];
   scanf("%c", &req);
   while(req != 'D'){
     if(req == 'A'){
       change_values(matrix);
       scanf(" %c", &req);
     }
     if(req == 'B'){
         int x;
         int y;
        scanf("%d", &x);
        scanf("%d", &y);
       int temp = There_is_route(matrix,x,y);
      if(temp == 1){
         printf("%s", "True\n");
       }
       else{
         printf("%s", "False\n");
         
       }
       scanf(" %c", &req);
     }
     if(req == 'C'){
         int x;
         int y;
        scanf("%d", &x);
        scanf("%d", &y);
       int temp = the_shortest(matrix,x,y);
       printf("%d\n", temp);
       scanf(" %c", &req);
     }
   }
   return 1;
}
