#include <stdio.h>
#include <stdlib.h>

// LinkedList Define
typedef struct _Factor {
    struct _Factor * next;
    int factor;
} Factor;

typedef Factor * FactorPtr;
typedef struct _list {
    int count;
    FactorPtr head;
}FactorList;

void init(FactorList * lptr);
void insert(FactorList * lptr, int value, int position);
void print_list(FactorList * lptr);
void print_all_sum(FactorList * lptr);      // 약수의 총합
void print_one_unit_multi(FactorList * lptr); // 약수의 곱의 일의 자리 수를 출력
void performFactor(int inputNum, FactorList * factorList);

int main() {

    // LinkedList 생성
    FactorList * factorList = (FactorList*)malloc(sizeof(FactorList));
    init(factorList);

    int inputNum;

    scanf("%d", &inputNum);

    if(inputNum > 1000) {
        return 0;
    }
    performFactor(inputNum, factorList);
    print_list(factorList);
    print_all_sum(factorList);
    print_one_unit_multi(factorList);

    return 0;
}

/**
 * 약수를 구하고 출력 한다.
 * @param inputNum
 * @param factorList
 */
void performFactor(int inputNum, FactorList * factorList)
{

    int i = 0;
    int position = 1;
    for(i = 1 ; i <= inputNum ; i++)
    {

        if(inputNum % i == 0)
        {
            // 리스트생성하기
            // printf("i = %d\n", i);
            insert(factorList, i, position);
            position++;
        }
    }
}

/**
 * 연결 리스트를 초기화 한다.
 * @param lptr
 */
void init(FactorList * lptr){
    // Init List
    lptr->count = 0;
    lptr->head = NULL;
}

/**
 * 연결 리스트에 노드를 추가 한다.
 * @param lptr
 * @param value
 * @param position
 */
void insert(FactorList * lptr, int value, int position)
{
   //Insert Value to proper position
   if(position < 1 || position > (lptr->count) + 1) {
       printf("Position Out of Bound \n");
       return;
   }

   FactorPtr  newFactorPtr = (Factor*)malloc(sizeof(Factor));
   newFactorPtr->factor = value;

   if(position == 1)
   {
       newFactorPtr->next = lptr->head;
       lptr->head = newFactorPtr;
   }else
   {
       FactorPtr tmp = lptr->head;
       int i;
       for(i = 1 ; i < position - 1 ; i++){
           tmp = tmp->next;
       }
       newFactorPtr->next = tmp->next;
       tmp->next = newFactorPtr;
   }
   lptr->count++;
}

/**
 * 연결 리스트를 출력 한다.
 * @param lptr
 */
void print_list(FactorList * lptr)
{
    FactorPtr tmp = lptr->head;
    //printf("List value: ");
    while(tmp!=NULL){
        printf("%d ",tmp->factor);
        tmp=tmp->next;
    }
    printf("\n");
    printf("%d\n",lptr->count);
}

/**
 * 문제에 정의된 약수의 값을 모두 더한 값을 출력 한다.
 * @param lptr
 */
void print_all_sum(FactorList * lptr)
{
    FactorPtr tmp = lptr->head;
    int sum = 0;
    while(tmp!=NULL){
        sum += tmp->factor;
        tmp=tmp->next;
    }
    printf("%d\n", sum);
}

/**
 * 문제에 정의된 약수의 곱의 일의 자리 수를 출력 한다.
 * @param lptr
 */
void print_one_unit_multi(FactorList * lptr)
{
    FactorPtr tmp = lptr->head;
    int mult = 1;
    while(tmp!=NULL){
        mult *= tmp->factor;
        if(mult >= 10)
        {
            mult = mult % 10;
        }
        tmp=tmp->next;
    }

    printf("%d\n", mult);

}