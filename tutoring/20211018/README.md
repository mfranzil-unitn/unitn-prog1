# 20211018

## Esercizio 1

- Scrivere una funzione ricorsiva che vada calcolare la somma tra due numeri interi positivi. Ovviamente scrivere `return n1 + n2;` è vietato.
- Riscrivere la funzione precedente utilizando la ricorsione in coda.

## Esercizio 2

- Scrivere una funzione ricorsiva count_even che ritorni il numero di numeri pari all'interno di un array di interi.
- Riscrivere la soluzione precedente questa volta utilizzando la ricorsione in coda.

## Esercizio 3

Scrivere un programma che permetta di eseguire le operazioni necessarie a ridurre una matrice quadrata in una sua forma a scalini inserendole dal terminale:

Le operazioni da implementare sono:

- moltiplicare una riga per un fattore lambda
- scambiare due righe tra di loro
- poter eseguire la sottrazione tra due diverse righe
- poter stampare la matrice a terminale mostrando solo 2 cifre dopo la virgola (printf("%0.2f\t", numero_float))
- poter uscire dal programma
- poter vedere la lista completa dei comandi

La matrice per ora può essere dichiarata come una variabile globale.

## Esercizio 4 (gennaio 2016)

>Il seguente è un codice - letterale - preso dal primo appello del 2016.

Completare il programma contenuto nel file esercizio2.cc implementando la funzione ricorsiva:

`void somma_array(int n1[], int n2[], int risultato[], int dim)`

che, dati in ingresso due array n1 e n2, ne calcoli la somma e la memorizzi nell’array risultato: i tre array sono di uguale dimensione dim (che assumiamo per semplicità essere un numero intero positivo). Per esempio, dati gli array [9, 3, 5] e [1, 4, 7], il risultato ottenuto dalla somma è l’array [10, 7, 12].

NOTA 1: La funzione somma array deve essere ricorsiva ed al suo interno non ci possono essere cicli o chiamate a funzioni contenenti cicli.
NOTA 2: Qualora ritenuta necessaria è ammessa la definizione di eventuali funzioni ausiliarie, a patto che siano a loro volta ricorsive o "wrapper" di altre funzioni a loro volta ricorsive.
NOTA 3: all’interno di questo programma non è ammesso l’utilizzo di variabili globali o di tipo static e di funzioni di libreria.
VALUTAZIONE: questo esercizio vale 5 punti (al punteggio di tutti gli esercizi va poi sommato 10).
