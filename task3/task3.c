/** Задача 3. Изменить расширение
	В файле .txt записан полный адрес файла (возможно, без расширения).
	Необходимо изменить его расширение на ".html" и записать результат в файл .txt.
	Данные на входе: Строка состоящая из символов: a-z, A-Z, 0-9, /
	Данные на выходе: Исходная строка с измененным расширением.
	
	Пример №1
		Данные на входе: /DOC.TXT/qqq
		Данные на выходе: /DOC.TXT/qqq.html
		
	Пример №2
		Данные на входе: /DOC.TXT/qqq.com
		Данные на выходе: /DOC.TXT/qqq.html
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
        printf("Размер буфера под path недостаточен");
        return 1;
    }
}

int addExtension(char * path, int pos){
    if (pos + 6 < MAX_SIZE){
        strcpy((char *)&path[pos], ".html");
        return 0;
    }
    else {
        printf("Размер буфера под path недостаточен");
        return 1;
    }
}

int Extension(char * path){
    int len_path = strlen(path);
    if (!len_path){
        printf("Входная строка имеет 0-ой размер");
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
        printf("Ошибка открытия входного или выходного файла!");
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