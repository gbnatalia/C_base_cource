/** Задача 3. Числа в массив
	В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые
	числа и иные символы. Требуется все числа, которые встречаются в строке,
	поместить в отдельный целочисленный массив. Например, если дана строка
	"data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести
	массив по возрастанию в файл .txt.
	
	Данные на входе: Строка из английских букв, цифр и знаков препинания
	Данные на выходе: Последовательность целых чисел отсортированная по возрастанию
	
	Пример
		Данные на входе: data 48 call 9 read13 blank0a
		Данные на выходе: 0 9 13 48
 */

#include <stdio.h>
#include <string.h>

void print_array(int a[], unsigned size){
    for (int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void reverse(int * a, int * b){
    *a = *a ^ *b;   *b = *a ^ *b;   *a = *a ^ *b;
}

void sort_array(int arr[], unsigned size){
    int i, j;
    for (i = 1; i < size; i++)
        for (j = 0; j < size - i; j++)
            if (arr[j] > arr[j + 1])
                reverse(&arr[j], &arr[j + 1]);
}

void get_nums(char carr[], int arr[], int * size){
    int i, num;
    for (i = 0, *size = 0; i < strlen(carr); i++){
        if ((carr[i] >= '0') && (carr[i] <= '9')){
            num = 0;
            while ((carr[i] >= '0') && (carr[i] <= '9')) {
                num = num * 10 + (carr[i] - '0');
                i++;
            }
            arr[(*size)++] = num;
        }
    }
}


int main() {

    FILE * in_file = fopen("task3_in.txt", "r");
    FILE * out_file = fopen("task3_out.txt", "w");
    char words[1000];
    int nums[1000], ind = -1, count = 0, i;

    fgets(words, 1000, in_file);
    get_nums(words, nums, &count);
    sort_array(nums, count);

    for (i = 0; i < count; i++)
        fprintf(out_file, "%d ", nums[i]);

    fclose(in_file);
    fclose(out_file);

    return 0;
}
