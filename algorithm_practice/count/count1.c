/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int direction = 0;          // false -> down, true -> up 
    int move = 0;               // 0 -> no move, 1 -> move
    int firstNumber = 1;
    int lastNumber = 1;
    int pointNumber = 0;        
    int idx = 1;

    // pointNumber에 지정된 첫번째와 두번째 수를 출력한다.    
    scanf("%d", &pointNumber);

    while(idx < pointNumber){
        // 첫번째 수가 1 이고, move 가 0, 두번째 수를 증가 시켜준다.
        // 
        if(firstNumber == 1 && move == 0)
        {
            lastNumber++;
            direction = 0;
            move = 1;
            idx++;
            continue;
        }
        // 두번째 수가 1이 오게 되면, 첫번째 수를 증가 시켜 준다.
        else if(lastNumber == 1 && move == 0)
        {
            //첫번째 수를 증가 시킨다.
            firstNumber++;
            direction = 1;
            move = 1;
            idx++;
            continue;
        }
        if(move == 1){
            if(direction == 0){
                firstNumber++;
                lastNumber--;
                if(lastNumber == 1) move = 0;
            }else if(direction == 1) {
                firstNumber--;
                lastNumber++;
                if(firstNumber == 1) move = 0;
            }
        }
        idx++;
    }
    printf("%d IS %d/%d", idx, firstNumber, lastNumber);
    

    return 0;
}
