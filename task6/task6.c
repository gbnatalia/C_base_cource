/**	������ 6. ������������� �� a
	� ����� .txt ���� �����������. ���������� ����������, ������� ����
	������������� �� ����� '�'. ����� �������� � ���� .txt.
	������ �� �����: ������ �� ���������� ���� � �������� �� ����� 1000 ��������.
	������ �� ������: ���� ����� �����
	
	������
		������ �� �����: Mama mila ramu
		������ �� ������: 2
 */
 
#include <stdio.h>
#include <strings.h>

int main() {
    char str[1000];
    int cnt = 0, i = -1, j;
    FILE *f_in = fopen("task6_in.txt", "r");
    FILE *f_out = fopen("task6_out.txt", "w");

    fgets(str, 1000, f_in);

    while (1) {
        j = ++i;
        while(str[i] != '\0' && str[i] != ' ') i++;
        if (i - j > 0 && str[i-1] == 'a')
            cnt++;
        if (str[i] == '\0')
            break;
    }
    fprintf(f_out, "%d", cnt);

    fclose(f_in);
    fclose(f_out);

    return 0;
}
