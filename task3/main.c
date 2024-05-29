#include <stdio.h>
#include <locale.h>

/** Задача 3. Все цифры четные
    Ввести целое число и определить, верно ли, что все его цифры четные
    Данные на входе: Одно целое число
    Данные на выходе: YES или NO

    Пример №1
        Данные на входе: 2684
        Данные на выходе: YES
    Пример №2
        Данные на входе: 2994
        Данные на выходе: NO
 */


int main() {
    int num;
    char res[4];

    setlocale(LC_ALL, "Rus");

    printf("Введите целое число: ");
    scanf("%d", &num);

    sprintf(res,"YES");
    while (num) {
        if (num % 2){
            sprintf(res,"NO");
            break;
        }
        num/=10;
    }
    printf( "%s\n", res);
    return 0;
}
