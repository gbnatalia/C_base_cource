/** ������ 5. ����� ������� �����
	� ����� .txt ���� ������ ����, ����������� ���������. ����� ����� �������
	����� � ������� ��� � ���� .txt. ������, ����� ����� ������� ���� ����� ����
	���������, �� ������������.
	������ �� �����: ������ �� ���������� ���� � ��������. �� ����� 1000 ��������.
	������ �� ������: ���� ����� �� ���������� ����.
	
	������
		������ �� �����: Hello beautiful world
		������ �� ������: beautiful

 */
#include <stdio.h>
#include <strings.h>

 
int main() {
    char str[1000];
    int ind_begin = 0, ind_end = 0, i = -1, j;
    FILE *f_in = fopen("task5_in.txt", "r");
    FILE *f_out = fopen("task5_out.txt", "w");

    fgets(str, 1000, f_in);

    while (1) {
        j = ++i;
        while(str[i] != '\0' && str[i] != ' ') i++;
        if (i - j > ind_end - ind_begin) {
            ind_begin = j;
            ind_end = i;
        }
        if (str[i] == '\0')
            break;
    }
    for (i = ind_begin; i < ind_end; i++)
        fprintf(f_out, "%c", str[i]);

    fclose(f_in);
    fclose(f_out);

    return 0;
}

