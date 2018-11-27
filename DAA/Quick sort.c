#include<stdio.h>
void swap(int*,int*);
void quickSort(int[],int,int);
int partition(int[],int,int);
int main(){
    int arr[100],size,i;
    printf("\t\t\tQuick Sort\n");
    printf("Enter size of your array: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    quickSort(arr,0,size-1);
    printf("Sorted array: ");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int partition(int arr[],int start,int end){
    int x=arr[end],i=start-1,j;
    for(j=start;j<end;j++)
        if(arr[j]<=x)
            swap(&arr[++i],&arr[j]);
    swap(&arr[i+1],&arr[end]);
    return i+1;
}
void quickSort(int arr[],int start,int end){
    if(start<end){
        int pivot=partition(arr,start,end);
        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot+1,end);
    }
}
