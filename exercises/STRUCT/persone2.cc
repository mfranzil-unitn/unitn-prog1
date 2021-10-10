using namespace std;
#include <iostream>
#include <cstring>

const int NmaxPers = 1000;
const int NmaxNome = 20;
const int NmaxCognome = 30;

struct address {
   char via[NmaxNome];
   int civico;
   char comune[NmaxNome];
   int cap;
   char prov[3];
};

struct persona {
   char nome[NmaxNome];
   char cognome[NmaxCognome];
   address indirizzo;
};

// NOTARE: ARRAY DI PUNTATORI!
struct gruppo {
  int npers;
  persona * persone [NmaxPers];
};


// elementi base
void leggi_indirizzo (address &a);
void stampa_indirizzo (const address & a);
void leggi_nome (char s[]);
void stampa_nome (const char s[]);
void leggi_cognome (char s[]);
void stampa_cognome (const char s[]);

// persona
void stampa_persona(const persona & p);
void leggi_persona(persona & p);

// gruppo di persone
void inizializza_gruppo(gruppo &g);
bool inserisci_persona(persona & p, gruppo & g);
bool leggieinserisci_persona(gruppo & g);
void stampa_gruppo(const gruppo & g);

void swap (persona &p1, persona &p2);
void ordina_per_cognome(gruppo & g);
int cerca_per_cognome(char cognome[],gruppo & g);
int cerca_per_cognome1(char cognome[],persona *p[],int inizio,int fine);


int main ()
{
   int pos;
   char cognome[NmaxCognome];
   gruppo comune;
   char s[2];

   inizializza_gruppo(comune);
   do {    
      cout << endl;
      cout << " i: inserisci\n";
      cout << " s: stampa\n";
      cout << " c: cerca per cognome\n";
      cout << " e: esci\n";
      cout << "\nLeggi Scelta: ";
      cin >> s;

      switch (s[0]) {
          case 'i': if (! leggieinserisci_persona(comune))
                      cout << "Gruppo pieno\n";
	            break;
          case 's': stampa_gruppo(comune); break;
          case 'c': leggi_cognome(cognome);
                    pos=cerca_per_cognome(cognome,comune); 
                    if (pos==-1)
                      cout << "Non trovato\n";
                    else {
                      cout << "Trovato in posizione " << pos+1 << endl;
                      stampa_persona(*(comune.persone[pos]));
                    }
                    break;
          case 'e': break;
          default: cout << "scelta non capita\n";
         }
      }
   while ((s[0]=='i' || s[0]=='s' || s[0]=='o' || s[0]=='c'));
}



//  FUNZIONI 

void leggi_indirizzo (address &a)
{
   cout << "\n Inserisci via: ";
   cin >> a.via;
   cout << "\n Inserisci civico: ";
   cin >> a.civico;
   cout << "\n Inserisci comune: ";
   cin >> a.comune;
   cout << "\n Inserisci cap: ";
   cin >> a.cap;
   cout << "\n Inserisci prov: ";
   cin >> a.prov;
}

void stampa_indirizzo (const address & a)
{
   cout << "Via: " << a.via << endl;
   cout << "Civico: " << a.civico << endl;
   cout << "Comune: " << a.comune << endl;
   cout << "cap: " << a.cap << endl;
   cout << "prov: " << a.prov << endl;
   cout << endl;
}

void leggi_nome (char s[])
{
   cout << "\n Inserisci nome: ";
   cin >> s;
}

void stampa_nome (const char s[])
{
   cout << "nome: " << s << endl;
}

void leggi_cognome (char s[])
{
   cout << "\n Inserisci cognome: ";
   cin >> s;
}

void stampa_cognome (const char s[])
{
   cout << "cognome: " << s << endl;
}


void leggi_persona(persona & p) 
{
   leggi_nome(p.nome);
   leggi_cognome(p.cognome);
   leggi_indirizzo(p.indirizzo);
}

void stampa_persona(const persona & p) 
{
   stampa_nome(p.nome);
   stampa_cognome(p.cognome);
   stampa_indirizzo(p.indirizzo);
}

bool inserisci_persona(persona & p, gruppo & g)
{
  bool res = true;
  if (g.npers==NmaxPers)
    res = false;
  else {
    g.persone[g.npers]= new persona;
    *(g.persone[g.npers])=p;
    //  g.persone[g.npers]= &p; // !!!! NO!
    g.npers++;
    ordina_per_cognome(g);
  }
  return res;
}

bool leggieinserisci_persona(gruppo & g) 
{
   persona p;
   leggi_persona(p);
   return inserisci_persona(p,g);
}

void inizializza_gruppo(gruppo &g) 
{
  g.npers=0;
}

void stampa_gruppo(const gruppo & g) 
{
  for   (int i=0; i < g.npers; i++) {
       cout << "\n\nDati della persona num. " << i+1 << endl;
       stampa_persona(*(g.persone[i]));
  }
}


void swap (persona *&p1, persona *&p2)
{
   persona * temp;
   temp=p1; p1=p2; p2=temp;
}

//procedura di bubble sort, per cognome
void ordina_per_cognome(gruppo & g) 
{
   int i, j;

   for (i=g.npers-1; i > 0; i--)
      for (j=0; j< i; j++)
	if (strcmp((g.persone[j])->cognome,(g.persone[j+1])->cognome)> 0)
            swap(g.persone[j],g.persone[j+1]);   
}


//procedura di ricerca dicotomica, per cognome
int cerca_per_cognome(char cognome[],gruppo & g) 
{
  return cerca_per_cognome1(cognome,g.persone,0,g.npers-1);
}

int cerca_per_cognome1(char cognome[],persona *p[],int inizio,int fine)
{
  int pivot,cmp,res;
  if (inizio > fine) 
    res = -1;
  else {
    pivot = (inizio+fine)/2;
    cmp =  strcmp(p[pivot]->cognome,cognome);
    if (cmp==0)  
      res = pivot;
    else if (cmp>0)
      res = cerca_per_cognome1(cognome,p,inizio,pivot-1);
    else
      res = cerca_per_cognome1(cognome,p,pivot+1,fine);
  }
  return res;
}

   

