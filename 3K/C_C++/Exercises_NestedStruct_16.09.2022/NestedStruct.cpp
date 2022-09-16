//============================================================================
// Name        : NestedStruct.cpp
// Author      : Brian
// Version     :
// Copyright   : Your copyright notice
// Description : Nested struct exercise
//============================================================================

#include <iostream>
#include <string>
#define MAX 20
using namespace std;

struct Data {
	int giorno;
	int mese;
	int anno;
};
struct Voti {
	double italiano;
	double informatica;
	double tedesco;
	double inglese;
	double TPS;
};
struct Studente {
	string nome;
	string cognome;
	int matricola;
	Data data_nascita;
	Voti valutazione;
};

int inputNumStudenti() {
	int n = 0;
	do {
		cout << "Quanti studenti vuoi inserire? ";
		cin >> n;
	} while (n < 0 || n > MAX);
	return n;
}

void inputStudenti(Studente studente[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Studente [" << i + 1 << "]" << endl;
		cout << "  Nome: ";
		cin >> studente[i].nome;
		cout << "  Cognome: ";
		cin >> studente[i].cognome;
		cout << "  Numero matricola: ";
		cin >> studente[i].matricola;
		cout << "  Data di nascita <giorno>: ";
		cin >> studente[i].data_nascita.giorno;
		cout << "  Data di nascita <mese>: ";
		cin >> studente[i].data_nascita.mese;
		cout << "  Data di nascita <anno>: ";
		cin >> studente[i].data_nascita.anno;
		cout << "  Voto italiano: ";
		cin >> studente[i].valutazione.italiano;
		cout << "  Voto informatica: ";
		cin >> studente[i].valutazione.informatica;
		cout << "  Voto tedesco: ";
		cin >> studente[i].valutazione.tedesco;
		cout << "  Voto inglese: ";
		cin >> studente[i].valutazione.inglese;
		cout << "  Voto TPS: ";
		cin >> studente[i].valutazione.TPS;
	}
}

void stampaDataDiNascita(Data data) {
	cout << "Data di nascita: " << data.giorno << "/" << data.mese << "/"
			<< data.anno << endl;
}

void stampaPagella(Voti voti) {
	cout << "Pagella: ";
	cout << "  Voto italiano: " << voti.italiano << endl;
	cout << "  Voto informatica: " << voti.informatica << endl;
	cout << "  Voto tedesco: " << voti.tedesco << endl;
	cout << "  Voto inglese: " << voti.inglese << endl;
	cout << "  Voto TPS: " << voti.TPS << endl;
}

void stampaStudente(Studente studente) {
	cout << "Nome: " << studente.nome << endl;
	cout << "Cognome: " << studente.cognome << endl;
	cout << "Numero matricola: " << studente.matricola << endl;
	stampaDataDiNascita(studente.data_nascita);
	stampaPagella(studente.valutazione);
}

void ricercaNome(Studente studente[], int n, string nome) {
	cout << "Esito ricerca: ";
	bool found = false;
	for (int i = 0; i < n; i++) {
		if (studente[i].nome == nome) {
			found = true;
			cout << "TROVATO" << endl;
			stampaStudente(studente[i]);
		}
	}
	if (!found) {
		cout << "NON TROVATO" << endl;
	}
}

void ricercaCognome(Studente studente[], int n, string cognome) {
	cout << "Esito ricerca: ";
	bool found = false;
	for (int i = 0; i < n; i++) {
		if (studente[i].cognome == cognome) {
			found = true;
			cout << "TROVATO" << endl;
			stampaStudente(studente[i]);
		}
	}
	if (!found) {
		cout << "NON TROVATO" << endl;
	}
}

void ricercaMatricola(Studente studente[], int n, int matricola) {
	cout << "Esito ricerca: ";
	bool found = false;
	for (int i = 0; i < n; i++) {
		if (studente[i].matricola == matricola) {
			found = true;
			cout << "TROVATO" << endl;
			stampaStudente(studente[i]);
		}
	}
	if (!found) {
		cout << "NON TROVATO" << endl;
	}
}

void ricercaMenu(Studente studente[], int n) {
	cout << "\nRICERCA" << endl;
	cout << "Ricerca in base a: " << endl;
	cout << "[1] Nome" << endl;
	cout << "[2] Cognome" << endl;
	cout << "[3] Matricola" << endl;
	cout << ">> ";
	string nome, cognome;
	int matricola;

	int option;
	cin >> option;
	switch (option) {
	case 1:
		cout << "Nome: ";
		cin >> nome;
		ricercaNome(studente, n, nome);
		break;
	case 2:
		cout << "Cognome: ";
		cin >> cognome;
		ricercaCognome(studente, n, cognome);
		break;
	case 3:
		cout << "Matricola: ";
		cin >> matricola;
		ricercaMatricola(studente, n, matricola);
		break;

	}
}

int main() {
	int n = inputNumStudenti();
	Studente studente[n];
	inputStudenti(studente, n);
	ricercaMenu(studente, n);

	return 0;
}
