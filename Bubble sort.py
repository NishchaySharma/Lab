size=int(input('Enter the size of your array: '))
l=list(map(int,input('Enter your array: ').split()))
for i in range(size):
    for j in range(size-i-1):
        if l[j]>l[j+1]:
            l[j],l[j+1]=l[j+1],l[j]
print('Sorted array: ',end='')
for i in l:
    print(i,end=' ')
