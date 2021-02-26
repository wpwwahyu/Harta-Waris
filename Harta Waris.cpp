#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define bagi 24

void menu();


void gotoxy(short x, short y);
void gotoxy(short x, short y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
char ulang;
float tirkah, hutang, wasiat, sisa, harta, Istri, Suami, AP, AL, Ayah, Ibu, jumlah, Sisa, Bagian, Bagian_lk, Bagian_pr, Baitulmaal;
int jwb;
void istri_anaklkpr()
{
	int lk, pr, su, ay, ib;
	gotoxy(20, 11);
	printf("Berapa jumlah anak laki-laki : ");
	scanf("%d", &lk);
	gotoxy(20, 12);
	printf("Berapa jumlah anak perempuan : ");
	scanf("%d", &pr);
	gotoxy(20, 13);
	printf("Berapa jumlah suami          : ");
	scanf("%d", &su);
	gotoxy(20, 14);
	printf("Berapa jumlah ayah           : ");
	scanf("%d", &ay);
	gotoxy(20, 15);
	printf("Berapa jumlah ibu            : ");
	scanf("%d", &ib);
	Ibu = (4 * harta) / 24;
	Ayah = (4 * harta) / 24;
	Suami = (6 * harta) / 24;
	Sisa = (harta - Ibu - Ayah - Suami);
	Bagian_lk = Sisa / ((float)pr / 2 + (float)lk);
	Bagian_pr = (Sisa - (Bagian_lk * lk)) / pr;
	gotoxy(20, 17);
	printf("===============================");
	gotoxy(20, 18);
	printf("  HASIL PEMBAGIAN HARTA WARIS  ");
	gotoxy(20, 19);
	printf("===============================");
	gotoxy(10, 21);
	printf("Bagian %d anak perempuan = %.2f dan @anak perempuan = %.2f\n", pr, Sisa - (Bagian_lk * lk), Bagian_pr);
	gotoxy(10, 22);
	printf("Bagian %d anak laki-laki = %.2f dan @anak laki      = %.2f\n", lk, Bagian_lk * lk, Bagian_lk);
	gotoxy(10, 23);
	printf("Bagian ibu                                           = %.2f\n", Ibu * ib);
	gotoxy(10, 24);
	printf("Bagian ayah                                          = %.2f\n", Ayah * ay);
	gotoxy(10, 25);
	printf("Bagian suami                                         = %.2f", Suami );
	gotoxy(10, 26);
	printf("Total                                                =%.2f\n", (Ibu + Ayah + Suami + Sisa));
	gotoxy(10, 27);
	fflush(stdin);
	
	printf("Apakah Anda ingin menghitung lagi? Y/N: ");
	scanf("%c", &ulang);
	
	if(ulang == 'Y' || 'y')
	{
		system("cls");
		menu();
	}
	if(ulang=='N' || 'n')
	{
		exit(0);
	}
}
void istri_anakpr()
{
	int su, ay, ib, pr;
	gotoxy(20, 11);
	printf("Berapa jumlah anak perempuan : ");
	scanf("%d", &pr);
	gotoxy(20, 12);
	printf("Berapa jumlah suami          : ");
	scanf("%d", &su);
	gotoxy(20, 13);
	printf("Berapa jumlah ayah           : ");
	scanf("%d", &ay);
	gotoxy(20, 14);
	printf("Berapa jumlah ibu            : ");
	scanf("%d", &ib);
	gotoxy(20, 16);
	printf("===============================");
	gotoxy(20, 17);
	printf("  HASIL PEMBAGIAN HARTA WARIS  ");
	gotoxy(20, 18);
	printf("===============================");
	if (pr < 2 && pr != 0)
	{
		AP = (6 * harta) / 13;
		Suami = (3 * harta) / 13;
		Ibu = (2 * harta) / 13;
		Sisa = (harta - AP - Suami - Ibu);
		Ayah = Sisa;
		gotoxy(20, 20);
		printf("Bagian anak perempuan = %.2f", AP );
		gotoxy(20, 21);
		printf("Bagian ibu            = %.2f", Ibu );
		gotoxy(20, 22);
		printf("Bagian ayah           = %.2f", Ayah);
		gotoxy(20, 23);
		printf("Bagian suami          = %.2f", Suami);
		gotoxy(20, 24);
		printf("Total                 = %.2f\n", (Ibu + Suami + AP + Ayah));
	}
	else if (pr >= 2)
	{
		AP = (8 * harta) / 15;
		Suami = (3 * harta) / 15;
		Ibu = (2 * harta) / 15;
		Sisa = (harta - AP - Suami - Ibu);
		Ayah = Sisa;
		gotoxy(10, 20);
		printf("Bagian anak perempuan = %.2f dan @%d anak = %.2f \n", AP, pr, AP / pr );
		gotoxy(10, 21);
		printf("Bagian ibu                                 = %.2f\n", Ibu );
		gotoxy(10, 22);
		printf("Bagian ayah                                = %.2f\n", Ayah);
		gotoxy(10, 23);
		printf("Bagian suami                               = %.2f\n", Suami);
		gotoxy(10, 24);
		printf("Total                                      = %.2f\n", (Ibu + Suami + AP + Ayah));
		gotoxy(10, 27);
		fflush(stdin);
		printf("Apakah Anda ingin menghitung lagi? Y/N: ");
		scanf("%c", &ulang);
		if(ulang == 'Y' || 'y')
		{
			system("cls");
			menu();
		}
		else
		{
			exit(0);
		}
	}
}
void istri_anaklk()
{
	int su, ay, ib, lk;
	gotoxy(20, 11);
	printf("Berapa jumlah anak laki-laki : ");
	scanf("%d", &lk);
	gotoxy(20, 12);
	printf("Berapa jumlah suami          : ");
	scanf("%d", &su);
	gotoxy(20, 13);
	printf("Berapa jumlah ayah           : ");
	scanf("%d", &ay);
	gotoxy(20, 14);
	printf("Berapa jumlah ibu            : ");
	scanf("%d", &ib);
	gotoxy(20, 16);
	printf("===============================");
	gotoxy(20, 17);
	printf("  HASIL PEMBAGIAN HARTA WARIS  ");
	gotoxy(20, 18);
	printf("===============================");
	Ibu = (4 * harta) / 24;
	Ayah = (4 * harta) / 24;
	Suami = (6 * harta) / 24;
	Sisa = (harta - Ibu - Ayah - Suami);
	gotoxy(10, 20);
	printf("Bagian %d anak laki-laki = %.2f dan @anak laki = %.2f\n", lk, Sisa , Sisa / lk);
	gotoxy(10, 21);
	printf("Bagian ibu                                      = %.2f\n", Ibu * ib);
	gotoxy(10, 22);
	printf("Bagian ayah                                     = %.2f\n", Ayah * ay);
	gotoxy(10, 23);
	printf("Bagian suami                                    = %.2f\n", Suami);
	gotoxy(10, 24);
	printf("Total                                           = %.2f\n", (Ibu + Ayah + Suami + Sisa));
	gotoxy(10, 27);
	fflush(stdin);
	printf("Apakah Anda ingin menghitung lagi? Y/N: ");
	scanf("%c", &ulang);
	if(ulang == 'Y' || 'y')
	{
		system("cls");
		menu();
	}
	else
	{
		exit(0);
	}
}
void istri_tidakanak()
{
	int su, ay, ib;
	gotoxy(20, 11);
	printf("Berapa jumlah suami : ");
	scanf("%d", &su);
	gotoxy(20, 12);
	printf("Berapa jumlah ayah  : ");
	scanf("%d", &ay);
	gotoxy(20, 13);
	printf("Berapa jumlah ibu   : ");
	scanf("%d", &ib);
	gotoxy(20, 15);
	printf("===============================");
	gotoxy(20, 16);
	printf("  HASIL PEMBAGIAN HARTA WARIS  ");
	gotoxy(20, 17);
	printf("===============================");
	if (su == 1)
	{

		Suami = (3 * harta / 6);
		Ayah = (1 * harta / 3);
		Ibu = (1 * harta / 6);
		gotoxy(20, 19);
		printf("Bagian suami = %.2f\n", Suami);
		gotoxy(20, 20);
		printf("Bagian ayah  = %.2f\n", Ayah);
		gotoxy(20, 21);
		printf("Bagian ibu   = %.2f\n", Ibu);
		gotoxy(20, 22);
		printf("Total        = %.2f\n", (Suami + Ayah + Ibu));
	}
	if (su == 0)
	{
		Bagian = harta / 3;
		gotoxy(20, 19);
		printf("Bagian      = %.2d\n", 0);
		gotoxy(20, 20);
		printf("Bagian ayah = %.2f\n", Bagian * 2);
		gotoxy(20, 21);
		printf("Bagian ibu  = %.2f\n", Bagian);
		gotoxy(20, 22);
		printf("Total       = %.2f\n", Bagian * 3);
		gotoxy(10, 27);
		fflush(stdin);
		printf("Apakah Anda ingin menghitung lagi? Y/N: ");
		scanf("%c", &ulang);
		if(ulang == 'Y' || 'y')
		{
			system("cls");
			menu();
		}
		else
		{
			exit(0);
		}
	}
}
void suami_anaklkpr()
{
	int lk, pr, is, ay, ib;
	gotoxy(20, 11);
	printf("Berapa jumlah anak laki-laki : ");
	scanf("%d", &lk);
	gotoxy(20, 12);
	printf("Berapa jumlah anak perempuan : ");
	scanf("%d", &pr);
	gotoxy(20, 13);
	printf("Berapa jumlah istri          : ");
	scanf("%d", &is);
	gotoxy(20, 14);
	printf("Berapa jumlah ayah           : ");
	scanf("%d", &ay);
	gotoxy(20, 15);
	printf("Berapa jumlah ibu            : ");
	scanf("%d", &ib);
	Ibu = (4 * harta) / 24;
	Ayah = (4 * harta) / 24;
	Istri = (3 * harta) / 24;
	Sisa = (harta - Ibu - Ayah - Istri);
	Bagian_lk = Sisa / ((float)pr / 2 + (float)lk);
	Bagian_pr = (Sisa - (Bagian_lk * lk)) / pr;
	gotoxy(20, 17);
	printf("===============================");
	gotoxy(20, 18);
	printf("  HASIL PEMBAGIAN HARTA WARIS  ");
	gotoxy(20, 19);
	printf("===============================");
	gotoxy(10, 21);
	printf("Bagian %d anak perempuan = %.2f dan @anak perempuan = %.2f", pr, Sisa - (Bagian_lk * lk), Bagian_pr);
	gotoxy(10, 22);
	printf("Bagian %d anak laki-laki = %.2f dan @anak laki      = %.2f", lk, Bagian_lk * lk, Bagian_lk);
	gotoxy(10, 23);
	printf("Bagian ibu                                           = %.2f", Ibu * ib);
	gotoxy(10, 24);
	printf("Bagian ayah                                          = %.2f", Ayah * ay);
	gotoxy(10, 25);
	printf("Bagian %d istri          = %.2f dan @istri          = %.2f", is, Istri, Istri / is);
	gotoxy(10, 26);
	printf("Total                                                = %.2f\n", (Ibu + Ayah + Istri + Sisa));
	gotoxy(10,27);
	fflush(stdin);
	printf("Apakah Anda ingin menghitung lagi? Y/N: ");
	scanf("%c",&ulang);
	if(ulang=='Y'||'y'){
		system("cls");
		menu();
	}
	else
	{
		exit(0);
	}
}

void suami_tidakanak()
{
	int is, ay, ib;
	gotoxy(20, 11);
	printf("Berapa jumlah istri : ");
	scanf("%d", &is);
	gotoxy(20, 12);
	printf("Berapa jumlah ayah  : ");
	scanf("%d", &ay);
	gotoxy(20, 13);
	printf("Berapa jumlah ibu   : ");
	scanf("%d", &ib);
	gotoxy(20, 15);
	printf("===============================");
	gotoxy(20, 16);
	printf("  HASIL PEMBAGIAN HARTA WARIS  ");
	gotoxy(20, 17);
	printf("===============================");
	if (is >= 1)
	{

		Istri = (1 * harta / 4);
		Ayah = (1 * harta / 2);
		Ibu = (1 * harta / 4);
		gotoxy(10, 19);
		printf("Bagian %d istri = %.2f dan bagian @istri = %.2f", is, Istri, Istri / is);
		gotoxy(10, 20);
		printf("Bagian ayah                               = %.2f", Ayah);
		gotoxy(10, 21);
		printf("Bagian ibu                                = %.2f", Ibu);
		gotoxy(10, 22);
		printf("Total                                     = %.2f\n", (Istri + Ayah + Ibu));
	}
	else if (is == 0)
	{
		Bagian = harta / 3;
		gotoxy(10, 19);
		printf("Bagian istri = %.2d", 0);
		gotoxy(10, 20);
		printf("Bagian ayah   = %.2f", Bagian * 2);
		gotoxy(10, 21);
		printf("Bagian ibu    = %.2f", Bagian);
		gotoxy(10, 22);
		printf("Total         = %.2f\n", Bagian * 3);
	}
	gotoxy(10,27);
	fflush(stdin);
	printf("Apakah Anda ingin menghitung lagi? Y/N: ");
	scanf("%c",&ulang);
	if(ulang=='Y'||'y'){
		system("cls");
		menu();
	}
	else
	{
		exit(0);
	}
}

void suami_anaklk()
{
	int is, ay, ib, lk;
	gotoxy(20, 11);
	printf("Berapa jumlah anak laki-laki : ");
	scanf("%d", &lk);
	gotoxy(20, 12);
	printf("Berapa jumlah istri          : ");
	scanf("%d", &is);
	gotoxy(20, 13);
	printf("Berapa jumlah ayah           : ");
	scanf("%d", &ay);
	gotoxy(20, 14);
	printf("Berapa jumlah ibu            : ");
	scanf("%d", &ib);
	Ibu = (4 * harta) / 24;
	Ayah = (4 * harta) / 24;
	Istri = (3 * harta) / 24;
	Sisa = (harta - Ibu - Ayah - Istri);
	gotoxy(20, 16);
	printf("===============================");
	gotoxy(20, 17);
	printf("  HASIL PEMBAGIAN HARTA WARIS  ");
	gotoxy(20, 18);
	printf("===============================");
	gotoxy(10, 20);
	printf("Bagian %d anak laki-laki = %.2f dan @anak laki = %.2f", lk, Sisa , Sisa / lk);
	gotoxy(10, 21);
	printf("Bagian ibu                                      = %.2f", Ibu * ib);
	gotoxy(10, 22);
	printf("Bagian ayah                                     = %.2f", Ayah * ay);
	gotoxy(10, 23);
	printf("Bagian %d istri          = %.2f dan @istri     = %.2f", is, Istri, Istri / is);
	gotoxy(10, 24);
	printf("Total                                           = %.2f\n", (Ibu + Ayah + Istri + Sisa));
	gotoxy(10,27);
	fflush(stdin);
	printf("Apakah Anda ingin menghitung lagi? Y/N: ");
	scanf("%c",&ulang);
	if(ulang=='Y'||'y'){
		system("cls");
		menu();
	}
	else
	{
		exit(0);
	}
}

void suami_anakpr()
{
	int is, ay, ib, pr;
	gotoxy(20, 11);
	printf("Berapa jumlah anak perempuan : ");
	scanf("%d", &pr);
	gotoxy(20, 12);
	printf("Berapa jumlah istri          : ");
	scanf("%d", &is);
	gotoxy(20, 13);
	printf("Berapa jumlah ayah           : ");
	scanf("%d", &ay);
	gotoxy(20, 14);
	printf("Berapa jumlah ibu            : ");
	scanf("%d", &ib);
	gotoxy(20, 16);
	printf("===============================");
	gotoxy(20, 17);
	printf("  HASIL PEMBAGIAN HARTA WARIS  ");
	gotoxy(20, 18);
	printf("===============================");
	if (pr < 2 && pr != 0)
	{
		AP = (12 * harta) / 24;
		Istri = (3 * harta) / 24;
		Ibu = (4 * harta) / 24;
		Sisa = (harta - AP - Istri - Ibu);
		Ayah = Sisa;
		gotoxy(10, 20);
		printf("Bagian anak perempuan              = %.2f", AP );
		gotoxy(10, 21);
		printf("Bagian ibu                         = %.2f", Ibu );
		gotoxy(10, 22);
		printf("Bagian ayah                        = %.2f", Ayah);
		gotoxy(10, 23);
		printf("Bagian %d istri = %.2f dan @istri = %.2f", is, Istri, Istri / is);
		gotoxy(10, 24);
		printf("Total                              =%.2f\n", (Ibu + Istri + AP + Ayah));

	}
	else if(pr >= 2)
	{
		AP = (16 * harta) / 27;
		Istri = (3 * harta) / 27;
		Ibu = (4 * harta) / 27;
		Sisa = (harta - AP - Istri - Ibu);
		Ayah = Sisa;
		gotoxy(10, 20);
		printf("Bagian anak perempuan              = %.2f", AP );
		gotoxy(10, 21);
		printf("Bagian ibu                         = %.2f", Ibu );
		gotoxy(10, 22);
		printf("Bagian ayah                        = %.2f", Ayah);
		gotoxy(10, 23);
		printf("Bagian %d istri = %.2f dan @istri = %.2f", is, Istri, Istri / is);
		gotoxy(10, 24);
		printf("Total =%.2f\n", (Ibu + Istri + AP + Ayah));
	}
	gotoxy(10,27);
	fflush(stdin);
	printf("Apakah Anda ingin menghitung lagi? Y/N: ");
	scanf("%c",&ulang);
	if(ulang=='Y'||'y'){
		system("cls");
		menu();
	}
	else
	{
		exit(0);
	}
}
void pria()
{
	system("cls");
	gotoxy(25, 1);
	printf("=======================");
	gotoxy(25, 2);
	printf("==MENU PEWARIS PRIA==");
	gotoxy(25, 3);
	printf("=======================");
	gotoxy(25, 4);
	printf("Pilih kondisi pewaris");
	gotoxy(25, 5);
	printf("1. Punya anak laki&perempuan");
	gotoxy(25, 6);
	printf("2. Tidak punya anak");
	gotoxy(25, 7);
	printf("3. Hanya anak laki");
	gotoxy(25, 8);
	printf("4. Hanya anak perempuan");
	gotoxy(25, 9);
	printf("Pilihan: ");
	scanf("%d", &jwb);
	switch(jwb)
	{
	case 1:
		suami_anaklkpr();
		break;
	case 2:
		suami_tidakanak();
		break;
	case 3:
		suami_anaklk();
		break;
	case 4:
		suami_anakpr();
		break;
	default:
		printf("Anda ngawur\n");
		system("cls");
		pria();
		break;
	}

}
void wanita()
{
	system("cls");
	gotoxy(25, 1);
	printf("=======================");
	gotoxy(25, 2);
	printf("==MENU PEWARIS WANITA==");
	gotoxy(25, 3);
	printf("=======================");
	gotoxy(25, 4);
	printf("Pilih kondisi pewaris");
	gotoxy(25, 5);
	printf("1. Punya anak laki&perempuan");
	gotoxy(25, 6);
	printf("2. Tidak punya anak");
	gotoxy(25, 7);
	printf("3. Hanya anak laki");
	gotoxy(25, 8);
	printf("4. Hanya anak perempuan");
	gotoxy(25, 9);
	printf("Pilihan: ");
	scanf("%d", &jwb);
	switch(jwb)
	{
	case 1:
		istri_anaklkpr();
		break;
	case 2:
		istri_tidakanak();
		break;
	case 3:
		istri_anaklk();
		break;
	case 4:
		istri_anakpr();
		break;
	default:
		printf("Anda ngawur\n");
		system("cls");
		wanita();
		break;
	}
}
void menu()
{
	int pewaris;
	gotoxy(15, 1);
	printf("                 ___      ___           ___\n");
	gotoxy(15, 2);
	printf("  \\\\\\      /// ///\\\\\\   |||  \\\\ |||  ///__\n");
	gotoxy(15, 3);
	printf("   \\\\\\ || /// ///==\\\\\\  |||==// |||      \\\\\n");
	gotoxy(15, 4);
	printf("    \\\\\\||/// ///    \\\\\\ ||| \\\\\\ |||  ====//\n");
	printf("\n");
	gotoxy(15, 5);
	printf("*********************************************\n");
	gotoxy(15, 6);
	printf("********APLIKASI HITUNG HARTA WARISAN********\n");
	gotoxy(15, 7);
	printf("*********************************************\n");
	gotoxy(15, 8);
	printf("Masukan jumlah harta  : ");
	scanf("%f", &tirkah);
	gotoxy(15, 9);
	printf("Masukkan jumlah hutang: ");
	scanf("%f", &hutang);
	sisa = tirkah - hutang;
	gotoxy(15, 10);
	printf("Masukkan jumlah wasiat: ");
	scanf("%f", &wasiat);
	harta = sisa - wasiat;
	if(wasiat <= (tirkah / 3))
	{
		gotoxy(15, 11);
		printf("Harta yang bisa diwariskan: %f\n", harta);
	}
	else
	{
		gotoxy(15, 11);
		printf("Maaf jumlah wasiat melebihi 1/3 harta\n");
		gotoxy(15, 12);
		printf("Maka hanya bisa diwasiatkan sebanyak %.2f\n", (tirkah / 3));
		gotoxy(15, 13);
		printf("Harta yang bisa diwariskan: %f", (tirkah - hutang - (tirkah / 3)));
	}
	gotoxy(15, 14);
	printf("Pilih pewaris: ");
	gotoxy(15, 15);
	printf("1. Pria\t\t2. Wanita");
	gotoxy(15, 16);
	printf("Pilihan Anda : ");
	scanf("%d", &pewaris);
	fflush(stdin);
	switch(pewaris)
	{
	case 1:
		pria();
		break;
	case 2:
		wanita();
		break;
	default:
		printf("Anda ngawur\n");
		system("cls");
		menu();
		break;
	}
	system("pause");
}
int main()
{
	menu();
}
