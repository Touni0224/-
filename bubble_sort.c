#include <stdio.h>

void ASCENDING(int array[]) //버블정렬 오름차순 정렬 함수
{
    int i, j, temp = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void DESCENDING(int array[]) //버블정렬 내림차순 정렬 함수
{
    int i, j, temp = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
int main()
{
    int array[10];
    int input;
    int i, temp = 0;

    printf("입력 : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("1 - 오름차순 정렬\n2 - 내림차순 정렬\n선택 : ");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        ASCENDING(array);
        break;

    case 2:
        DESCENDING(array);
        break;
    default:
        printf("잘못 입력하셨습니다.");
        break;
    }
    printf("결과 : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}