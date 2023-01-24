#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Sirala(int dizi[], int n) {
	int i, j, a, b = 2;
	for (i = 1;i < n;i++) {
	j = i-1;
	while (j >= 0 && dizi[j + 1] > dizi[j]) {
	a = dizi[j + 1];
	dizi[j + 1] = dizi[j];
	dizi[j] = a;
	j--;
	printf("%d.iterasyon: ", b);
	Ekranayaz(dizi, n);
	b++; } }
	return 0;
}
int Ekranayaz(int dizi[], int n) {
	int i;
	for (i = 0;i < n;i++) {
	printf("%d ", dizi[i]); }
	printf("\n");
	return 0;
}
int main() {
	int i, n;
	printf("Eleman Sayisini Girin: ");
	scanf_s("%d", &n);
	int* dizi = malloc(n * sizeof(int));
	srand(time(NULL));
	printf("1.iterasyon: ");
	for (i = 0;i < n;i++) {
	dizi[i] = rand();
	printf("%d ", dizi[i]); }
	printf("\n");
	Sirala(dizi, n);
	return 0;
}