#include <stdio.h>

int main() {
  int sum = 0;

  int n;
  printf("Nhap so luong phan tu trong day: ");
  scanf("%d", &n);

  int array[n];
  for (int i = 0; i < n; i++) {
    printf("Nhap phan tu thu %d: ", i + 1);
    scanf("%d", &array[i]);

    if (array[i] < 0) {
      break;
    }

    sum += array[i];
  }

  printf("Tong cac so la: %d\n", sum);
}

