#include <stdio.h>
#include <locale.h>

/** ������ 1. ���������� �� ���� �����
    ������ ���� ����� � ������� ���������� �� ���
    ����� ���������� ���������� �����
    ������ �� �����: ���� ����� ����� ����������� ��������
    ������ �� ������: ���� ����� �����
    ������ �� �����: 4 15 9 56 4
    ������ �� ������: 56
 */
void task1(){
    int num[5], minNum;
    printf("������� ����� ������ 5 �����: ");
    scanf("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    minNum = num[0];
    for (int i = 1; i < 5; i++){
        if (num[i] > minNum)
            minNum = num[i];
    }
    printf("%d", minNum);
}


/** ������ 2. ���������� �� ���� �����
    ������ ���� ����� � ������� ���������� �� ���
    ����� ���������� ���������� �����
    ������ �� �����: ���� ����� ����� ����������� ��������
    ������ �� ������: ���� ����� �����
    ������ �� �����: 4 15 9 56 4
    ������ �� ������: 4
 */
void task2(){
    int num[5], minNum;
    printf("������� ����� ������ 5 �����: ");
    scanf("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    minNum = num[0];
    for (int i = 1; i < 5; i++){
        if (num[i] < minNum)
            minNum = num[i];
    }
    printf("%d", minNum);
}

/** ������ 3. � ������� �����������
    ������ ��� ����� � ����������, ����� ��, ��� ��� ��������� � ������� �����������.
    ������ �� �����: ��� ����� �����
    ������ �� ������: ���� ����� YES ��� NO
    ������
        ������ �� �����: 4 5 17
        ������ �� ������: YES
 */
void task3(){
    int a, b, c;
    printf("������� ����� ������ 3 �����: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && b < c)
        printf("YES");
    else
        printf("NO");
}

/** ������ 4. ����� ����� ����
    ������ ����� ������ � ������� �������� ������� ����.
    ������ �� �����: ����� ����� �� 1 �� 12 - ����� ������.
    ������ �� ������: ����� ���� �� ����������: winter, spring, summer, autumn
    ������ �1
        ������ �� �����: 4
        ������ �� ������: spring
    ������ �2
        ������ �� �����: 1
        ������ �� ������: winter
 */
void task4(){
    int mounth = -1;
    while (1){
        printf("������� ����� ������ (�� 1 �� 12): ");
        scanf("%d", &mounth);
        if ((mounth < 1) || (mounth > 12))
            continue;
        else if (mounth < 3)
            printf("winter \n");
        else if (mounth < 6)
            printf("spring \n");
        else if (mounth < 9)
            printf("summer \n");
        else if (mounth < 12)
            printf("autumn \n");
        else
            printf("winter \n");
        break;
    }
}


int main() {
  int taskNum;
    setlocale(LC_ALL, "Rus");
    printf("\n");

    while(1){

        printf("������� ����� ������ ��� 9 - ��� ������: \n");
        scanf("%d", &taskNum);

        if (taskNum == 1) {
            printf("task1: \n");
            task1();
        }
        else if (taskNum == 2) {
            printf("task2: \n");
            task2();
        }
        else if  (taskNum == 3) {
            printf("task3: \n");
            task3();
        }
        else if  (taskNum == 4) {
            printf("task4: \n");
            task4();
        }
        else if  (taskNum == 9) {
            printf("��������� ���������!");
            break;
        }
        else {t:
            printf("�� ����� ������������ ����� ������!");
        }
        printf("\n");
    }

    return 0;
}

