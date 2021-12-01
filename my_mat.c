#include <stdio.h>

int There_is_route(int matrix[4][4], int source, int destenation)
{
    if(matrix[source][destenation] >= 1)
        return 1;
    matrix[destenation][source] = -1;
    for(int i = 0; i<4; i++){
        if(matrix[i][destenation] > 0){
            int temp  = i;
            matrix[destenation][i] = -1;
            return There_is_route(matrix, source, temp);
        }
    }
    return 0;
}

int min(int x, int y){
    if(x<y)
        return x;
    return y;
}

void the_shortest(int matrix[10][10])
{
    for(int i = 0; i< 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matrix[i][j] == 0 && i != j)
                matrix[i][j] = 99999;
        }
    }
    for(int k = 0; k<10; k++){
        for(int i = 0; i< 10; i++){
            for(int j = 0; j< 10; j++){
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }
}

void change_values(int matrix[10][10]){
    for(int i=0;i<10; i++){
        for(int j=0;j<10;j++){
            printf("ENTER VALUE IN ARRAY PLACE: %d %d \n",i,j);
            scanf("%d",&matrix[i][j]);
        }  
    }
}
