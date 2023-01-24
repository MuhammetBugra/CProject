#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
struct ogrencibilgi {
	char isim[30], soyisim[30], mail[30], ogrno[30], telno[30]; 
} dizi[10], ob[30];
void ekle() {
	int i, n, a = 0, j;
	system("cls");
	FILE* dosya = fopen("201180003.txt", "a+");
	if (dosya == NULL) {
	printf("Dosya bulunamadi."); }
	else {
	while (!feof(dosya)) {
	fscanf(dosya, "%s%s%s%s%s", ob[a].isim, ob[a].soyisim, ob[a].ogrno, ob[a].telno, ob[a].mail);
	a++; }
	printf("Kac Kisi Kaydedeceksiniz: ");
	scanf("%d", &n);
	for (i = (a - 1);i < (a + n - 1);i++) {
	fonksiyon3:
	printf("Ogrenci Bilgilerini Girin:\n");
	printf("Ogrenci Adi: ");
	scanf("%s", ob[i].isim);
	printf("Ogrenci Soyadi: ");
	scanf("%s", ob[i].soyisim);
	printf("Ogrenci No: ");
	scanf("%s", ob[i].ogrno);
	for (j = 1;j < (a - 1);j++) {
	if (ara(ob[i].ogrno, ob[j].ogrno) == 0) { system("cls");
	printf("Girdiginiz ogrenci numarasi mevcuttur.\n");
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[0].isim, ob[0].soyisim, ob[0].ogrno, ob[0].telno, ob[0].mail);
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[j].isim, ob[j].soyisim, ob[j].ogrno, ob[j].telno, ob[j].mail); goto fonksiyon3; } }
	printf("Ogrenci Telefon No: ");
	scanf("%s", ob[i].telno);
	for (j = 1;j < (a - 1);j++) {
	if (ara(ob[i].telno, ob[j].telno) == 0) { system("cls");
	printf("Girdiginiz telefon numarasi mevcuttur.\n");
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[0].isim, ob[0].soyisim, ob[0].ogrno, ob[0].telno, ob[0].mail);
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[j].isim, ob[j].soyisim, ob[j].ogrno, ob[j].telno, ob[j].mail); goto fonksiyon3; } }
	printf("Ogrenci Maili: ");
	scanf("%s", ob[i].mail);
	for (j = 1;j < (a - 1);j++) {
	if (ara(ob[i].mail, ob[j].mail) == 0) { system("cls");
	printf("Girdiginiz mail adresi mevcuttur.\n");
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[0].isim, ob[0].soyisim, ob[0].ogrno, ob[0].telno, ob[0].mail);
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[j].isim, ob[j].soyisim, ob[j].ogrno, ob[j].telno, ob[j].mail); goto fonksiyon3; } }
	fprintf(dosya, "%20s\t%20s\t%15s\t%15s\t%20s\n", ob[i].isim, ob[i].soyisim, ob[i].ogrno, ob[i].telno, ob[i].mail);
	system("cls");
	printf("Ogrenci alimi tamamlandi.\n"); } }
	fclose(dosya);
	_getch();
	system("cls");
}
void bul() {
	int f1;
	system("cls");
	fonksiyon1:
	printf("1-)Telefon Numarasina Gore Bul\n2-)Ogrenci Numarasina Gore Bul\n3-)Mail Adresine Gore Bul\n4-)Ust Menuye Don\n");
	printf("Lutfen Seciminizi Yapiniz: ");
	scanf("%d", &f1);
	switch (f1) {
	case 1:telbul(f1); _getch(); system("cls"); goto fonksiyon1; break;
	case 2:nobul(f1); _getch(); system("cls"); goto fonksiyon1; break;
	case 3:mailbul(f1); _getch(); system("cls"); goto fonksiyon1; break;
	case 4:_getch(); system("cls"); break;
	default: system("cls");
		     printf("Hatali sayi girdiniz. Lutfen tekrar deneyiniz.\n");
		     goto fonksiyon1; break; }
}
void sirala() {
	int f2;
	system("cls");
	fonksiyon2:
	printf("1-)Isme Gore Arama\n2-)Ogrenci Numarasina Gore Arama\n3-)Ust Menuye Don\n");
	printf("Lutfen Seciminizi Yapiniz: ");
	scanf("%d", &f2);
	switch (f2) {
	case 1:ismegore(f2); _getch(); system("cls"); goto fonksiyon2; break;
	case 2:nogore(f2); _getch(); system("cls"); goto fonksiyon2; break;
	case 3:_getch(); system("cls"); break;
	default: system("cls");
		     printf("Hatali sayi girdiniz. Lutfen tekrar deneyiniz.\n");
			 goto fonksiyon2; break; }
}
int telbul(int f1) {
	int a = 0, i, b = 0, j;
	char n[30];
	system("cls");
	printf("Telefon Numarasi Giriniz: ");
	scanf("%s", &n);
	FILE* dosya = fopen("201180003.txt", "r");
	while (!feof(dosya)) {
	fscanf(dosya, "%s%s%s%s%s", ob[a].isim, ob[a].soyisim, ob[a].ogrno, ob[a].telno, ob[a].mail);
	a++; }
	for (i = 0;i < (a - 1);i++) {
	if (ara(n, ob[i].telno) == 0)  {
	b = 1; j = i; } }
	if (b == 1) {
	printf("Aradiginiz Ogrenci: \n");
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[0].isim, ob[0].soyisim, ob[0].ogrno, ob[0].telno, ob[0].mail);
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[j].isim, ob[j].soyisim, ob[j].ogrno, ob[j].telno, ob[j].mail); }
	else {
	printf("Aradiginiz ogrenci mevcut degildir."); } 
	fclose(dosya);
	return 0;
}
int nobul(int f1) {
	int a = 0, i, b = 0, j;
	char n[30];
	system("cls");
	printf("Okul Numarasi Giriniz: ");
	scanf("%s", &n);
	FILE* dosya = fopen("201180003.txt", "r");
	while (!feof(dosya)) {
	fscanf(dosya, "%s%s%s%s%s", ob[a].isim, ob[a].soyisim, ob[a].ogrno, ob[a].telno, ob[a].mail);
	a++; }
	for (i = 0;i < (a - 1);i++) {
	if (ara(n, ob[i].ogrno) == 0) {
	b = 1; j = i; } }
	if (b == 1) {
	printf("Aradiginiz Ogrenci: \n");
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[0].isim, ob[0].soyisim, ob[0].ogrno, ob[0].telno, ob[0].mail);
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[j].isim, ob[j].soyisim, ob[j].ogrno, ob[j].telno, ob[j].mail);}
	else {
	printf("Aradiginiz ogrenci mevcut degildir."); } 
	fclose(dosya);
	return 0;
}
int mailbul(int f1) {
	char n[30];
	int a = 0, i, b = 0, j;
	system("cls");
	printf("Mail Adresi Giriniz: ");
	scanf("%s", &n);
	FILE* dosya = fopen("201180003.txt", "r");
	while (!feof(dosya)) {
	fscanf(dosya, "%s%s%s%s%s", ob[a].isim, ob[a].soyisim, ob[a].ogrno, ob[a].telno, ob[a].mail);
	a++; }
	for (i = 0;i < (a - 1);i++) {
	if (ara(n, ob[i].mail) == 0) {
	b = 1; j = i; } }
	if (b == 1) {
	printf("Aradiginiz Ogrenci: \n");
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[0].isim, ob[0].soyisim, ob[0].ogrno, ob[0].telno, ob[0].mail);
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[j].isim, ob[j].soyisim, ob[j].ogrno, ob[j].telno, ob[j].mail); }
	else {
	printf("Aradiginiz ogrenci mevcut degildir."); }
	fclose(dosya);
	return 0;
}
int ismegore(int f2) {
	int a = 0, i, j;
	system("cls");
	FILE* dosya = fopen("201180003.txt", "r");
	while (!feof(dosya)) {
	fscanf(dosya, "%s%s%s%s%s", ob[a].isim, ob[a].soyisim, ob[a].ogrno, ob[a].telno, ob[a].mail);
	a++; }
	for (i = (a - 2);i > 0;i--) {
	for (j = (a - 2);j > 0;j--) {
	if (ara1(ob[i].isim, ob[j].isim) < 0) {
	dizi[0] = ob[i];
	ob[i] = ob[j];
	ob[j] = dizi[0]; } } }
	printf("Ogrenci Adina Gore Siralama: \n");
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[0].isim, ob[0].soyisim, ob[0].ogrno, ob[0].telno, ob[0].mail);
	for (i = (a-2);i > 0;i--) {
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[i].isim, ob[i].soyisim, ob[i].ogrno, ob[i].telno, ob[i].mail); }
	fclose(dosya);
	return 0;
}
int nogore(int f2) {
	int a = 0, i, j;
	system("cls");
	FILE* dosya = fopen("201180003.txt", "r");
	while (!feof(dosya)) {
	fscanf(dosya, "%s%s%s%s%s", ob[a].isim, ob[a].soyisim, ob[a].ogrno, ob[a].telno, ob[a].mail);
	a++; }
	for (i = (a - 2);i > 0;i--) {
	for (j = (a - 2);j > 0;j--) {
	if (ara1(ob[i].ogrno, ob[j].ogrno) < 0) {
	dizi[0] = ob[i];
	ob[i] = ob[j];
	ob[j] = dizi[0]; } } }
	printf("Ogrenci Numarasina Gore Siralama: \n");
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[0].isim, ob[0].soyisim, ob[0].ogrno, ob[0].telno, ob[0].mail);
	for (i = (a - 2);i > 0;i--) {
	printf("%20s\t%20s\t%15s\t%15s\t%20s\n", ob[i].isim, ob[i].soyisim, ob[i].ogrno, ob[i].telno, ob[i].mail); }
	fclose(dosya);
	return 0;
}
int ara(char m[], char n[]) {
	int a = 0, i = 0;
	while (m[i] != '\n' && n[i] != '\0') {
	if (m[i] != n[i]) {
	a = 1; break; }
	i++; }
	if (a == 0)
	return 0;
	else
	return 1;
}
int ara1(char m[], char n[]) {
	int i = 0;
	while (m[i] == n[i])
	if (m[i++] == '\n')
	return 0;
	return (m[i] - n[i]);
}
int main(void) {
	while(1) {
	int f;
    fonksiyon:
	printf("1-)Kullanici Ekle\n2-)Kullanici Bul\n3-)Kullanici Sirala\n4-)Cikis\n");
	printf("Lutfen Seciminizi Yapin: ");
	scanf("%d", &f);
	switch (f) {
	case 1:ekle(); break;
	case 2:bul(); break;
	case 3:sirala(); break;
	case 4:printf("Sistemden cikis yapiliyor...");
		   exit(0);
	default: system("cls"); 
		     printf("Hatali sayi girdiniz. Lutfen tekrar deneyiniz.\n");
		     goto fonksiyon; break; } }
}