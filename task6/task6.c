/**	������ 6. �������� � �������
	�������� ����������� ������� ���������� ������ ����� n � ������� p.
	
	int recurs_power(int n, int p)
	
	��������� ������ �������, ������ ������.
	������ �� �����: ��� ����� ����� -100 >= n >= 100 � 0 >= p >= 100
	������ �� ������: ���� ����� ����� n � ������� p
	
	������ �1
		������ �� �����: 2 3
		������ �� ������: 8
	������ �2
		������ �� �����: 3 4
		������ �� ������: 81
 */
#include <stdio.h>
#include <locale.h>


int recurs_power(int n, int p){
	if (!p) return 1;
    return recurs_power(n, p-1) * n;
}
 
int main() {
    int n, p;
    setlocale(LC_ALL, "Rus");
    printf("������� ��� ����� ����� -100 >= n >= 100 � 0 >= p >= 100: ");
    scanf("%d%d", &n, &p);
    if (n > 100 || n < -100 || p < 0) {
        printf("������� ������������ ������ (n = %d, p = %d)", n, p);
        return 1;
    }
    printf("%d", recurs_power(n, p));
    return 0;
}
