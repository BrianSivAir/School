#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <string.h>
using namespace std;

struct voce {
  int CodFattura;
  int CodCliente;
  string Data;
  float Importo;
  string Pagato;
};

struct results {
  string CodFattura[255];
  string CodCliente[255];
  string Data[255];
  string Importo[255];
  string Pagato[255];
};

struct results r;

void write (struct voce data);
int find (string token);

int main() {
  while (true) {
    struct voce data;
    int choice;

    cout << "Scegliere un opzione:\n" << endl;
    cout << "[1] Nuovo record" << endl;
    cout << "[2] Ricerca record" << endl;
    cout << ">> ";
    cin >> choice;
    if (choice == 1) {
      cout << "Codice fattura: ";
      cin >> data.CodFattura;
      cout << "Codice cliente: ";
      cin >> data.CodCliente;
      cout << "Data: ";
      cin >> data.Data;
      cout << "Importo: ";
      cin >> data.Importo;
      cout << "Pagato [SI/NO]: ";
      cin >> data.Pagato;
      write(data);
      cout << "Record salvato con successo!" << endl;

    } else if (choice == 2) {
      cout << "Inserire il token da ricercare: ";
      string token;
      getchar();
      getline(cin, token);
      int n = find(token);
      for (int i = 0; i <= n; i++){
        cout << "\nRISULTATI:" << endl;
        cout << "[" << i << "]\n    Codice fattura: " << r.CodFattura[i] << endl;
        cout << "    Codice cliente: " << r.CodCliente[i] << endl;
        cout << "    Data: " << r.Data[i] << endl;
        cout << "    Importo: " << r.Importo[i] << endl;
        cout << "    Pagato: " << r.Pagato[i] << endl << endl;
      }
  }

}

  return 0;
}






//@Override
void write (struct voce data) {
  fstream file;
  file.open("Data.txt", ios::app);
  if (file.is_open()) {
    file << data.CodFattura << "-" << data.CodCliente << "-" << data.Data << "-" << data.Importo << "-" << data.Pagato << endl;
  }
  file.close();
}

//@Override
int find (string token) {
  int counter = 0;


  fstream file;
  file.open("Data.txt", ios::in);
  if (file.is_open()) {
    string ln[255];
    for (int i = 0; i < 255; i++) { //ciclo delle linee (fatture)
      getline(file, ln[i]);
      if (ln[i].find(token) != string::npos) { //se viene rilevato il token
        counter++;
        char cln [ln[i].length()+1];
        strcpy(cln, ln[i].c_str());
        int data_index = 0;
        for (int j = 0; j <= ln[i].length(); j++) { //ciclo dei caratteri
          if (cln[j] == '-') data_index++;
          if (cln[j] != '-' && data_index == 0) r.CodFattura[i] += cln[j];
          if (cln[j] != '-' && data_index == 1) r.CodCliente[i] += cln[j];
          if (cln[j] != '-' && data_index == 2) r.Data[i] += cln[j];
          if (cln[j] != '-' && data_index == 3) r.Importo[i] += cln[j];
          if (cln[j] != '-' && data_index == 4) r.Pagato[i] += cln[j];
        }
      }
    }

  }
  file.close();
  return counter;
}
