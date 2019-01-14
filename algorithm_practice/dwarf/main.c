#include <stdio.h>

/**
 * Dwarf
 * @return
 */
int main() {

    // 9명의 난쟁이
    int intNineDwarf[9] = {0};
    int intSevenDwarf[7];
    int sum = 0;
    int i;
    int idx = 0;
   //memeset(intNineDwarf, 0x00, sizeof(intNineDwarf));

    for(i = 0; i < 9 ; i++)
    {
        scanf("%d", &intNineDwarf[i]);
    }

    // 7명의 난쟁이를 구분한다.
    sum = intNineDwarf[0];
    for(i = 1 ; i < 9 ; i++)
    {
        int tmp = sum + intNineDwarf[i];
        if(tmp > 100)
        {
            continue;
        }
        sum += intNineDwarf[i];
        intSevenDwarf[idx] = intNineDwarf[i];
        idx++;
    }


    printf("sum : %d", sum);
    return 0;
}