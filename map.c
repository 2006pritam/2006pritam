#include <stdio.h>
 
int main()
{
    int a = 10, b = 0, c = 10;
 
    // The encoded string after removing first 31 characters
    // Its individual characters determine how many spaces
    // or exclamation marks to draw consecutively.
    char* str = "TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq "
                "TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBL"
                "OFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm "
                "SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
 
    while (a != 0)
    {
        a = str[b++];
        while (a-- > 64)
        {
            if (++c == 90)
            {

                c = 10;
 
                putchar('\n');
            }
            else
            {

                if (b % 2 == 0)
                    putchar('!');
                else
                    putchar(' ');
            }
        }
    }
 
    return 0;
}
