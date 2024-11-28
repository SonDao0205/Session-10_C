#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap so hang : ");
    scanf("%d", &m);
    printf("Nhap so cot : ");
    scanf("%d", &n);
    int arr[m][n];
    int i,j,sum;
    printf("Nhap phan tu vao cac mang : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }   
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    i = 0;
    j = n-1;
    printf("Cac phan tu tren duong cheo phu cua ma tran la : \n");
    for (int n = 0; n < 4; n++)
    {
        printf("%d\t",arr[i][j]);
        sum += arr[i][j];
        i++;
        j--;
    }
    printf("\nTong cua cac phan tu tren duong cheo phu cua ma tran la : %d",sum);
}