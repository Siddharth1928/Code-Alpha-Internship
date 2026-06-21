#include<stdio.h>
int main (){
    int m,n;
    printf("enter row and column  of matrix : ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter element [%d][%d] :",i,j);
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

      int o;
    printf("enter column  of matrix 2 : ");
    scanf("%d",&o);
    int brr[n][o];
    for(int i=0;i<n;i++){
        for(int j=0;j<o;j++){
            printf("enter element [%d][%d] :",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    printf("matrix 2 \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<o;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    int crr[m][o];
  for(int i=0;i<m;i++){
    for(int j=0;j<o;j++){
        crr[i][j]=0;
        for(int k=0;k<n;k++){
            crr[i][j]+=arr[i][k]*brr[k][j];
        }
    }
  }
    

  printf("multiplication of matrix 1 and matrix 2 \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }
return 0;  
}
