#include <stdio.h>

void ASCENDING(int array[]) //�������� �������� ���� �Լ�
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

void DESCENDING(int array[]) //�������� �������� ���� �Լ�
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

    printf("�Է� : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("1 - �������� ����\n2 - �������� ����\n���� : ");
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
        printf("�߸� �Է��ϼ̽��ϴ�.");
        break;
    }
    printf("��� : ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}