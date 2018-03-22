#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int W; 
    int H; 
    scanf("%d%d", &W, &H);
    int N; 
    scanf("%d", &N);
    int X0;
    int Y0;
    scanf("%d%d", &X0, &Y0);
    int X = X0;
    int Y = Y0;
    char *dir;
    int L= 0;
    int R= W + 1;
    int D= H + 1;
    int U= 0;

    while (1) {
        char bombDir[4]; 
        scanf("%s", bombDir);
        
        dir = bombDir;
        while(*dir != '\0'){
            
            if(*dir == 'D'){
                U = Y + 1;
                Y += (D - Y) / 2;
                
                }
            else if(*dir == 'U')
            {
                D = Y;
                Y -= (Y - U) / 2 + 1;
                }
            else if(*dir == 'R')
            {
                L = X + 1;
                X +=(R - X) / 2;
                
                }
            else if(*dir == 'L')
            {
                R = X;
                X -= (X - L) / 2 + 1;
                
                
                }
                dir++;
            
            }

        printf("%d %d\n", X, Y);
    }

    return 0;
}