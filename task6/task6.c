/**	Задача 6. Возвести в степень
	Написать рекурсивную функцию возведения целого числа n в степень p.
	
	int recurs_power(int n, int p)
	
	Используя данную функцию, решить задачу.
	Данные на входе: Два целых числа -100 >= n >= 100 и 0 >= p >= 100
	Данные на выходе: Одно целое число n в степени p
	
	Пример №1
		Данные на входе: 2 3
		Данные на выходе: 8
	Пример №2
		Данные на входе: 3 4
		Данные на выходе: 81
 */
#include <stdio.h>
#include <locale.h>


int recurs_power(int n, int p){
	if (!p) return 1;
    return recurs_power(n, p-1) * n;
}
 
int main() {
    int n, p;
    setlocale(LC_ALL, "Rus");
    printf("Введите Два целых числа -100 >= n >= 100 и 0 >= p >= 100: ");
    scanf("%d%d", &n, &p);
    if (n > 100 || n < -100 || p < 0) {
        printf("Введены некорректные данные (n = %d, p = %d)", n, p);
        return 1;
    }
    printf("%d", recurs_power(n, p));
    return 0;
}
