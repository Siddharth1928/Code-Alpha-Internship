#include<stdio.h>
int main(){
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
    printf("matrix 1 \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    int brr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter element [%d][%d] : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    printf("matrix 2 \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        arr[i][j]+=brr[i][j];
    }
}


printf("sum of matrix 1 and matrix 2\n");
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}

return 0 ;
}