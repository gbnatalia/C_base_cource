/** ������ 4. ������������� �� ��������� �����
	������� ������ �� 10 ��������� � ������������� ��� �� ��������� �����.
	������ �� �����: 10 ����� ����� ����� ������
	���� �� ������ ��������������� �� ��������� �����
	
	������ �1
		������ �� �����: 14 25 13 30 76 58 32 11 41 97
		������ �� ������: 30 11 41 32 13 14 25 76 97 58
	������ �2
		������ �� �����: 109 118 100 51 62 73 1007 16 4 555
		������ �� ������: 100 51 62 73 4 555 16 1007 118 109
 */

#include <stdio.h>
#include <locale.h>

void print_array(int * arr, unsigned size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sort_array(int * arr, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            if (arr[i] % 10 > arr[j] % 10) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    setlocale(LC_ALL, "Rus");
    printf("������� %d ����� �����: ", SIZE);
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    sort_array(arr, SIZE);
    print_array(arr, SIZE);

    return 0;
}
