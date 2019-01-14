/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a, b, c, d, s;
    int distNikky, distBobby;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &s);
    
    int nikkyNumber = a + b;
    int bobbyNumber = c + d;
    
    // 배수를 구한다.
    distNikky = (s / nikkyNumber) * (a - b);
    distBobby = (s / bobbyNumber) * (c - d);
    // printf("distNikky: %d, distBobby: %d", distNikky, distBobby);
    // 나머지를 구하여, 전진 했는지 후진 했는지 확인 한다.
    if((s % nikkyNumber) != 0){
        if((s % nikkyNumber) <= a)
        {
            distNikky += (s % nikkyNumber);
        }else
        {
            distNikky -= ((s % nikkyNumber) - a);
        }
    }
    
    if((s % bobbyNumber) != 0){
        if((s % bobbyNumber) <= c)
        {
            distBobby += (s % bobbyNumber);
        }else
        {
            distBobby -= ((s % bobbyNumber) - c);
        }
    }
    //printf("distNikky: %d, distBobby: %d", distNikky, distBobby);
    if(distBobby == distNikky)
    {
        printf("Tied\n");
    }else if(distBobby > distNikky)
    {
        printf("Byron\n");
    }else
    {
        printf("Nikky\n");
    }
    
    return 0;
}
