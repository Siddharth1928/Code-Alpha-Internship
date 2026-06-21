#include<stdio.h>
int main (){
    int m,n;
    printf("enter row and column  of matrix : ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter element [%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix  \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<m;i++){
        for(int j=i;j<n;j++){
         int temp= arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp;
        }
    }
    printf("tranpose of array  \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}