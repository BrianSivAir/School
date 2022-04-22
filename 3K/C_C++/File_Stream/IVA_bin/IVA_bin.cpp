#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

const char FNAME[] = "Data.dat";

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
    cout << "Archivio correttamente generato a \"..\\" << FNAME << "\"" << endl;
  }
  fout.close();
}

void file_add(){
  cout << "Inserire il nome: "; cin >> product.name;
  cout << "Inserire il prezzo unitario: "; cin >> product.unit_price;
  cout << "Inserire la quantità: "; cin >> product.quantity;

  ofstream fout;
	fout.open(FNAME, ios::app | ios::binary);
  if (!fout) {
    cout << "Can't open Data.dat!" << endl;
  } else {
    fout.write((char *) &product, sizeof(product));
    fout << "\r\n";
    cout << "Dati inseriti correttamente" << endl;
  }
  fout.close();
}

//@Override
void file_read(){
  ifstream fin;
	fin.open("Data.dat", ios::in | ios::binary);
  if (!fin) {
    cout << "Can't open Data.dat!" << endl;
  } else {
    while (fin.eof())
      fin.read((char *) &product, sizeof(product));
      file_console_print();
  }
}

//@Override
void file_find() {
  cout << "Inserire il valore da ricercare: ";
  char token[100];
  cin >> token;
}

//@Override
void file_console_print() {
  cout << "\n    Nome prodotto: " << product.name << endl;
  cout << "    Prezzo unitario: " << product.unit_price << endl;
  cout << "    Quantità: " << product.quantity << endl;
}

//@Override
void file_printer_print() {

}


