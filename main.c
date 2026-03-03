/*
Write a C lang Function  to print
the Characters  Five Times larger
than their real size i.e printx()
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define newline printf("\n");

int con(int x, int y, const char *c) {
    // Use ANSI escape code to set cursor position (row y, column x)
    // \033[ is the CSI (Control Sequence Introducer)
    // %d;%dH is the CUP (Cursor Position) command
    // %s is the string to print
    // fflush(stdout) is needed to ensure the output is written immediately
    // equivalent to Python's flush=True
    int printed_chars = printf("\033[%d;%dH%s", y, x, c);
    fflush(stdout);
    return printed_chars;
}

int A(int x, int y) {
    con(x, y + 1, " ## ");
    con(x, y + 2, "#  #");
    con(x, y + 3, "####");
    con(x, y + 4, "#  #");
    con(x, y + 5, "#  #");
    return 0;
}

int B(int x, int y) {
    con(x, y + 1, "### ");
    con(x, y + 2, "#  #");
    con(x, y + 3, "####");
    con(x, y + 4, "#  #");
    con(x, y + 5, "####");
    return 0;
}

int C(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "#   ");
    con(x, y + 3, "#   ");
    con(x, y + 4, "#   ");
    con(x, y + 5, "####");
    return 0;
}

int D(int x, int y) {
    con(x, y + 1, "### ");
    con(x, y + 2, "#  #");
    con(x, y + 3, "#  #");
    con(x, y + 4, "#  #");
    con(x, y + 5, "###");
    return 0;
}

int E(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "#   ");
    con(x, y + 3, "####");
    con(x, y + 4, "#   ");
    con(x, y + 5, "####");
    return 0;
}

int F(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "#   ");
    con(x, y + 3, "####");
    con(x, y + 4, "#   ");
    con(x, y + 5, "#   ");
    return 0;
}

int G(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "#   ");
    con(x, y + 3, "# ##");
    con(x, y + 4, "#  #");
    con(x, y + 5, "####");
    return 0;
}

int H(int x, int y) {
    con(x, y + 1, "#  #");
    con(x, y + 2, "#  #");
    con(x, y + 3, "####");
    con(x, y + 4, "#  #");
    con(x, y + 5, "#  #");
    return 0;
}

int I(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, " ## ");
    con(x, y + 3, " ## ");
    con(x, y + 4, " ## ");
    con(x, y + 5, "####");
    return 0;
}

int J(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "  # ");
    con(x, y + 3, "  # ");
    con(x, y + 4, "# # ");
    con(x, y + 5, "### ");
    return 0;
}

int K(int x, int y) {
    con(x, y + 1, "#  #");
    con(x, y + 2, "# # ");
    con(x, y + 3, "##  ");
    con(x, y + 4, "# # ");
    con(x, y + 5, "#  #");
    return 0;
}

int L(int x, int y) {
    con(x, y + 1, "#   ");
    con(x, y + 2, "#   ");
    con(x, y + 3, "#   ");
    con(x, y + 4, "#   ");
    con(x, y + 5, "####");
    return 0;
}

int M(int x, int y) {
    con(x, y + 1, "#  #");
    con(x, y + 2, "####");
    con(x, y + 3, "####");
    con(x, y + 4, "#  #");
    con(x, y + 5, "#  #");
    return 0;
}

int N(int x, int y) {
    con(x, y + 1, "#  #");
    con(x, y + 2, "## #");
    con(x, y + 3, "## #");
    con(x, y + 4, "# ##");
    con(x, y + 5, "#  #");
    return 0;
}

int O(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "#  #");
    con(x, y + 3, "#  #");
    con(x, y + 4, "#  #");
    con(x, y + 5, "####");
    return 0;
}

int P(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "#  #");
    con(x, y + 3, "####");
    con(x, y + 4, "#   ");
    con(x, y + 5, "#   ");
    return 0;
}

int Q(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "#  #");
    con(x, y + 3, "#  #");
    con(x, y + 4, "# ##");
    con(x, y + 5, "####");
    return 0;
}

int R(int x, int y) {
    con(x, y + 1, "### ");
    con(x, y + 2, "#  #");
    con(x, y + 3, "####");
    con(x, y + 4, "# # ");
    con(x, y + 5, "#  #");
    return 0;
}

int S(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "#   ");
    con(x, y + 3, "####");
    con(x, y + 4, "   #");
    con(x, y + 5, "####");
    return 0;
}

int T(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, " ## ");
    con(x, y + 3, " ## ");
    con(x, y + 4, " ## ");
    con(x, y + 5, " ## ");
    return 0;
}


int U(int x, int y) {
    con(x, y + 1, "#  #");
    con(x, y + 2, "#  #");
    con(x, y + 3, "#  #");
    con(x, y + 4, "#  #");
    con(x, y + 5, "####");
    return 0;
}

int V(int x, int y) {
    con(x, y + 1, "#  #");
    con(x, y + 2, "#  #");
    con(x, y + 3, "#  #");
    con(x, y + 4, "#  #");
    con(x, y + 5, " ## ");
    return 0;
}

int W(int x, int y) {
    con(x, y + 1, "#  #");
    con(x, y + 2, "#  #");
    con(x, y + 3, "####");
    con(x, y + 4, "####");
    con(x, y + 5, "#  #");
    return 0;
}

int X(int x, int y) {
    con(x, y + 1, "#  #");
    con(x, y + 2, "#  # ");
    con(x, y + 3, " ## ");
    con(x, y + 4, "#  #");
    con(x, y + 5, "#  #");
    return 0;
}

int Y(int x, int y) {
    con(x, y + 1, "#  #");
    con(x, y + 2, "#  # ");
    con(x, y + 3, " ## ");
    con(x, y + 4, " ## ");
    con(x, y + 5, " ## ");
    return 0;
}

int Z(int x, int y) {
    con(x, y + 1, "####");
    con(x, y + 2, "   #");
    con(x, y + 3, " ## ");
    con(x, y + 4, "#   ");
    con(x, y + 5, "####");
    return 0;
}

int printx(const char *str) {
    int x = 1;
    int y = 0;
    int chars = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (chars == 7) {
            chars = 0;
            x = 1;
            y += 6;
        }

        switch (str[i]) {
            case 'A': A(x, y); break;
            case 'B': B(x, y); break;
            case 'C': C(x, y); break;
            case 'D': D(x, y); break;
            case 'E': E(x, y); break;
            case 'F': F(x, y); break;
            case 'G': G(x, y); break;
            case 'H': H(x, y); break;
            case 'I': I(x, y); break;
            case 'J': J(x, y); break;
            case 'K': K(x, y); break;
            case 'L': L(x, y); break;
            case 'M': M(x, y); break;
            case 'N': N(x, y); break;
            case 'O': O(x, y); break;
            case 'P': P(x, y); break;
            case 'Q': Q(x, y); break;
            case 'R': R(x, y); break;
            case 'S': S(x, y); break;
            case 'T': T(x, y); break;
            case 'U': U(x, y); break;
            case 'V': V(x, y); break;
            case 'W': W(x, y); break;
            case 'X': X(x, y); break;
            case 'Y': Y(x, y); break;
            case 'Z': Z(x, y); break;
            case ' ':
                break;
            default:
                //Pass
                break;
        }

        x += 5;
        chars += 1;
        
        printf("\n");
        fflush(stdout);
    }
    return 0;
}

int print(char str[]) {
    printf("%s",str);
    fflush(stdout);
    return 0;
}

int main() {
    newline
    printx("HELLO  WORLD");
    newline
    print ("HELLO  WORLD");
    newline
    printf("HELLO  WORLD");
    newline
    return 0;
}
/*
Created By:   Syed EBTISAM Ali .
Date:         9 May 2025       .
Project Name: Print X 2025     .
*/
/*
Example Output:
#  # #### #    #    ####
#  # #    #    #    #  #
#### #### #    #    #  #
#  # #    #    #    #  #
#  # #### #### #### ####

#  # #### ###  #    ###
#  # #  # #  # #    #  #
#### #  # #### #    #  #
#### #  # # #  #    #  #
#  # #### #  # #### ###

HELLO  WORLD
HELLO  WORLD

*/
