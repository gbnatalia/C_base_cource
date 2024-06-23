/** ������ 1. �� ������ ����
	� ����� .txt ���� ��� ����� �� ����� 100 �������� ������, �����������
	����� ��������. ������� ������ �� ������� ����, ������� ����������� �
	����� ������ ������ ���� ���. ����������� �� ����� ������ � ���� .txt �
	������������������ �������.
	������ �� �����: ��� ����� �� ��������� ���������� ���� ����� ������. 
	������ ������� ����� �� ������ 100 ��������.
	������ �� ������: ��������� ���������� ����� ����� ������.
	
	������ �1
		������ �� �����: hello world
		������ �� ������: o
		
		������ �� �����: aabcd bcef
		������ �� ������: b c
*/

#include <stdio.h>
#include <string.h>

void task1(char * ifile, char * ofile){
    const int CNT_SYM = 26;
    char word1[100], word2[100];
    FILE * in_file = fopen(ifile, "r");
    FILE * out_file = fopen(ofile, "w");
    fscanf(in_file, "%s%s", word1,  word2);
    int sym1[CNT_SYM], sym2[CNT_SYM], cnt;

    memset(&sym1[0], 0, sizeof(int) * CNT_SYM);
    memset(&sym2[0], 0, sizeof(int) * CNT_SYM);

    cnt = -1;
    while(word1[++cnt] != '\0')
        ++sym1[word1[cnt] - 'a'];
    cnt = -1;
    while(word2[++cnt] != '\0')
        ++sym2[word2[cnt] - 'a'];

    for (int i = 0; i < CNT_SYM; ++i)
        if (sym1[i] == 1 && sym2[i] == 1)
            fprintf(out_file, "%c ", i + 'a');

    fclose(in_file);
    fclose(out_file);
}


int main() {
    task1("task1_in1.txt", "task1_out1.txt");
    task1("task1_in2.txt", "task1_out2.txt");
    return 0;
}
