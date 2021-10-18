# 20211011

## Esercizio 1

Segnarsi la mail dei tutor: `<tutorprogrammazione1disi [at] unitn [dot] it>`

## Esercizio 2

Reimplementare l'esempio della serie sum 1/(2^i) implementando esplicitamente la funzione `double pow2(int)`  che calcola 2^i (2*2*2*2.....*2) .

## Esercizio 3

Scrivere una funzione f:R-->R che restituisca:

```c
-x^3 se x<=0
(e^x)-1 se x>0
```

Inoltre scrivere un programma main che, dato un numero in input (e.g. -10), calcoli la funzione f nei dieci punti successivi: `-10,-9,...,-1,0`

## Esercizio 7

Scrivere un programma che prenda in input due numeri interi e:

- se entrambi sono pari, restituisce la somma
- se uno è pari e l'altro è dispari, restituisce il prodotto
- se entrambi sono dispari, ne restituisce la sottrazione (a - b) fratto il prodotto

## Esercizi aggiuntivi, lasciati per casa

### Esercizio 4

Scrivere una procedura che ruoti tre elementi a,b,c e si scriva un main di prova. Ad esempio:

```c
a=1;
b=2;
c=3;
ruota(a,b,c); // a=2;b=3;c=1;
```

### Esercizio 5

Scrivere una PROCEDURA (`void`) che calcoli l'area del cerchio dato il raggio. 

### Esercizio 6

Scrivere un programmino che simuli un attacco 3 contro 3 a RISIKO. Tirare 3 dadi a 6 facce per l’attaccante e 3 per il difensore. Confrontare il dado più alto dell’attaccante contro il più alto del difensore, il medio dell’attaccante contro il medio del difensore e il più basso dell’attaccante contro il più basso del difensore. Dichiarare infine gli scontri vinti dall’attaccante e dal difensore.

### Esercizio 6.1 (propedeutico)

Dati in input tre interi positivi in tre variabili (`n1`, `n2`, `n3`), scrivere un programma che con una procedura “ri-ordini” i numeri in ordine crescente usando il passaggio di parametri per riferimento.
