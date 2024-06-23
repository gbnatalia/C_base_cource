/** Задача 2. Заменить a на b
	В файле .txt дана символьная строка не более 1000 символов. Необходимо
	заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и
	строчные. Результат записать в .txt.
	Данные на входе: Строка из маленьких и больших английских букв,
					 знаков препинания и пробелов.
	Данные на выходе: Строка из маленьких и больших английских
					  букв, знаков препинания и пробелов.
					  
	Пример
		Данные на входе: aabbccddABCD
		Данные на выходе: bbaaccddBACD
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
