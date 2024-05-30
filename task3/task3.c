/** Задача 3. Сумма цифр равна произведению
	Составить логическую функцию, которая определяет, верно ли, что в заданном
	числе сумма цифр равна произведению.

		int is_happy_number(int n)

	Данные на входе: Целое не отрицательное число
	Данные на выходе: YES или NO

	Пример №1
		Данные на входе: 123
		Данные на выходе: YES
	Пример №2
		Данные на входе: 528
		Данные на выходе: NO
 */

#include <stdio.h>
#include <locale.h>

int is_happy_number(int n){
    int num = n, temp, sum = 0, mul = 1;
    if (n == 0) return 1;
    while (num) {
        temp = num % 10;
        sum += temp;
        mul *= temp;
        num /= 10;
    }
    return sum == mul;
}
 
 
int main() {
    int num;
    setlocale(LC_ALL, "Rus");
    printf("Введите неотрицательное целое число: ");
    scanf("%d", &num);
    printf(is_happy_number(num)? "YES" : "NO");
    return 0;
}
