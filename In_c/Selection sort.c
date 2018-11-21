#include<stdio.h>
void swap(int*,int*);
int main(){
    int n,arr[100],i,j,pos;
    printf("Enter size of your array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++){
        pos=i;
        for(j=i+1;j<n;j++)
            if(arr[pos]>arr[j])
                pos=j;
        swap(&arr[i],&arr[pos]);
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
