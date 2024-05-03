#include <stdio.h>
#include <math.h>

int is_perfect_square(int num) {
    int root = (int)sqrt(num);
    return (root * root == num); 
}

int count_perfect_squares(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (is_perfect_square(i)) {
            count++;
        }
    }
    return count;
}

void print_perfect_squares(int n) {
    printf("Cac so chinh phuong nho hon %d:\n", n);
    for (int i = n - 1; i > 0; i--) {
        if (is_perfect_square(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    if (n > 0) {
        int count = count_perfect_squares(n); 
        printf("So luong so chinh phuong nho hon %d la: %d\n", n, count);
        print_perfect_squares(n); 
    } else {
        printf("Vui long nhap so nguyen duong.\n");
    }

    return 0;
}
