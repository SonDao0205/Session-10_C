#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap hang m : ");
    scanf("%d",&m);
    printf("Nhap cot n : ");
    scanf("%d", &n);
    int arr[m][n];
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }   
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[0][i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[m-1][i];
        
    }
    for (int i = 0; i < m; i++)
    {
        sum += arr[i][0];
    }
    for (int i = 0; i < m ; i++)
    {
        sum += arr[i][n-1];
    }
    printf("\nTong cac phan tu tren duong bien = %d",sum);
}
