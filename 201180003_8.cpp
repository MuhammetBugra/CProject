#include <stdio.h>

int Sayininbolenleri(int x, int N) {
	int i;
	for (i = 1;i <= N;i++) {
		if (i % x == 0)
		printf("%d ", i); }
	return 0;
}
int main() {
	int x, N;
	printf("N ve x sayilarini giriniz: ");
	scanf_s("%d %d", &N, &x);
	if (N < x) { printf("Hatali sayi girdiniz."); }
	else {
	printf("0 dan N e kadar olan ve x e bolunebilen sayilar:\n");
	Sayininbolenleri(x, N); }
	return 0;
}