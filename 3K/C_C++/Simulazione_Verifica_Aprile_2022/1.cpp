#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <string.h>
using namespace std;

struct voce {
  char CodFattura[255];
  char CodCliente[255];
  char Data[255];
  char Importo[255];
  char Pagato[255];
} voce0;

void write ();
void fsearch (char token[]);
void out(bool match);

int main() {
  while (true) {
    int choice;

    cout << "Scegliere un opzione:\n" << endl;
    cout << "[1] Nuovo record" << endl;
    cout << "[2] Ricerca record" << endl;
    cout << ">> ";
    cin >> choice;
    if (choice == 1) {
      cout << "Codice fattura: ";
      cin >> voce0.CodFattura;
      cout << "Codice cliente: ";
      cin >> voce0.CodCliente;
      cout << "Data: ";
      cin >> voce0.Data;
      cout << "Importo: ";
      cin >> voce0.Importo;
      cout << "Pagato [SI/NO]: ";
      cin >> voce0.Pagato;
      write();
      cout << "Record salvato con successo!" << endl;

    } else if (choice == 2) {
      cout << "Inserire il token da ricercare: ";
      char token[100];
      cin >> token;
      fsearch(token);
    }
  }
  return 0;
}






//@Override
void write () {
  ofstream fout;
	fout.open("Data.dat", ios::app | ios::binary);
  if (!fout) {
    cout << "Can't open Data.dat!" << endl;
  } else {
    fout.write((char *) &voce0, sizeof(voce0));
    fout << "\r\n";
  }
  fout.close();
}

//@Override
void fsearch (char token[]) {
  bool match;
  ifstream fin;
	fin.open("Data.dat", ios::in | ios::binary);
  if (!fin) {
    cout << "Can't open Data.dat!" << endl;
  } else {
    for (int i = 0; i < 10; i++) {
      fin.read((char *) &voce0, sizeof(voce0));

      if (voce0.CodFattura == token) out(true);
      else if (voce0.CodCliente  == token) out(true);
      else if (voce0.Data == token) out(true);
      else if (voce0.Importo  == token) out(true);
      else if (voce0.Pagato  == token) out(true);
      else out(false);
    }
  }
  fin.close();
}

//@Override
void out(bool match) {
  if (match) {
    cout << "\nRISULTATI RICERCA:" << endl;
    cout << "    Codice fattura: " << voce0.CodFattura << endl;
    cout << "    Codice cliente: " << voce0.CodCliente << endl;
    cout << "    Data: " << voce0.Data << endl;
    cout << "    Importo: " << voce0.Importo << endl;
    cout << "    Pagato: " << voce0.Pagato << endl << endl;
  }
}
