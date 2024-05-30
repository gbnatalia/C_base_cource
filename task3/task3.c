/** ������ 3. ����� ���� ����� ������������
	��������� ���������� �������, ������� ����������, ����� ��, ��� � ��������
	����� ����� ���� ����� ������������.

		int is_happy_number(int n)

	������ �� �����: ����� �� ������������� �����
	������ �� ������: YES ��� NO

	������ �1
		������ �� �����: 123
		������ �� ������: YES
	������ �2
		������ �� �����: 528
		������ �� ������: NO
 */

#include <stdio.h>
#include <locale.h>

int is_happy_number(int n){
    int num = n, temp, sum = 0, mul = 1;
    if (n == 0) return 1;
    while (num) {
        temp = num % 10;
        sum += temp;
        mul *= temp;
        num /= 10;
    }
    return sum == mul;
}
 
 
int main() {
    int num;
    setlocale(LC_ALL, "Rus");
    printf("������� ��������������� ����� �����: ");
    scanf("%d", &num);
    printf(is_happy_number(num)? "YES" : "NO");
    return 0;
}
