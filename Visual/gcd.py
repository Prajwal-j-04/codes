def computeGCD(x, y): 
  
    if x > y: 
        small = y 
    else: 
        small = x 
    for i in range(1, small+1): 
        if((x % i == 0) and (y % i == 0)): 
            gcd = i 
              
    return gcd 
  
a = 48
b = 24
print ("The gcd of 48 and 24 is : ") 
print (computeGCD(48,24)) 