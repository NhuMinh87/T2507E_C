#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Nhap chuoi thu nhat: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0; 

    printf("Nhap chuoi thu hai: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0; 

    char *ket_qua = NULL;

    if (strlen(s1) > strlen(s2)) {
        ket_qua = strstr(s1, s2);
    } else {
        ket_qua = strstr(s2, s1);
    }

    if (ket_qua != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}