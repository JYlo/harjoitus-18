/***********************************************
*Harjoitus 18
*JY
*Kuvaus:
*Harjoitus 18 (Palautus vko 46)
*Tee ohjelma, joka kysyy viiden koiran nimet ja i�t.
*Tiedot tallennetaan tietuetaulukkoon.
*a) j�rjest� tiedot ik� -kent�n mukaan suuruusj�rjestykseen
*(pienimm�st� suurimpaan). Ohjelma tulostaa lopuksi
*jarjestetyn taulukon n�yt�lle.
*b) j�rjest� tiedot nimi -kent�n mukaan aakkosj�rjestyksess�
*Ohjelma tulostaa lopuksi jarjestetyn taulukon n�ytolle.
*
*Lajittelu tulee toteuttaa siten, ett� se toimisi samoin
*my�s 50 tai 5000 koiran tapauksssa.
*
*Versio: 1.0
*PVM: 12.11.2014
************************************************/

/* #include <iostream>
using namespace std;

const int MAX_K = 5;

struct KOIRATIEDOT
{
	char nimi[20];
	int ika;
};

int main()
{
	KOIRATIEDOT koira[MAX_K+1];
	int ind;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Anna " << ind + 1 << ". " << "koiran nimi ja ika: " << endl;
		cin >> koira[ind].nimi >> koira[ind].ika;
	}
	cout << endl;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Koiran ik� ja nimi: ";
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
	cout << endl;

	int i;
	int j;
	cout << "koirien iat ennen jarjestamista: ";

	

	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << koira[ind].ika << " ";
	}
	cout << endl;
	cout << "Jarjestetaan ...." << endl;
	cout << endl;

	for (i = 0; i < MAX_K - 1; i++)
		for (j = i + 1; j < MAX_K; j++)
			if (koira[i].ika > koira[j].ika)
			{
				koira[MAX_K] = koira[i];
				koira[i] = koira[j];
				koira[j] = koira[MAX_K];
			}
	cout << "Taulukko jarjestamisen jalkeen: " <<endl;
	cout << endl;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << koira[ind].nimi << " "<< koira[ind].ika << endl;
		
	}
}*/
#include <iostream>
using namespace std;

const int MAX_K = 5;

struct KOIRATIEDOT
{
	char nimi[20];
	int ika;
};

int main()
{
	KOIRATIEDOT koira[MAX_K + 1];
	int ind;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Anna " << ind + 1 << ". " << "koiran nimi ja ika: " << endl;
		cin >> koira[ind].nimi >> koira[ind].ika;
	}
	cout << endl;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << "Koiran ik� ja nimi: ";
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
	cout << endl;

	int i;
	int j;
	cout << "koirien iat ennen jarjestamista: ";



	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << koira[ind].ika << " ";
	}
	cout << endl;
	cout << "Jarjestetaan ...." << endl;
	cout << endl;

	for (i = 0; i < MAX_K - 1; i++)
		for (j = i + 1; j < MAX_K; j++)
			if (strcmp(koira[i].nimi, koira[j].nimi)>0)
			{
		koira[MAX_K] = koira[i];
		koira[i] = koira[j];
		koira[j] = koira[MAX_K];
			}
	cout << "Taulukko jarjestamisen jalkeen: " << endl;
	cout << endl;
	for (ind = 0; ind < MAX_K; ind++)
	{
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;

	}
}