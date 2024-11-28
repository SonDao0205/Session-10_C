#include<stdio.h>
int main(){
    int n,maxCount,count,maxEle;
    printf("Nhap so phan tu cua mang : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }     
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxEle = arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat trong mang la : %d\n",maxEle);
    
    
}