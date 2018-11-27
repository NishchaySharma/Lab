#include<stdio.h>
void buildHeap(int []);
void downAdjust(int [],int);
void main(){
    int heap[50],size,i,last,temp;
    // max size of array = 50
    printf("\t\t Heap sort\n");
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for(i=1;i<=size;i++)
        scanf("%d",&heap[i]);
    heap[0]=size;
    buildHeap(heap);
    while(heap[0] > 1){
        last=heap[0];
        temp=heap[1];
        heap[1]=heap[last];
        heap[last]=temp;
        heap[0]--;
        downAdjust(heap,1);
    }
    printf("After sorting: ");
    for(i=1;i<=size;i++)
        printf("%d ",heap[i]);
}
void buildHeap(int heap[]){
    int i,n;
    n=heap[0];
    for(i=n/2;i>=1;i--)
        downAdjust(heap,i);
}
void downAdjust(int heap[],int i){
    int j,temp,n,flag=1;
    n=heap[0];
    while(2*i<=n && flag==1){
        j=2*i;    //j points to left child
        if(j+1<=n && heap[j+1] > heap[j])
            j=j+1;
        if(heap[i] > heap[j])
            flag=0;
        else{
            temp=heap[i];
            heap[i]=heap[j];
            heap[j]=temp;
            i=j;
        }
    }
}
