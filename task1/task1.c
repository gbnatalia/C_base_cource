/** ������ 1. ���� �������� ��������
	� ����� .txt �������� �������. ���������� ����������� �������, ������� 	������ ������� ���� 
	�������� �������� �� ������� �������� �� ������� ������. ���� ���������� �������� ������� 
	(������� �� �������), �� ��������� ������ �� ������. ��������� �������� � ���� .txt.
	������ �� �����: ������ �� ���������� ����, �������� � ������ ����������. �� ����� 1000 ��������.
	������ �� ������: ������ �� ���������� ����, �������� � ������ ����������.
	
	������ �1
		������ �� �����: Hello world!
		������ �� ������: eHllw orodl!
	������ �2
		������ �� �����: abc def
		������ �� ������: bad cfe
 */

#include <stdio.h>

void change_symbol(char file_in[], char file_out[]){
    char str[1000], c;
    int i, j = -1;
    FILE *f_in = fopen(file_in, "r");
    FILE *f_out = fopen(file_out, "w");

    fgets(str, 1000, f_in);

    while(1) {
        i = ++j;
        while (str[i] == ' ' && str[i] != '\0') i++;
        if (str[i] == '\0') break;
        j = i + 1;
        while (str[j] == ' ' && str[j] != '\0') j++;
        if (str[j] == '\0') break;
        c = str[i];
        str[i] = str[j];
        str[j] = c;
    }

    i = -1;
    while(str[++i] != '\0')
        fprintf(f_out, "%c", str[i]);

    fclose(f_in);
    fclose(f_out);
}


int main() {
    change_symbol("task1_in1.txt", "task1_out1.txt");
    change_symbol("task1_in2.txt", "task1_out2.txt");
    return 0;
}
