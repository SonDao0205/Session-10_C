#include<stdio.h>
int main(){
    int m,n;
    printf("Nhap so hang : ");
    scanf("%d", &m);
    printf("Nhap so cot : ");
    scanf("%d", &n);
    int array[m][n];
    printf("Nhap phan tu vao cac mang : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("array[%d][%d] = ",i,j);
            scanf("%d",&array[i][j]);
        }   
    }
    int max = array[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < array[i][j])
            {
                max = array[i][j];
            } 
        }  
    }
    printf("\n%d\n",max);
}