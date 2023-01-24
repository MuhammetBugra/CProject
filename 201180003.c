#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int buyukkucukbul(int n) {
	int min, max, i;
	int* dizi = malloc(n * sizeof(int));
	for (i = 0;i < n;i++) {
	dizi[i] = rand() % 100 + 1;
	if (i == 0) { min = dizi[i]; max = dizi[i]; }
	if (dizi[i] < min) { min = dizi[i]; }
	if (dizi[i] > max) { max = dizi[i]; } }
	printf("\n");
	printf("Dizinin");
	for (i = 0;i < n;i++) {
	if (dizi[i] == min) { printf(" %d.", i); } }
	printf(" elemani olan %d en kucuk sayidir.\n", min);
	printf("Dizinin");
	for (i = 0;i < n;i++) {
	if (dizi[i] == max) { printf(" %d.",i); } }
	printf(" elemani olan %d en buyuk sayidir.", max);
	return 0;
}
int Siralama(int n) {
	int i, a, j;
	int* dizi = malloc(n * sizeof(int));
	printf("Dizi: ");
	for (i = 0;i < n;i++) {
	dizi[i] = rand() % 100 + 1;
	printf("%d ", dizi[i]); }
	printf("\n");
	for (i = 0;i < n;i++) {
	for (j = 0;j < n;j++) {
	if (dizi[j] <= dizi[i]) {
	a = dizi[i];
	dizi[i] = dizi[j];
	dizi[j] = a; } } }
	printf("Sirali Dizi: ");
	for (i = 0;i < n;i++) {
	printf("%d ", dizi[i]); }
	return 0;
}
int Terstenyaz(int n) {
	int i;
	int* dizi = malloc(n * sizeof(int));
	printf("Dizi: ");
	for (i = 0;i < n;i++) {
	dizi[i] = rand() % 100 + 1;
	printf("%d ", dizi[i]); }
	printf("\n");
	printf("Ters Dizi: ");
	for (i = n - 1;i >= 0;i--) {
	printf("%d ", dizi[i]); }
	return 0;
}
int main() {
	int i, n, f;
	printf("Eleman Sayisini Girin: ");
	scanf_s("%d", &n);
	srand(time(NULL));
	printf("1-)Dizideki En Buyuk ve En Kucuk Degeri Bulma\n2-)Diziyi Buyukten Kucuge Dogru Siralama\n3-)Diziyi Tersten Yazma\n");
	printf("Kullanilacak Fonksiyonu Girin: ");
	scanf_s("%d", &f);
	switch (f) {
	case 1:buyukkucukbul(n); break;
	case 2:Siralama(n); break;
	case 3:Terstenyaz(n); break; }
	return 0;
}
