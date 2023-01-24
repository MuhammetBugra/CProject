#include <stdio.h>

int Toplambul(int N) {
	int i, sonuc = 0;
	for (i = 1;i <= N;i += 2) {
		sonuc = i + sonuc; }
	printf("N sayisina kadar olan tek sayilarin toplami: %d", sonuc);
	return 0;
}
int main() {
	int N;
	printf("Lutfen bir sayi giriniz: ");
	scanf_s("%d", &N);
	Toplambul(N);
	return 0;
}