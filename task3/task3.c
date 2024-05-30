/** ������ 3. ����������� ����� ������� ������ �� 4
	������� ������ �� 12 ��������� � ��������� ����������� ����� ������ �� 4 ��������.
	������ �� �����: 12 ����� ����� ����� ������
	������ �� ������: 12 ����� ����� ����� ������
	
	������ �1
		������ �� �����: 4 -5 3 10 -4 -6 8 -10 1 0 5 7
		������ �� ������: 1 0 5 7 4 -5 3 10 -4 -6 8 -10
	������ �2
		������ �� �����: 1 2 3 4 5 6 7 8 9 10 11 12
		������ �� ������: 9 10 11 12 1 2 3 4 5 6 7 8
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
    printf("������� %d ����� ����� ������: ", SIZE);
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    right_shift_N (arr, SIZE, 4);
    print_array(arr, SIZE);

    return 0;
}
