#include <stdio.h>

int main() {
  int n, count = 0, sum = 0;
  float trungbinhcong;

  printf("Nhap so luong phan tu trong day: ");
  scanf("%d", &n);
  int array[n];
  for (int i = 0; i < n; i++) {
    printf("Nhap phan tu thu %d: ", i + 1);
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < n; i++) {
    if (array[i] % 2 != 0 && array[i] % 3 != 0) {
      count++;
      sum += array[i];
    }
  }

  trungbinhcong = sum / count;

  printf("Co %d so le khong chia het cho 3 trong day.\n", count);
  printf("Trung binh cong cac so la: %.2f\n", trungbinhcong);

  return 0;
}
