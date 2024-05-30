/** Задача 3. Циклический сдвиг массива вправо на 4
	Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.
	Данные на входе: 12 целых чисел через пробел
	Данные на выходе: 12 целых чисел через пробел
	
	Пример №1
		Данные на входе: 4 -5 3 10 -4 -6 8 -10 1 0 5 7
		Данные на выходе: 1 0 5 7 4 -5 3 10 -4 -6 8 -10
	Пример №2
		Данные на входе: 1 2 3 4 5 6 7 8 9 10 11 12
		Данные на выходе: 9 10 11 12 1 2 3 4 5 6 7 8
 */

#include <stdio.h>
#include <locale.h>

void print_array(int * arr, unsigned size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void right_shift_N (int * arr, unsigned size, unsigned N)
{
    int temp;
    for (unsigned shift = 0; shift < N; shift++) {
        temp = arr[size - 1];
        for (int i = size - 1; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = temp;
    }
}

int main() {
    const unsigned SIZE = 12;
    int arr[SIZE];
    setlocale(LC_ALL, "Rus");
    printf("Введите %d чисел через пробел: ", SIZE);
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    right_shift_N (arr, SIZE, 4);
    print_array(arr, SIZE);

    return 0;
}
