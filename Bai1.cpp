#include <stdio.h>

void print_multiples_of_seven() {
    printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
    for (int i = 10; i <= 99; i++) { // giới hạn trong các số có 2 chữ số
        if (i % 7 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    print_multiples_of_seven(); // Gọi hàm để in các số nguyên có 2 chữ số và là bội của 7
    return 0;
}
