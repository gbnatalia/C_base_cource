/** ������ 3. �������� ����������
	� ����� .txt ������� ������ ����� ����� (��������, ��� ����������).
	���������� �������� ��� ���������� �� ".html" � �������� ��������� � ���� .txt.
	������ �� �����: ������ ��������� �� ��������: a-z, A-Z, 0-9, /
	������ �� ������: �������� ������ � ���������� �����������.
	
	������ �1
		������ �� �����: /DOC.TXT/qqq
		������ �� ������: /DOC.TXT/qqq.html
		
	������ �2
		������ �� �����: /DOC.TXT/qqq.com
		������ �� ������: /DOC.TXT/qqq.html
 */

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define MAX_SIZE 256


int changeExtension(char * path, int pos){
    if (pos + 5 < MAX_SIZE){
        strcpy((char *)&path[pos], "html");
        return 0;
    }
    else {
        printf("������ ������ ��� path ������������");
        return 1;
    }
}

int addExtension(char * path, int pos){
    if (pos + 6 < MAX_SIZE){
        strcpy((char *)&path[pos], ".html");
        return 0;
    }
    else {
        printf("������ ������ ��� path ������������");
        return 1;
    }
}

int Extension(char * path){
    int len_path = strlen(path);
    if (!len_path){
        printf("������� ������ ����� 0-�� ������");
        return 1;
    }

    for (int i = len_path-1; i >= 0; i--){
        switch (path[i]){
            case '.':            return changeExtension(path, i + 1);
            case '\\': case '/': return addExtension(path, len_path);
        }
    }
    return addExtension(path, len_path);
}

void test(char * file_name_in, char * file_name_out){
    char path[MAX_SIZE];
    setlocale(LC_ALL, "Rus");

    FILE *f_in = fopen(file_name_in, "r");
    FILE *f_out = fopen(file_name_out, "w");
    if (!f_in || !f_out) {
        printf("������ �������� �������� ��� ��������� �����!");
        return;
    }

    fgets(path, 1000, f_in);
    if (!Extension(path))
        fprintf(f_out, "%s", path);
}

 
int main() {
    test("task3_in1.txt", "task3_out1.txt");
    test("task3_in2.txt", "task3_out2.txt");
    test("task3_in3.txt", "task3_out3.txt");
    return 0;
}