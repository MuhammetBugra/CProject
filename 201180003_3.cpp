#include <stdio.h>

int Indirimuygula(int urun1, int urun2) {
	int tutar;
	tutar = urun1 + urun2;
	if (tutar <= 200) {
		printf("\nToplam odenecek tutar: %d", tutar); }
	else {
		tutar = urun1 + (urun2 * 75 / 100);
		printf("\nToplam odenecek tutar: %d", tutar); }
	return 0;
}
int main() {
	int urun1, urun2;
	printf("Lutfen birinci urunun fiyatini giriniz: ");
	scanf_s("%d", &urun1);
	printf("Lutfen ikinci urunun fiyatini giriniz: ");
	scanf_s("%d", &urun2);
	Indirimuygula(urun1, urun2);
	return 0;
}
