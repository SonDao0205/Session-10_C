#include<stdio.h>
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Cac phan tu tu cuoi den dau la : \n");
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 2; j >= 0; j--)
        {
            printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
        }
        
    }
    
}