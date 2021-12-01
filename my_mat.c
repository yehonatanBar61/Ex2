#include <stdio.h>

int There_is_route(int matrix[10][10], int source, int destenation)
{
    if(source !=  destenation){
        if(matrix[source][destenation] < 600){
            return 1;
        }
    }
    return 0;
}

int min(int x, int y){
    if(x<y)
        return x;
    return y;
}

int the_shortest(int matrix[10][10],int x,int y){
    if(x!=y){
        if(matrix[x][y] < 600){
            return matrix[x][y];
        }
    }
    return -1;
}

void change_values(int matrix[10][10]){
    for(int i=0;i<10; i++){
        for(int j=0;j<10;j++){
            scanf("%d",&matrix[i][j]);
        }  
    }

    for(int i = 0; i< 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (matrix[i][j] == 0 && i != j)
                matrix[i][j] = 999;
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
