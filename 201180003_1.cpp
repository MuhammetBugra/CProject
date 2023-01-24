#include <stdio.h>
#include <math.h>

int Karehesapla(int X) {
	int sonuc;
	sonuc = pow(X, 2);
	printf("X sayisinin karesi: %d",sonuc);
	return 0;
}
int main() {
	int X;
	printf("Lutfen bir sayi giriniz: ");
	scanf_s("%d", &X);
	Karehesapla(X);
	return 0;
}