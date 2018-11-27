#include<stdio.h>
void selectionSort(int,int [],int [],float []);
float knapsack(int,int,int [],int [],float []);
int main(){
    int i,w,size,value[10],weight[10];
    float unit[10];
    printf("\t\t\t***Fractional Knapsack***\n");
    printf("Enter number of items: ");
    scanf("%d",&size);
    printf("Enter value and weight respectively: \n");
    for(i=0;i<size;i++)
        scanf("%d %d",&value[i],&weight[i]);
    printf("Enter capacity of bag: ");
    scanf("%d",&w);
    for(i=0;i<size;i++)
        unit[i]=((float)value[i]/weight[i]);
    printf("Total value in bag: %.4f",knapsack(size,w,value,weight,unit));
}
void selectionSort(int size,int value[],int weight[],float unit[]){
    int i,j,pos,tmp2,tmp3;
    float tmp1;
    for(i=0;i<size-1;i++){
        pos=i;
        for(j=i+1;j<size;j++)
            if(unit[pos]>unit[j])
                pos=j;
        tmp1=unit[pos];
        tmp2=value[pos];
        tmp3=weight[pos];
        unit[pos]=unit[i];
        value[pos]=value[i];
        weight[pos]=weight[i];
        unit[i]=tmp1;
        value[i]=tmp2;
        weight[i]=tmp3;
    }
}
float knapsack(int size,int w,int value[],int weight[],float unit[]){
    selectionSort(size,value,weight,unit);
    int i=size-1;
    float taken=0.0;
    while(w!=0 && i>=0){
        if(weight[i]<=w){
            w-=weight[i];
            taken+=unit[i]*weight[i];
            printf("%d kg with total value %.4f is taken in the bag.\n",weight[i],unit[i]*weight[i]);
        }
        else{
            printf("%d kg with total value %.4f is taken in the bag.\n",w,unit[i]*w);
            taken+=w*unit[i];
            w=0;
        }
        i-=1;
    }
    return taken;
}
