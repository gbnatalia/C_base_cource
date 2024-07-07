/** ������ 2. ������� ������� �� ������
	� ����� .txt ���������� ������� ��� ������ ������� (� ������ �����������
	� ��������� �������). ��� ������� ������ ����������� �������. ���������
	�������� � .txt.
	������ �� �����: ������ �� ���������� ����, ������ ���������� � ��������. 
					 �� ����� 1000 ��������.
	������ �� ������: ������ �� ���������� ����, ������ ���������� � ��������.
	
	������
		������ �� �����:    Hello world  !
		������ �� ������: Hello world!
	
*/

#include <stdio.h>
#include <locale.h>

void delete_spaces(char * str){
    char c;
    int end = -1, beg = 0;

    while(1) {
        while (str[++end] == ' ');
        while (str[end] != ' ' && str[end] != '\0') {
            if (beg != end)
                str[beg] = str[end];
            beg++;
            end++;
        }
        if (str[end] == '\0') break;
        str[beg++] = ' ';
    }
    str[beg++] = '\0';
}


int main() {
    char str[1000];
    int i;
    setlocale(LC_ALL, "Rus");

    FILE *f_in = fopen("task2_in.txt", "r");
    FILE *f_out = fopen("task2_out.txt", "w");
    if (!f_in || !f_out) {
        printf("������ �������� �������� ��� ��������� �����!");
        return 1;
    }

    fgets(str, 1000, f_in);

    delete_spaces(str);

    i = -1;
    while(str[++i] != '\0')
        fprintf(f_out, "%c", str[i]);

    fclose(f_in);
    fclose(f_out);

    return 0;
}
