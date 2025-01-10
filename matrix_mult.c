#include <stdio.h>
int mat_mul(int row1,int col1,int row2,int col2,int mat1[row1][col1],int mat2[row2][col2])
{
    int mat3[row1][col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            mat3[i][j]=0;
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int k=0;k<col1;k++){
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            printf("%d  ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int row1,col1,row2,col2;
    scanf("%d %d",&row1,&col1);
    scanf("%d %d",&row2,&col2);
    int mat1[row1][col1],mat2[row2][col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            scanf("%d",&mat2[i][j]);
        }
    }
    if(col1==row2){
        mat_mul(row1,col1,row2,col2,mat1,mat2);
    }

    return 0;
}
