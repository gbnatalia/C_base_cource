/** ������ 2. ����� �������
	������ � ���������� ������ �� 5 ���������, ����� ����������� �� ���.
	������ �� �����: 5 ����� ����� ����� ������
	������ �� ������: ���� ������������ ����� �����
	
	������ �1
		������ �� �����: 4 15 3 10 14
		������ �� ������: 3
	������ �2
		������ �� �����: 1 2 3 4 -5
		������ �� ������: -5
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

    printf("������� ������ �� 5 �����: ");
    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    printf("min = %d\n",  min_elementh(arr, len));

    return 0;
}
