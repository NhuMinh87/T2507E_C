#include <stdio.h>
#include <stdlib.h>

int tim_so_gan_nhat(int arr[], int n, int x) {
    int so_gan_nhat = arr[0];
    int chenh_lech = abs(x - arr[0]);

    for (int i = 1; i < n; i++) {
        int chenh_lech_hien_tai = abs(x - arr[i]);
        if (chenh_lech_hien_tai < chenh_lech) {
            chenh_lech = chenh_lech_hien_tai;
            so_gan_nhat = arr[i];
        }
    }

    return so_gan_nhat;
}
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    int so_gan_nhat = tim_so_gan_nhat(arr, n, x);
    printf("So gan %d nhat trong mang la: %d\n", x, so_gan_nhat);

    return 0;
}