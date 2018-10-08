t=int(input())
for i in range(t):
    n=int(input())
    tmp = n
    count=0
    while(tmp>0):
        tmp//=2
        count += 1
    index = n-(2**(count-1)-1)
    numOut=1
    #for j in range(index-1):
    #    numOut +=2 
    numOut += 2*(index-1)
    print(numOut)
