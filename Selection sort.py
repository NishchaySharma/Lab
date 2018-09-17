size=int(input('Enter the size of your array: '))
l=list(map(int,input('Enter your array: ').split()))
for i in range(size-1):
    pos=i
    for j in range(i+1,size):
        if l[pos]>l[j]:
            pos=j
    l[pos],l[i]=l[i],l[pos]
print('Sorted array: ',end='')
for i in l:
    print(i,end=' ')
