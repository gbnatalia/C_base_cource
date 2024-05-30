/** Задача 2. Найти минимум
	Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
	Данные на входе: 5 целых чисел через пробел
	Данные на выходе: Одно единственное целое число
	
	Пример №1
		Данные на входе: 4 15 3 10 14
		Данные на выходе: 3
	Пример №2
		Данные на входе: 1 2 3 4 -5
		Данные на выходе: -5
 */

#include <stdio.h>
#include <locale.h>

int min_elementh(int * arr, int len){
    if (!len || !arr) return 0xFFFFFFFF;
    int min_el = arr[0];
    for (int i = 1; i < len; i++){
        if (min_el > arr[i])
            min_el = arr[i];
    }
    return min_el;
} 

int main() {
    const int len = 5;
    int arr[len];

    setlocale(LC_ALL, "Rus");

    printf("Введите массив из 5 чисел: ");
    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    printf("min = %d\n",  min_elementh(arr, len));

    return 0;
}
