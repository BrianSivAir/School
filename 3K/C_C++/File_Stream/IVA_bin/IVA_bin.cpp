#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

const string FNAME "Data.dat";

using namespace std;


struct products{
  char name[225];
  float unit_price;
  int quantity;
  
} product;

bool stop = false;

void file_generate();
void file_add();
void file_read();
void file_find();
void file_console_print();
void file_printer_print();

int main() {
  while (!stop) {
    int choice;

    cout << "Scegliere un opzione:\n" << endl;
    cout << "[1] Creazione archivio" << endl;
    cout << "[2] Aggiunta nuovi record" << endl;
    cout << "[3] Visualizzazione archivio" << endl;
    cout << "[4] Stampa archivio" << endl;
    cout << "[5] Ricerca di record" << endl;
    cout << "[6] Fine lavoro" << endl;
    cout << ">> ";
    cin >> choice;
    
    switch (choice) {
      case 1:
        file_generate();
        break;
      case 2:
        file_add();
        break;
      case 3:
        file_console_print();
        break;
      case 4:
        file_printer_print();
        break;
      case 5:
        file_find();
        break;
      case 6:
        stop = true;
        break;
    }
  }
  return 0;
}



//@Override
void file_generate(){
  ofstream fout;
	fout.open(FNAME, ios::app | ios::binary);
  if (!fout) {
    cout << "Can't open Data.dat!" << endl;
  } else {
    cout << "Archivio correttamente generato a .\"" << FNAME;
  }
  fout.close();
}

void file_add(){

}

//@Override
void file_read(){

}

//@Override
void file_add(){

}

//@Override
void file_find() {
  cout << "Inserire il valore da ricercare: ";
  char token[100];
  cin >> token;
}

//@Override
void file_console_print() {
  cout << "\nRISULTATI RICERCA:" << endl;
  cout << "    Codice fattura: " << voce0.CodFattura << endl;
  cout << "    Codice cliente: " << voce0.CodCliente << endl;
  cout << "    Data: " << voce0.Data << endl;
  cout << "    Importo: " << voce0.Importo << endl;
  cout << "    Pagato: " << voce0.Pagato << endl << endl;
}

//@Override
void file_printer_print() {

}


