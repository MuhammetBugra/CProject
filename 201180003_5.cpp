#include <stdio.h>

int main() {
	int i, max, min, N, x;
	printf("Kac sayi olacagini giriniz: ");
	scanf_s("%d", &N);
	if (N > 10) { printf("10 dan buyuk bir sayi giremezsiniz."); }
	else {
	printf("Sayilari giriniz:\n");
	scanf_s("%d", &x);
	max = x; min = x;
	for (i = 1;i < N;i++) {
		scanf_s("%d", &x);
		if (x > max) { max = x; }
		if (x < min) { min = x; }
	}
	printf("En buyuk sayi: %d\n", max);
	printf("En kucuk sayi: %d", min);
	}
	return 0;
}