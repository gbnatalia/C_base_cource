#include <stdio.h>
#include <locale.h>

/** ������ 3. ��� ����� ������
    ������ ����� ����� � ����������, ����� ��, ��� ��� ��� ����� ������
    ������ �� �����: ���� ����� �����
    ������ �� ������: YES ��� NO

    ������ �1
        ������ �� �����: 2684
        ������ �� ������: YES
    ������ �2
        ������ �� �����: 2994
        ������ �� ������: NO
 */


int main() {
    int num;
    char res[4];

    setlocale(LC_ALL, "Rus");

    printf("������� ����� �����: ");
    scanf("%d", &num);

    sprintf(res,"YES");
    while (num) {
        if (num % 2){
            sprintf(res,"NO");
            break;
        }
        num/=10;
    }
    printf( "%s\n", res);
    return 0;
}
