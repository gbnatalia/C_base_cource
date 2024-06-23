/** ������ 2. �������� a �� b
	� ����� .txt ���� ���������� ������ �� ����� 1000 ��������. ����������
	�������� ��� ����� "�" �� ����� "b" � ��������, ��� ���������, ��� �
	��������. ��������� �������� � .txt.
	������ �� �����: ������ �� ��������� � ������� ���������� ����,
					 ������ ���������� � ��������.
	������ �� ������: ������ �� ��������� � ������� ����������
					  ����, ������ ���������� � ��������.
					  
	������
		������ �� �����: aabbccddABCD
		������ �� ������: bbaaccddBACD
 */

#include <stdio.h>

int main() {
    FILE * in_file = fopen("task2_in.txt", "r");
    FILE * out_file = fopen("task2_out.txt", "w");
    char word[1000];
    int ind = -1;

    fscanf(in_file, "%s", word);

    while(word[++ind] != '\0'){
        if (word[ind] == 'a') word[ind] = 'b';
        else if (word[ind] == 'A') word[ind] = 'B';
        else if (word[ind] == 'b') word[ind] = 'a';
        else if (word[ind] == 'B') word[ind] = 'A';
    }

    fprintf(out_file, "%s ", word);

    fclose(in_file);
    fclose(out_file);

    return 0;
}
