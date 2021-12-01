#include <stdio.h>
#include <my.mat.h>


int main(){
    char choch;
    int matrix[10][10];
    int matrix2[10][10];
    change_values(matrix);
    for(int i = 0; i< 10; i++){
            for(int j = 0; j< 10; j++){
                matrix2[i][j] = matrix[i][j];
            }
    }
    the_shortest(matrix2);
    printf("enter value to start\n");
    scanf("%c",&choch);
    while (choch !='D')
    {
        if(choch=='A'){
           change_values(matrix);
            for(int i = 0; i< 10; i++){
                for(int j = 0; j< 10; j++){
                    matrix2[i][j] = matrix[i][j];
                }
            }
           the_shortest(matrix2);  
           printf("enter value to start\n");
        }
        if(choch=='B'){
            printf("enter two dots\n");
           int i,j;
           printf("one:\n");
           scanf("%d",&i);
           printf("tow:\n");
           scanf("%d",&j);
           printf("enter value to start\n");
           if(matrix2[i][j] > 0)
                printf("true");
            else
                printf("false");
           
        }
        if (choch=='c')
        {
           printf("enter two dots\n");
           int i,j;
           printf("one:\n");
           scanf("%d",&i);
           printf("tow:\n");
           scanf("%d",&j);
           printf("enter value to start\n");
           if(matrix2[i][j] > 0)
                printf(matrix2[i][j]);
            else
                printf(-1);
        }
        scanf("%c",&choch);
    }
}


