sbox = [
        [0,1,2,3,4,5,6,7,0,1,2,3,4,5,6,7],
        [0,2,4,6,8,10,12,14,8,9,10,11,12,13,14,15],
        [0,2,4,6,8,10,12,14,1,2,3,4,5,6,7,8],
        [1,3,5,7,9,11,13,15,1,3,5,7,9,11,13,15]
       ]
s = input("Enter Binary: ")
row, col = 2*int(s[0])+int(s[5]), 8*int(s[1])+4*int(s[2])+2*int(s[3])+int(s[4])
print(sbox[row][col])
