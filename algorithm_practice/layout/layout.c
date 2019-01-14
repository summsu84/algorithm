#include <stdio.h>
#define MAX 100
void performLayout(int maxWidth, int * curWidthPoint, int * curHeightPoint, int * maxWidthPoint, int * prevHeightPoint, int inputWidth, int inputHeight);

int main()
{
    int maxWidth;               // 최대 너비
    int inputBoxWidth[MAX];     // 입력 너비 배열
    int inputBoxHeight[MAX];    // 입력 높이 배열
    int idx = 0;                // 입력 인덱스
    int currentWidthPoint = 0;  // 현재, 윈도 내의 너비 포인트 위치
    int currentHeightPoint = 0; // 현재, 윈도 내의 높이 포인트 위치 
    int prevHeightPoint = 0;     // 이전 높이 포인트
    int maxWidthPoint = 0;      // 최대 너비 포인트
    scanf("%d", & maxWidth);
    while(1)
    {
        scanf("%d %d", &inputBoxWidth[idx], &inputBoxHeight[idx]);
        if(inputBoxWidth[idx] == -1 && inputBoxHeight[idx] == -1)
        {
            
            break;
        }
        idx++;
    }
    int i;
    for(i = 0 ; i < idx ; i++)
    {
        performLayout(maxWidth,&currentWidthPoint, &currentHeightPoint, &maxWidthPoint, &prevHeightPoint, inputBoxWidth[i], inputBoxHeight[i]);
    }
    printf("%d x %d\n", maxWidthPoint, currentHeightPoint);
    
    return 0;
}

/**
 * DESC: 가구를 배치한다. 
 * curWidth: 공간의 현재 Width Point
 * curHeight: 공간의현재 Height Point
**/
void performLayout(int maxWidth, int * curWidthPoint, int * curHeightPoint, int * maxWidthPoint, int * prevHeightPoint, int inputWidth, int inputHeight)
{
   // 현재 너비 포인트에 신규 너비를 더하여 계산한다.
   int tmpWidhtPoint = *curWidthPoint + inputWidth;
   // 기존 현재 포인트와, 새로 들어오는 포인트의 합이 Max 보다 적은 경우, 적재한다.
   if(tmpWidhtPoint <= maxWidth)
   {
       
       *curWidthPoint = tmpWidhtPoint;      //현재 너비 포인트를 재지정 한다.
       
       // 최대 너비 포인트를 계산한다.
       if(*maxWidthPoint < *curWidthPoint){
         *maxWidthPoint = *curWidthPoint;
       }
       // 새로 적재 한 상자의 Height를 체크 한다.
       // 같은 행일 경우, 이전에 적재했던 높이 값을 비교 한다.
       // printf("maxHeightPoint : %d, inputHeight: %d, currentHeightPoitn : %d\n", *maxHeightPoint, inputHeight, *curHeightPoint);
       // 같은 행일 경우, 이전에 적재 했던 높이 값을 비교하여,
       // 새로 들어온 값보다 적은 경우, 이를 다시 재 계산하여, 현재 높이 값으로 설정한다.
       if(*prevHeightPoint < inputHeight)
       {
           *curHeightPoint -= *prevHeightPoint;
           *prevHeightPoint = inputHeight;
           *curHeightPoint += inputHeight;
       }
       
   }else
   {
       // 최대 너비 보다 많이 발생하는 경우, 다음 행으로 넘겨야 한다.
       // 이때, 최대 width 포인트를 maxWidthPoint에 저장한다.
       *curWidthPoint = inputWidth;
       //만약, 새로운 행의 너비가 max 값보다 큰 경우, 이를 max 값으로 지정한다.
       if(*maxWidthPoint < *curWidthPoint){
         *maxWidthPoint = *curWidthPoint;
       }
       // 다음 행의 경우, height는 무조건 더한다.
       *curHeightPoint += inputHeight;
       *prevHeightPoint = inputHeight;
   }
}