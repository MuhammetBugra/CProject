#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int onlukbul(int f) {
	int a, i = 0, n;
	int* dizi = malloc(i * sizeof(int));
	system("cls");
	fonksiyon1:
	printf("Bir Sayi Giriniz: ");
	scanf_s("%d", &n);
	printf("Sayi Hangi Tabana Cevirilsin: ");
	scanf_s("%d", &a);
	if (a < 2 || a>10) {
	system("cls");
	printf("Hatali sayi girdiniz. Lutfen 2 ile 10 arasinda bir taban giriniz. \n");
	goto fonksiyon1; }
	while (n >= 1) {
	i++;
	dizi[i] = n % a;
	n = n / a; }
	printf("Sayinin %d Tabanindaki Karsiligi: ", a);
	for (i = i;i > 0;i--) {
	printf("%d", dizi[i]); }
	return 0;
}
int Digertabanlaribul(int f) {
	int a, b = 1, i = 0, j = 0, sonuc = 0, n;
	system("cls");
	fonksiyon2:
	printf("Bir Sayi Giriniz: ");
	scanf_s("%d", &n);
	printf("Sayi Hangi Tabandan Cevirilsin: ");
	scanf_s("%d", &a);
	if (a < 2 || a>10) {
	system("cls");
	printf("Hatali sayi girdiniz. Lutfen 2 ile 10 arasinda bir taban giriniz. \n");
	goto fonksiyon2; }
	while (n >= 1) {
	if (n % 10 >= a) {
	system("cls");
	printf("Hatali taban denediniz. Sayinin harfleri tabandan kucuk olmak zorundadir. Tekrar deneyiniz. \n");
	goto fonksiyon2; }
	i++;
	sonuc += n % 10 * b;
	n = n / 10;
	b *= a;
	j++; }
	printf("Sayinin 10'luk Tabandaki Karsiligi: %d", sonuc);
	return 0;
}
int main() {
	int f, n, g;
    fonksiyon:
	printf("1-) 10'luk Tabandan Cevir\n2-) 10'luk Tabana Cevir\n3-) Cikis\n");
	printf("Fonksiyonu Giriniz: ");
	scanf_s("%d", &f);
	switch (f) {
	case 1: onlukbul(f); break;
	case 2: Digertabanlaribul(f); break;
	case 3: printf("Sistemden cikis yapiliyor...");
		    exit(0); break;
	default: system("cls");
		     printf("Hatali sayi girdiniz. Lutfen tekrar deneyiniz.\n");
			 goto fonksiyon; break; }
	printf("\n\nAna menuye donmek icin 0'a basiniz.");
	scanf_s("%d", &g);
	switch (g) {
	case 0: system("cls");
		    goto fonksiyon; break; }
	return 0;
}