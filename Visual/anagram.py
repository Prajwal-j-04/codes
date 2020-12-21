def check(s1, s2, s3, s4): 
        
    if(sorted(s1) == sorted(s2)): 
        print("Given strings are Anagrams.")  
    else: 
        print("Given strings are not Anagrams.") 

    if(sorted(s3) == sorted(s4)): 
        print("Given strings are Anagrams.")  
    else: 
        print("Given strings are not Anagrams.") 




s1 ="listen"
s2 ="silent" 
s3 ="python"
s4 ="java"
check(s1, s2, s3, s4)