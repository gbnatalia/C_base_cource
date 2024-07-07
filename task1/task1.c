/** Задача 1. Пары соседних символов
	В файле .txt записаны символы. Необходимо разработать функцию, которая 	меняет местами пары 
	соседних символов не обращая внимание на символы пробел. Если количество символов нечетно 
	(пробелы не считаем), то последний символ не меняем. Результат записать в файл .txt.
	Данные на входе: Строка из английских букв, пробелов и знаков препинания. Не более 1000 символов.
	Данные на выходе: Строка из английских букв, пробелов и знаков препинания.
	
	Пример №1
		Данные на входе: Hello world!
		Данные на выходе: eHllw orodl!
	Пример №2
		Данные на входе: abc def
		Данные на выходе: bad cfe
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
