#include<stdio.h>
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n,i,j,check = 0;
    printf("Nhap phan tu bat ki trong mang : ");
    scanf("%d",&n);
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (n == arr[i][j])
            {
                printf("Vi tri phan tu trong mang la arr[%d][%d]\n",i,j);
                check++;
            }
        }
    }
    if (check == 0)
    {
        printf("Phan tu khong ton tai trong mang\n");
    }
    
}