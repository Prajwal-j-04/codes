a = input ('Value of a is= \n')
b = input ('Value of b is= \n')
c = input ('Value of c is= \n')
n = input ('Value of n is= \n')


if __name__=="__main__":
    def check_fermat(a, b, c, n):
    if n == 2:
        return 'Pythagoras got that one already.'
    elif a**n + b**n == c**n:
        return 'Holy Smokes, Fermat was Wrong!'
    return "No, that doesn't work."

 # print check_fermat(a, b, c, n)