/**	Задача 6. Заканчивается на a
	В файле .txt дано предложение. Необходимо определить, сколько слов
	заканчиваются на букву 'а'. Ответ записать в файл .txt.
	Данные на входе: Строка из английских букв и пробелов не более 1000 символов.
	Данные на выходе: Одно целое число
	
	Пример
		Данные на входе: Mama mila ramu
		Данные на выходе: 2
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
