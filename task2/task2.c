/** ������ 2. ���
	��������� �������, ������� ���������� ���������� ����� �������� ����
	����������� � �������� ������ �� �������������
	https://younglinux.info/algorithm/euclidean
	int nod(int a, int b)
	������ �� �����: ��� ����� ������������� �����
	������ �� ������: ���� ����� ����� - ���������� ����� ��������.

	������ �1
		������ �� �����: 14 21
		������ �� ������: 7
 */

#include <stdio.h>
#include <locale.h>

int nod(int a, int b){
    while (a && b) {
        (a > b)? (a %= b): (b %= a);
    }
    return a? a : b;
} 

int main() {
    int num1, num2;

    setlocale(LC_ALL, "Rus");

    printf("������� 2 ����������� �����: ");
    scanf("%d%d", &num1, &num2);

    printf("��� = %d\n",  nod(num1, num2));

    return 0;
}
