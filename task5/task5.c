/**	Задача 5. Вторая с конца ноль
	Считать массив из 10 элементов и отобрать в другой массив все числа, 
	у которых вторая с конца цифра (число десятков) – ноль.
	Данные на входе: 10 целых чисел через пробел.
	Данные на выходе: Целые числа через пробел, у которых вторая с конца цифра - ноль
	
	Пример
		Данные на входе: 40 105 203 1 14 1000 22 33 44 55
		Данные на выходе: 105 203 1 1000
 */
 
#include <stdio.h>
#include <locale.h>

void print_array(int * arr, unsigned size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int create_array(int * arr, int * res_arr, unsigned size){
	int cnt = 0;
    for (int i = 0; i < size; i++){
        if (!((arr[i] / 10) % 10)){
            res_arr[cnt] = arr[i];
            cnt++;
        }
	}
	return cnt;
} 

int main() {
    const int SIZE = 10;
    int arr[SIZE], res_arr[SIZE], size_res_arr;
    setlocale(LC_ALL, "Rus");
    printf("Введите %d целых чисел: ", SIZE);
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    size_res_arr = create_array(arr, res_arr, SIZE);
    print_array(res_arr, size_res_arr);

    return 0;
}
