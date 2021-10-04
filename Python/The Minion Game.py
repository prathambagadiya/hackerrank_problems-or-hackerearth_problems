def minion_game(string):
    c1 =0
    c2 =0
    n=len(string)
    for i in range(len(string)):
        if string[i]=='A' or string[i]=='E' or string[i]=='I' or string[i]=='O' or string[i]=='U':
            c1 = c1+ (n-i)
        else:
            c2 = c2 + (n-i)
    if c1 > c2 :
        print("Kevin",c1)
    elif c2> c1:
        print("Stuart",c2)
    else:
        print("Draw")
    # your code goes here
