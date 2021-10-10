0) si realizzino i programmi struck_stack/struct_queue con array dinamici, 
inizializzando la dimensione nella funzione init, e deallocando in deinit:

void init (stack & s,int dim);
void init (queue & q,int dim);
void deinit (stack & s);
void deinit (queue & s);

1) si realizzi IN MODO EFFICIENTE uno stack di elementi del tipo:

struct messaggio {
   char testo[100];
}

e si realizzi un programma EFFICIENTE che prenda in ingresso un file
di testo (con righe di lunghezza massima 100) e lo memorizzi su un
altro file con le righe in ordine inverso

ESEMPIO:

Nel mezzo del cammin di nostra vita
mi ritrovai in una selva oscura
che' la retta via avea smarrita.

==>

che' la retta via avea smarrita.
mi ritrovai in una selva oscura
Nel mezzo del cammin di nostra vita

2) si scriva un programma che, utilizzando una coda di struct (persona),
simuli l'arrivo e lo smaltimento di una coda all'ufficio postale.
(il main sara' un main a menu' del tipo "arriva persona", 
smaltisci persona, stampa situazione corrente. 

3) un messaggio viene rappresentato mediante una struct

struct messaggio {
   char testo[10000];
   int priorita;
}

dove priorita' ha un range crescente da 1 a 10.
Scrivere una struttura dati "coda a priorita" in cui e' possibile
inserire messaggi, da cui vengono estratti in modo FIFO per classi di
priorita': (prima quelli a priorita' 10, poi quelli a priorita' 9,...)

4) scrivere un sistema di allocazione di un pronto soccorso di un ospedale, 
dove le persone siano chiamate per ordine di codice di priorita' 
(rosso,giallo,verde,bianco) e, a parita' di codice, per ordine di arrivo.
Si usi una coda a priorita' di persone. 
