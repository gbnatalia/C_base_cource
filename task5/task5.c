/** Задача 5. Поменять местами
	Составить функцию, которая меняет в массиве минимальный и максимальный
	элемент местами. Прототип функции
	
	void change_max_min(int size, int a[])
	
	Данные на входе: Функция принимает на вход размер массива и массив чисел типа int
	Данные на выходе: Функция не возвращает значения, измененный 
					  массив сохраняется на месте исходного.
					  
	Пример
		Данные на входе: 1 2 3 4 5 6 7 8 9 10
		Данные на выходе: 10 2 3 4 5 6 7 8 9 1
 */
#include <stdio.h>

void print_array(int arr[], unsigned size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void change_max_min(int size, int a[]){
    int ind_min = 0, ind_max = 0, min_el = a[0], max_el= a[0];

    for (int i = 1; i < size; i++){
        if (a[i] > max_el){
            max_el = a[i];
            ind_max = i;
        }
        else if (a[i] < min_el){
            min_el = a[i];
            ind_min = i;
        }
    }

    a[ind_min] = max_el;
    a[ind_max] = min_el;
}
 
 
int main() {
    int test_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    change_max_min(sizeof(test_arr)/sizeof(int), test_arr);
    print_array(test_arr, sizeof(test_arr)/sizeof(int));
    return 0;
}
