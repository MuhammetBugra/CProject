#include <stdio.h>

int Topla(int sayi1, int sayi2) {
	int sonuc;
	sonuc = sayi1 + sayi2;
	printf("\nSonuc: %d", sonuc);
	return 0;
}
int Cikar(int sayi1, int sayi2) {
	int sonuc;
	sonuc = sayi1 - sayi2;
	printf("\nSonuc: %d", sonuc);
	return 0;
}
int Carp(int sayi1, int sayi2) {
	int sonuc;
	sonuc = sayi1 * sayi2;
	printf("\nSonuc: %d", sonuc);
	return 0;
}
int Bol(float sayi1, float sayi2) {
	float sonuc;
	if (sayi2 == 0) { printf("Hatali sayi girdiniz."); }
	else {
		sonuc = sayi1 / sayi2;
		printf("\nSonuc: %.2f", sonuc); }
	return 0;
}
int main() {
	int sayi1, sayi2;
	char islem;
	printf("Lutfen birinci sayiyi giriniz: ");
	scanf_s("%d", &sayi1);
	printf("Lutfen ikinci sayiyi giriniz: ");
	scanf_s("%d", &sayi2);
	printf("Islemler: + - * / \n");
	printf("Lutfen yapilacak islemi seciniz: ");
	scanf_s(" %c", &islem);
	switch (islem) {
	case '+':Topla(sayi1, sayi2); break;
	case '-':Cikar(sayi1, sayi2); break;
	case '*':Carp(sayi1, sayi2); break;
	case '/':Bol(sayi1, sayi2); break;
	}
	return 0;
}