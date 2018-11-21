#include<stdio.h>
void swap(int*,int*);
int main(){
    int n,arr[100],i,j; //taking maximum size=100
    printf("Enter size of your array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n-1-i;j++)
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void swap(int *a,int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}
