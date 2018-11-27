#include<stdio.h>
int main(){
    int min=-1,i,size,a[100],a_sorted[100],position[100]={0};
    printf("\t\t\t***Counting sort***");
    printf("\nEnter last limit: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
        position[a[i]]++;
        if(min>a[i])
            min=a[i];
    }
    //Assuming maximum as 100
    for(i=1;i<size;i++)
        position[a[i]]=position[a[i]]+position[a[i-1]];
    for(i=size-1;i>=0;i--){
        a_sorted[position[a[i]]-1]=a[i];
        position[a[i]]--;
    }
    printf("New sorted array: ");
    for(i=0;i<size;i++)
        printf("%d ",a_sorted[i]);
}
