size=int(input('Enter size of your array: '))
l=list(map(int,input('Enter elements of your array: ').split()))
for i in range(1,size):
    tmp=l[i]
    j=i-1
    while l[j]>tmp and j>=0:
        l[j+1]=l[j]
        j-=1
    l[j+1]=tmp
print('Sorted array: ')
for i in l:
    print(i,end=' ')
