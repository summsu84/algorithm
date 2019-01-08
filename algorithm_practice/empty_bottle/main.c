#include <stdio.h>
#include <stdlib.h>
void setEventResult(int inputDrink, int eventNumber);
int calculateEmptyBottleAndDrinkBottl(int * inputDrink, int * maxDrink);

int main() {

    // 음료수의 값을 입력 받는다.
    int inputDrink;

    scanf("%d", &inputDrink);

    // 1. 2번 이벤트 참여 한다.
    setEventResult(inputDrink, 2);

    return 0;
}
/**
 * Event 계산 로직
 * @param inputDrink
 * @return
 */
void setEventResult(int inputDrink, int eventNumber){

    // 최대 마신 음료수 개수
    int maxDrink = inputDrink;
    // 빈병
    int emptyDrink = 0;
    int i = 0;
    // 입력 값
    // int tmp = inputDrink;
    for (i = 0 ; i < eventNumber; i++)
    {

        emptyDrink += calculateEmptyBottleAndDrinkBottl(&inputDrink, &maxDrink);

        // printf("Empty %d, Input %d, Max %d\n", emptyDrink, inputDrink, maxDrink);
    }
    printf("%d %d", maxDrink, emptyDrink);

}

int calculateEmptyBottleAndDrinkBottl(int * inputDrink, int * maxDrink)
{
    // 이벤트 당 빈병 개수
    int emptyBottle = *inputDrink % 4;
    // 이벤트 당 받을 수 있는 음료병 개수
    int avaiableDrink = *inputDrink / 4;
    // 최대 마실 수 있는 음료병에 이벤트 당 받을 수 있는 음료병 개수를 더 한다.
    *maxDrink += avaiableDrink;
    // 그리고 다음 이벤트에 참가할 수 있는 새롭게 받은 병을 정의 한다.
    *inputDrink = *inputDrink / 4;

    return emptyBottle;
}