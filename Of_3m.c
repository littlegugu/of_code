#include <stdio.h>

int findMatrix(int *matrix,int rows,int cols,int number){
    int find = 1;
    if(matrix!=NULL && rows>0 && cols>0){
        int row = 0;
        int col = cols - 1;
        while(row>=0 && col>=0){
            if(matrix[col*rows+row]==number){
                find = 0;
                break;
            }else if(matrix[col*rows+row]>number){
                col--;
            }else{
                row++;
            }
        }
    }

    return find;
}

main(int argc, char const *argv[])
{
    int matrix[]={1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15};
    int number = 7;
    printf("%d\n",findMatrix(matrix,4,4,number));
    getchar();
    return 0;
}
