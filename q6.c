#include <stdio.h>

int ocorre(char *str1, char *str2) {
    char *p1, *p2, *p3;

    if (*str2 == '\0') return 1; 

    for (p1 = str1; *p1 != '\0'; p1++) {
        if (*p1 == *str2) { 
            p2 = p1;
            p3 = str2;

            while (*p2 == *p3 && *p3 != '\0') {
                p2++;
                p3++;
            }

            if (*p3 == '\0') return 1; 
        }
    }

    return 0; 
}

int main() {
    char str1[100], str2[100];
    
    printf("Digite a primeira string: ");
    gets(str1); 
    printf("Digite a segunda string: ");
    gets(str2);

    if (ocorre(str1, str2)) {
        printf("A segunda string ocorre dentro da primeira.\n");
    } else {
        printf("A segunda string nao ocorre dentro da primeira.\n");
    }

    return 0;
}
