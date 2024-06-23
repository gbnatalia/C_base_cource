/** ������ 2. ������ � ������
	�������� ������ ���� �������, ������� ������ � ������ ������� ��� ������
	��������, � � ����� � ��� ��������. �� ��������� ������� ���������� �����
	����� �����. ������ �������� ���������:
	
	void sort_even_odd(int n, int a[])
	
	������ �� �����: ������� ��������� �� ���� ����� �����
	������ �� ������: ��������������� �������� ������
	
	������ �1
		������ �� �����: 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
		������ �� ������: 20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1
	������ �2
		������ �� �����: 1 0 1 0 1
		������ �� ������: 0 0 1 1 1
 */

#include <stdio.h>

void print_array(int arr[], unsigned size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort_even_odd(int n, int a[]) {
    int cntOdd = 0, cntArr = 0;
    int Odd[n];

    for (int i = 0; i < n; ++i) {
        if (a[i] % 2)
            Odd[cntOdd++] = a[i];
        else
            a[cntArr++] = a[i];
    }
    for (int i = 0; i < cntOdd; i++){
        a[cntArr++] = Odd[i];
    }
}

int main() {
    const int size1 = 20, size2 = 5;
    int arr1[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11,
                  10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr2[] = {1, 0, 1, 0, 1};

    sort_even_odd(size1, arr1);
    print_array(arr1, size1);

    sort_even_odd(size2, arr2);
    print_array(arr2, size2);

    return 0;
}
