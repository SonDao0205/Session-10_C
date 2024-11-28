#include<stdio.h>
int main(){
    int n;
    printf("Nhap 1 so nguyen : ");
    scanf("%d",&n);
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = n;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}