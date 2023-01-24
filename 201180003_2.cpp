#include <stdio.h>

int hesapla(int X) {
	if (X > 0) {
		printf("X=pozitif"); }
	if (X == 0) {
		printf("X=sifir"); }
	if (X < 0) {
		printf("X=negatif"); }
	return 0;
}
int main() {
	int X;
	printf("Lutfen bir sayi giriniz: ");
	scanf_s("%d", &X);
	hesapla(X);
	return 0;
}