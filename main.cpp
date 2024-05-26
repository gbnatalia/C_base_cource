#include <stdio.h>
#include <locale.h>

void printSymvol(char * symvol, int count){
    for (int i = 0; i < count; i++){
        printf(symvol);
    }
}


void task1(){
    printf("Hello World!\n");
}

void task2(){
    char * text[3] = {"Let’s", "go", "to walk"};
    for (int i = 0; i < 3; i++){
        //printSymvol("\t", i);
        printSymvol("  ", i);
        printf(text[i]);
        printf("\n");
    }

}

void task3(){
    const int len_osn = 9;

    for ( int i = 0; i < 4; i++){
        printSymvol(" ", (len_osn - (i * 2 + 1)) / 2);
        printSymvol("*", i * 2 + 1);
        printSymvol(" ", (len_osn - (i * 2 + 1)) / 2);
        printf("\n");
    }
    printf("  HH HH  \n");
    printf("  ZZZZZ  \n");
}


void task4(){

    printf(" -----       ----- \n");
    for (int i = 0; i < 2; i++){
        printf("/     \\     /     \\ \n");
        printf("       ----- \n");
        printf("\\     /     \\     / \n");
        printf(" -----       ----- \n");
    }
}


int main() {
    setlocale(LC_ALL, "Rus");
    printf("\n");
    task1(); printf("\n");
    task2(); printf("\n");
    task3(); printf("\n");
    task4(); printf("\n");
    return 0;
}

