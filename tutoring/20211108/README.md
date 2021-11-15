# 20211108: I/O e allocazione dinamica della memoria

## Esercizio 1 Count letter

Dato un file di testo chiamato `text.txt` scrivere un programma che prenda in ingresso una lettera minuscola o maiuscola e mostri a schermo quante volte essa appare all'interno del file di testo. Se il file di testo non esiste il programma deve ritornare `-1`. 

## Esercizio 2 Lowercase filter

Scrivere un programma che prenda dalla linea di comando due file di testo, e vada a scrivere nel secondo tutte le lettere minuscole presenti nel primo. Il programma deve ritornare un messaggio di errore nei casi in cui il file di input non esista
e il caso nel quale non vengano passati parametri sufficienti al programma

## Esercizio 3 (Upper/lower)case switch

Scrivere un programma che prenda dalla linea di comando due file di testo. Ciascuna lettera minuscola nel primo file dovrà
essere maiuscola nel secondo e viceversa.

## Esercizio 4 Matrix

Scrivere un programma che chieda all'utente le dimensioni di una matrice di interi, e prenda i valori sempre da terminale.
Una volta inserita la matrice a schermo deve essere mostrato l'elemento dal valore massimo per ciascuna riga.

```shell 
Number of rows: 3
Number of cols: 3
Insert values: 
1 2 3 4 5 6 7 8 9
1 2 3 
4 5 6 
7 8 9 
max row 1 => 3
max row 2 => 6
max row 3 => 9
```

## Esercizio 5 (Gennaio 2018, modificato)

Scrivere la dichiarazione e la definizione della funzione ricorsiva somma_incrociata
avente come parametri:
due array di numeri interi primo e secondo, della stessa dimensione;
il parametro intero dim, pari alla dimensione dei due array;
l'array risultato, avente stessa dimensione.

La funzione deve popolare l'array risultato con le somme incrociate degli elementi dei due array. Il primo elemento di risultato deve contenere la somma del primo elemento del primo array con l’ultimo elemento del secondo, il secondo elemento di risultato deve contenere la somma del secondo elemento del primo array con il penultimo del secondo,
il terzo con il terzultimo e così via.

Per esempio, dati due array

primo: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

secondo: {1, 1, 2, 3, 5, 8, 13, 21, 34, 55}

L'array risultato sarà: {56, 36, 24, 17, 13, 11, 10, 10, 10, 11}

NOTA 1: La funzione deve essere ricorsiva ed al suo interno non ci possono essere cicli o
chiamate a funzioni contenenti cicli. Può fare uso di eventuali funzioni ausiliarie purchè a
loro volta ricorsive.
NOTA 2: La funzione deve funzionare senza errore con ogni possibile array di dimensione
uguale.

## Esercizio 6

Trasformare il codice dell'Esercizio 1 in modo che non serva istanziare l'array risultato
nel main e passarlo alla funzione somma_incrociata. Il riferimento all'array
dovrà essere restituito dalla funzione.

## Esercizio 7 (Febbraio 2016)

Scrivere un programma, nel file esercizio1.cc, che, presi come argomenti del main i nomi
di due file, copi il primo file nel secondo correggendone la sintassi e generando in tal modo
un testo “corretto” secondo le seguenti regole:
1. la prima parola del testo deve iniziare con una lettera maiuscola;
2. tutte le parole che seguono i seguenti caratteri: “.”, “?” e “!”, devono iniziare con una
lettera maiuscola.

Se ad esempio l’eseguibile è a.out, il comando `./a.out testo testocorretto`
creerà un nuovo file di nome testocorretto e vi copierà il contenuto del file dato testo,
modificando le parole quando queste non verificano le regole descritte sopra.

Esempio di testo:
> filastrocca delle parole:\
> Fatevi avanti! chi ne vuole?\
> di parole ho la testa piena,\
> con dentro la “luna” e la “balena”.\
> ci sono parole per gli amici:\
> Buon giorno, Buon anno, Siate felici!\
> parole belle e parole buone;\
> parole per ogni sorta di persone.\
> di G. Rodari.

Esempio di testocorretto corrispondente:
> Filastrocca delle parole:
> Fatevi avanti! Chi ne vuole?\
> Di parole ho la testa piena,\
> con dentro la “luna” e la “balena”.\
> Ci sono parole per gli amici:\
> Buon giorno, Buon anno, Siate felici!\
> Parole belle e parole buone;\
> parole per ogni sorta di persone.\
> Di G. Rodari.

NOTA 1: Per semplicità si assuma che il testo contenuto nel primo file inizi con un carattere
alfabetico, non contenga “...” e che “.”, “?” e “!” siano sempre preceduti da una parola e
seguiti da uno spazio.

NOTA 2: Per semplicità si assuma che ogni parola contenuta nel testo del primo file abbia
al massimo lunghezza 30 caratteri.

NOTA 3: E ammesso l’uso della funzione `strlen` della libreria `<cstring>`, non é ammesso
l’uso di altre funzioni di libreria, in particolare della funzione toupper.

NOTA 4: il programma deve potenzialmente funzionare con ogni possibile codifica dei caratteri secondo le regole di tali codifiche viste a lezione (quindi non solo ASCII). Per realizzare
la conversione da caratteri minuscoli in maiuscoli, è vietato l’uso di tabelle o di 26 if o
switch-case, uno per ogni carattere.
