#include <iostream>
#include <string>
#define MAX 20

using namespace std;

struct alunno{
    char cognome[30];
    char nome[20];
    int voto;
};

/*
* Restituisce true se le due stringhe sono uguali.
*/
bool confronto(string a, string b);

/*
* Recupera il numero degli alunni da console.
* Questo deve essere maggiore di zero e minore della costante MAX.
*/
int controllo_numAlunni();

/*
* Recupera n alunni da console.
*/
void input(alunno a[], int n);

/*
* Trova l'alunno che ha come cognome il valore di cercaCognome
* e stampa la sua posizione nell'array, il suo nome e il voto.
*/
void ricerca(alunno a[], int n, string cercaCognome);


int main() {

    alunno a[MAX];

    int num_alunni;

    char cerca[20];

    num_alunni = controllo_numAlunni();

    input(a, num_alunni);

    ricerca(a, num_alunni, cerca);

    return 0;
}

bool confronto(string a, string b) {
    if (a.length() != b.length()) {
        return false;
    }

    int i = -1 ;
    do {
        i ++;
        if (a[i] != b[i]) {
            return false;
        }
    } while (i < a.length());

    return true;
}

int controllo_numAlunni() {
    int n;
    do {
        cout << "Inserisci il numero di alunni: ";
        cin >> n ;
    } while (n < 1 || n > MAX);

    return n;
}

void input(alunno a[], int n) {
    for (int i = 0 ; i < n ; i++) {
        cout << "Inserisci il cognome dell'alunno: " ;
        cin >> a[i].cognome;
        cout << "Inserisci il nome dell'alunno: ";
        cin >> a[i].nome;
        cout << "Inserisci il voto: ";
        cin >> a[i].voto;
    }

}

void ricerca(alunno a[], int n, string cercaCognome) {
    string cerca;
    int trovato;
    cout << "\nInserisci il cognome dell'alunno da cercare: ";
    cin >> cerca;
    trovato = 0;
    for (int j = 0 ; j < n ; j ++ ) {
        if (confronto(a[j].cognome, cerca)) {
            cout << " \nAlunno trovato in posizione " << j+1 << " " << a[j].nome << " " << a[j].voto ;
            trovato = 1 ;
        }
    }
    if (!trovato) {
        cout << "\nAlunno non trovato.\n ";
    }
}