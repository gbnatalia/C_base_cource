/**	������ 6. ���� ������
	��� ������ �� 10 ���������. ����������, ����� ����� � ������� �����������
	���� �����. �������������, ��� ����� ����� ����� 1.
	������ �� �����: 10 ����� ����� ����� ������
	������ �� ������: ���� �����, ������� ����������� ���� ������.
	
	������
		������ �� �����: 4 1 2 1 11 2 34 11 0 11
		������ �� ������: 11
 */
#include <stdio.h>
#include <locale.h>
#include <strings.h>


int get_max_repeat(int * arr, int N){

	int cnt[N], index = 0, max = 0;

    memset(cnt, 0, sizeof(int) * N);
    for (int i = 0; i < N; i++){
        for (int j = i+1; j < N; j++){
            if (arr[i] == arr[j])
                cnt[i]++;
        }
	}
    for (int i = 0; i < N; i++){
        if (cnt[i] > max){
            max = cnt[i];
            index = i;
        }
    }

	return arr[index];
} 
 
 
int main() {
    const int SIZE = 10;
    int arr[SIZE];
    setlocale(LC_ALL, "Rus");
    printf("������� %d ����� �����: ", SIZE);
    for (int i = 0; i < SIZE; i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", get_max_repeat(arr, SIZE));

    return 0;
}
