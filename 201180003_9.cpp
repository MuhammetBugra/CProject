#include <stdio.h>

int yildizlar(int boy, int en) {
	int n, i, j, bosluk = 0;
	for (i = 0;i < boy;i++) {
	for (j = 0;j < en;j++)
	    { printf("*"); }
	printf("\n");
	for (n = 0;n <= bosluk;n++) { printf(" "); } bosluk++; }
	return 0;
}
int main() {
	int en, boy;
	printf("Satir ve Sutun sayisini giriniz: ");
	scanf_s("%d %d", &boy, &en);
	yildizlar(boy, en);
	return 0;
}