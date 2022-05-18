
#include <iostream>
#include <string> 
#include <fstream>
#include <iomanip>

int loading_danych(int tablica_dys[16][16]);
void TSP(int tablica_we[16][16], int solucja[16][16]);
int minOnTab(int tablica_we[16][16], int id);
void nadanie_nazw(std::string tablica_nazw[]);
void prezentacja_wynikow(std::string tablica_nazwy[], int solucja[16][16]);

int main()
{
	int wojewostwojewostwa[16][16];
	int solucja_problemu_koniozera[16][16] = {};

	std::string* nazwy_woj;
	nazwy_woj = new std::string[16];
	std::cout << "Witaj w symjlacji problemu konijozera. Elemenetem badan bedzie przewidzenie najkrotej trasy po wszytkich stolicach wojewostw" << std::endl;
	loading_danych(wojewostwojewostwa);
	nadanie_nazw(nazwy_woj);
	TSP(wojewostwojewostwa, solucja_problemu_koniozera);
	//prezentacja_wynikow(nazwy_woj, solucja_problemu_koniozera);
	delete[] nazwy_woj;
	return 0;
}

int loading_danych(int tablica_dys[16][16]) {
	std::ifstream plik;
	plik.open("dane_we.txt");
	int i, j;
	if (!plik.good()) {
		std::cout << "Blednie wczytany plik danych" << std::endl;
		return 0;
	}
	else {
		for (i = 0; i < 16; ++i) {
			for (j = 0; j < 16; ++j) {
				plik >> tablica_dys[i][j];
				//std::cout << std::setw(3) << tablica_dys[i][j] << " ";
			}
			//std::cout << std::endl;
		}
	}
	plik.close();
	return true;
}

void nadanie_nazw(std::string tablica_nazw[]) {
	;
	std::ifstream plik_nazwa;
	std::string nazwa_pliku = "eee.txt";
	plik_nazwa.open(nazwa_pliku);
	for (int i = 0; i < 16; ++i) {
		plik_nazwa >> tablica_nazw[i];
		//std::cout << tablica_nazw[i] << std::endl;
	}
	plik_nazwa.close();
}

void TSP(int tablica_wew[16][16], int solucja[16][16]) {
	int i, j, M, mini, miniId, idMiasta, miasto_w_drodze;
	int kopia_tablicy_we[16][16];
	bool odwiedzone[16][16] = { };
	for (i = 0; i < 16; ++i) {
		for (j = 0; j < 16l; ++j) {
			kopia_tablicy_we[i][j] = tablica_wew[i][j];
			std::cout << kopia_tablicy_we[i][j] << " ";
		}
		std::cout << std::endl;
	}
	for (M = 0; M < 16; ++M) {
		//szukanie najblizszego sasiada
		idMiasta = M;
		miasto_w_drodze = 1;
		while (miasto_w_drodze < 16) {
			mini = 0;
			miniId = 0;
			for (j = 0; j < 16; ++j) {
				if (kopia_tablicy_we[idMiasta][j] < mini && kopia_tablicy_we[idMiasta][j] != 0) {
					mini = kopia_tablicy_we[idMiasta][j];
					std::cout << "<" << mini << ">";
					miniId = j;
				}

			}
			solucja[idMiasta][0] = solucja[idMiasta][0] + kopia_tablicy_we[idMiasta][miniId];
			solucja[idMiasta][miasto_w_drodze] = miniId;
			odwiedzone[idMiasta][miniId] = true;
			kopia_tablicy_we[idMiasta][miniId] = 0;
			++miasto_w_drodze;

			std::cout << solucja[idMiasta][0] << "  ";
		}
		std::cout << std::endl;
	}
}

int minOnTab(int tablica_we[16][16], int id) {
	return 1;
}

void prezentacja_wynikow(std::string tablica_nazwy[], int solucja[16][16]) {
	int p, o, ttmp;
	for (p = 0; p < 16; ++p) {
		std::cout << " Zaczynajac w " << tablica_nazwy[p] << " suma odleglosci wynosi: " << solucja[p][0] << " i przejezdza przez \n\t";
		for (o = 1; o < 16; ++o) {
			ttmp = solucja[p][o];
			std::cout << o << ". " << tablica_nazwy[ttmp] << " -> ";
		}
		std::cout << std::endl << std::endl;
	}
}
