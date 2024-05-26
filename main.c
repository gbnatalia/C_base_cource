#include <stdio.h>
#include <locale.h>

/** Задача 1. Наибольшее из пяти чисел
    Ввести пять чисел и вывести наибольшее из них
    Нужно напечатать наибольшее число
    Данные на входе: Пять целых чисел разделенных пробелом
    Данные на выходе: Одно целое число
    Данные на входе: 4 15 9 56 4
    Данные на выходе: 56
 */
void task1(){
    int num[5], minNum;
    printf("Введите через пробел 5 чисел: ");
    scanf("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    minNum = num[0];
    for (int i = 1; i < 5; i++){
        if (num[i] > minNum)
            minNum = num[i];
    }
    printf("%d", minNum);
}


/** Задача 2. Наименьшее из пяти чисел
    Ввести пять чисел и вывести наименьшее из них
    Нужно напечатать наименьшее число
    Данные на входе: Пять целых чисел разделенных пробелом
    Данные на выходе: Одно целое число
    Данные на входе: 4 15 9 56 4
    Данные на выходе: 4
 */
void task2(){
    int num[5], minNum;
    printf("Введите через пробел 5 чисел: ");
    scanf("%d%d%d%d%d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    minNum = num[0];
    for (int i = 1; i < 5; i++){
        if (num[i] < minNum)
            minNum = num[i];
    }
    printf("%d", minNum);
}

/** Задача 3. В порядке возрастания
    Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.
    Данные на входе: Три целых числа
    Данные на выходе: Одно слово YES или NO
    Пример
        Данные на входе: 4 5 17
        Данные на выходе: YES
 */
void task3(){
    int a, b, c;
    printf("Введите через пробел 3 числа: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && b < c)
        printf("YES");
    else
        printf("NO");
}

/** Задача 4. Какое время года
    Ввести номер месяца и вывести название времени года.
    Данные на входе: Целое число от 1 до 12 - номер месяца.
    Данные на выходе: Время года на английском: winter, spring, summer, autumn
    Пример №1
        Данные на входе: 4
        Данные на выходе: spring
    Пример №2
        Данные на входе: 1
        Данные на выходе: winter
 */
void task4(){
    int mounth = -1;
    while (1){
        printf("Введите номер месяца (от 1 до 12): ");
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

        printf("Введите номер задачи или 9 - для выхода: \n");
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
            printf("Программа завершена!");
            break;
        }
        else {t:
            printf("Вы ввели недопустимый номер задачи!");
        }
        printf("\n");
    }

    return 0;
}

