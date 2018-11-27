#include<stdio.h>
int main(){
    int arr[100],n,i,j,key;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=1;i<n;i++){
        j=i-1;
        key=arr[i];
        while(j>=0 && key <arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    printf("After sorting: ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
}
