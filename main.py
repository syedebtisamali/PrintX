'''
Write a python program to print
the Characters Five Times larger
than their size.
'''
def con(x, y, c):
    print(f"\033[{y};{x}H{c}", end='', flush=True)
def A(x, y):
    con(x, y + 1, " ## ")
    con(x, y + 2, "#  #")
    con(x, y + 3, "####")
    con(x, y + 4, "#  #")
    con(x, y + 5, "#  #")
def B(x, y):
    con(x, y + 1, "### ")
    con(x, y + 2, "#  #")
    con(x, y + 3, "####")
    con(x, y + 4, "#  #")
    con(x, y + 5, "####")
def C(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "#   ")
    con(x, y + 3, "#   ")
    con(x, y + 4, "#   ")
    con(x, y + 5, "####")
def D(x, y):
    con(x, y + 1, "### ")
    con(x, y + 2, "#  #")
    con(x, y + 3, "#  #")
    con(x, y + 4, "#  #")
    con(x, y + 5, "###")
def E(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "#   ")
    con(x, y + 3, "####")
    con(x, y + 4, "#   ")
    con(x, y + 5, "####")
def F(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "#   ")
    con(x, y + 3, "####")
    con(x, y + 4, "#   ")
    con(x, y + 5, "#   ")
def G(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "#   ")
    con(x, y + 3, "# ##")
    con(x, y + 4, "#  #")
    con(x, y + 5, "####")
def H(x, y):
    con(x, y + 1, "#  #")
    con(x, y + 2, "#  #")
    con(x, y + 3, "####")
    con(x, y + 4, "#  #")
    con(x, y + 5, "#  #")
def I(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, " ## ")
    con(x, y + 3, " ## ")
    con(x, y + 4, " ## ")
    con(x, y + 5, "####")
def J(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "  # ")
    con(x, y + 3, "  # ")
    con(x, y + 4, "# # ")
    con(x, y + 5, "### ")
def K(x, y):
    con(x, y + 1, "#  #")
    con(x, y + 2, "# # ")
    con(x, y + 3, "##  ")
    con(x, y + 4, "# # ")
    con(x, y + 5, "#  #")
def L(x, y):
    con(x, y + 1, "#   ")
    con(x, y + 2, "#   ")
    con(x, y + 3, "#   ")
    con(x, y + 4, "#   ")
    con(x, y + 5, "####")
def M(x, y):
    con(x, y + 1, "#  #")
    con(x, y + 2, "####")
    con(x, y + 3, "####")
    con(x, y + 4, "#  #")
    con(x, y + 5, "#  #")
def N(x, y):
    con(x, y + 1, "#  #")
    con(x, y + 2, "## #")
    con(x, y + 3, "## #")
    con(x, y + 4, "# ##")
    con(x, y + 5, "#  #")
def O(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "#  #")
    con(x, y + 3, "#  #")
    con(x, y + 4, "#  #")
    con(x, y + 5, "####")
def P(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "#  #")
    con(x, y + 3, "####")
    con(x, y + 4, "#   ")
    con(x, y + 5, "#   ")
def Q(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "#  #")
    con(x, y + 3, "#  #")
    con(x, y + 4, "# ##")
    con(x, y + 5, "####")
def R(x, y):
    con(x, y + 1, "### ")
    con(x, y + 2, "#  #")
    con(x, y + 3, "####")
    con(x, y + 4, "# # ")
    con(x, y + 5, "#  #")
def S(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "#   ")
    con(x, y + 3, "####")
    con(x, y + 4, "   #")
    con(x, y + 5, "####")
def T(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, " ## ")
    con(x, y + 3, " ## ")
    con(x, y + 4, " ## ")
    con(x, y + 5, " ## ")
def U(x, y):
    con(x, y + 1, "#  #")
    con(x, y + 2, "#  #")
    con(x, y + 3, "#  #")
    con(x, y + 4, "#  #")
    con(x, y + 5, "####")
def V(x, y):
    con(x, y + 1, "#  #")
    con(x, y + 2, "#  #")
    con(x, y + 3, "#  #")
    con(x, y + 4, "#  #")
    con(x, y + 5, " ## ")
def W(x, y):
    con(x, y + 1, "#  #")
    con(x, y + 2, "#  #")
    con(x, y + 3, "####")
    con(x, y + 4, "####")
    con(x, y + 5, "#  #")
def X(x, y):
    con(x, y + 1, "#  #")
    con(x, y + 2, "#  # ")
    con(x, y + 3, " ## ")
    con(x, y + 4, "#  #")
    con(x, y + 5, "#  #")
def Y(x, y):
    con(x, y + 1, "#  #")
    con(x, y + 2, "#  # ")
    con(x, y + 3, " ## ")
    con(x, y + 4, " ## ")
    con(x, y + 5, " ## ")
def Z(x, y):
    con(x, y + 1, "####")
    con(x, y + 2, "   #")
    con(x, y + 3, " ## ")
    con(x, y + 4, "#   ")
    con(x, y + 5, "####")
def printx(str):
    x = 1
    y = 0
    chars = 0
    for i in range(len(str)):
        if chars == 7:
            chars = 0
            x = 1
            y += 6
        if str[i] == 'A':
            A(x, y)
        elif str[i] == 'B':
            B(x, y)
        elif str[i] == 'C':
            C(x, y)
        elif str[i] == 'D':
            D(x, y)
        elif str[i] == 'E':
            E(x, y)
        elif str[i] == 'F':
            F(x, y)
        elif str[i] == 'G':
            G(x, y)
        elif str[i] == 'H':
            H(x, y)
        elif str[i] == 'I':
            I(x, y)
        elif str[i] == 'J':
            J(x, y)
        elif str[i] == 'K':
            K(x, y)
        elif str[i] == 'L':
            L(x, y)
        elif str[i] == 'M':
            M(x, y)
        elif str[i] == 'N':
            N(x, y)
        elif str[i] == 'O':
            O(x, y)
        elif str[i] == 'P':
            P(x, y)
        elif str[i] == 'Q':
            Q(x, y)
        elif str[i] == 'R':
            R(x, y)
        elif str[i] == 'S':
            S(x, y)
        elif str[i] == 'T':
            T(x, y)
        elif str[i] == 'U':
            U(x, y)
        elif str[i] == 'V':
            V(x, y)
        elif str[i] == 'W':
            W(x, y)
        elif str[i] == 'X':
            X(x, y)
        elif str[i] == 'Y':
            Y(x, y)
        elif str[i] == 'Z':
            Z(x, y)
        x += 5
        chars += 1
        print("")

printx("HELLO  WORLD")
print("\n HELLO  WORLD")
    
