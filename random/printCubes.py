# Run this script and enter 3 numbers separated by space
# example input '5 5 5'
a,b,c=map(int,raw_input().split())
for i in range(b+c+1):print(' '*(c-i)+((' /|'[(i>c)+(i>0)]+'_'*4)*(a+1))[:-4]+('|'*(b+c-i))[:b]+'/')[:5*a+c+1]
