# Smallest Multiple of a set of numbers
#series = [1,2,3,4,5,6,7,8,9,10]

import math

#Global Variables  
pn = int(math.floor(2 * 10 * math.log(10)))
arr = {i:True for i in range(2,pn)}
print(arr)
 
#Functions
def getPrimes(arr): #returns all True value items i.e. all primes
    return {k:v for k,v in arr.items() if v}
def setFalse(x, pn): #itr through all multiples of x and set value to False
    global arr
    i = 1
    while (i*x <= pn):
        arr[i*x] = False
        i += 1
def delNonPrime(x, pn): #itr through all multiples of x and delets value
    global arr
    i = 1
    while (i*x <= pn):
        del arr[i*x]
        i += 1
def isPrime(a):#checks if Value is Prime or not.
    x = True
    for i in (2, a):
        if a%i == 0:
            return False
        else:
            x = True
    return True

#Main Function
for i in arr:
    if arr[i] == False:#if confirmed not Prime skip
        continue
    if isPrime(arr[i]):#Check if Prime, set multiples to false
        setFalse(arr[i], pn)
    elif not isPrime(arr[i]):#Catch Fn, if not Prime and True, set False
        arr[i] = False
    print(arr)

arr = getPrimes(arr)

print(arr)
