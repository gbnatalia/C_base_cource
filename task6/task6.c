/**	������ 6. ������ ��������
	���������� ���������� ������������� ��������� ���������� �������,
	����������� �� �������� ������� �������������� ���� ��������� �������
	���������. ����������� ������� ������� �������������� ������� ���������.
	������ �� �����: 5 ����� �� 5 ����� ����� ����� ������
	������ �� ������: ���� ����� �����
	
	������
		������ �� �����: 1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
		������ �� ������: 10
 */
 
#include <stdio.h>
#include <locale.h>
#include <strings.h>

const int SIZE = 5;

float average(int arr[][SIZE]){
    int sum = 0;
    for (int i = 0; i < SIZE; i++){
        sum += arr[i][i];
    }
    return (float)sum / 5;
}

int cnt_el(int arr[][SIZE]){
    int cnt = 0;
    float av = average(arr);
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if ((float)arr[i][j] > av)
                cnt++;
        }
    }
    return cnt;
}

 
int main() {
    int test_arr[5][5]  = {{1,1,1,1,1},
                           {2,2,2,2,2},
                           {3,3,3,3,3},
                           {4,4,4,4,4},
                           {5,5,5,5,5}};
    printf("%d\n", cnt_el(test_arr));

    return 0;
}
