# 20211025: altra ricorsione e matrici

## Esercizio 1 (Giugno 2009)

Scrivere nel file `esercizio2.cc` la dichiarazione e la definizione della funzione `search` che effettua una ricerca _ricorsiva_ su un array di al più 100 interi. Tale funzione dovrà trovare il primo multiplo intero di un numero passato come parametro all'interno di un array passato anch'esso come parametro, e dovrà ritornare la posizione in cui si trova questo multiplo, -1 altrimenti.

NOTA: _La funzione deve essere ricorsiva e al suo interno non ci possono essere cicli o funzioni contenenti cicli._

## Esercizio 2

Per chi non lo avesse fatto, rivedere l'[esercizio 3 della scorsa volta](https://github.com/mfranzil-unitn/unitn-prog1/tree/master/tutoring/20211018) e risolverlo.

## Esercizio 3 (Febbraio 2016)

Completare il programma definito nel file `esercizio2.cc` con la dichiarazione e la definizione della funzione _ricorsiva_ `reverse_array` che, preso in input un array di caratteri ed un intero che rappresenti la sua lunghezza, inverta l'array di caratteri passato come parametro; inoltre, il codice deve sostituire ogni vocale minuscola ('a', 'e', 'i', 'o', 'u') con un punto esclamativo ('!').

L'array in ingresso corrisponde ai caratteri della stringa passata come primo argomento da riga di comando all'atto dell'invocazione del programma. Per esempio, se l'eseguibile è `a.out`, dato il comando:

```shell
./a.out aIUolA
```

l'output del programma dovrà essere:

```shell
Array invertito: A l ! U I !
```

NOTA 1: La funzione reverse array deve essere ricorsiva ed al suo interno non ci possono essere cicli o chiamate a funzioni contenenti cicli. Si può fare uso di eventuali funzioni ricorsive ausiliarie.

NOTA 2: È vietato modificare in alcun modo il codice della funzione main.

NOTA 3: Si assuma che la dimensione massima di una parola sia `DIMMAX` caratteri.

NOTA 4: all'interno di questo programma non è ammesso l'utilizzo di variabili globali o di tipo static e di funzioni di libreria, comprese quelle della libreria `cstring` o `string.h`.

## Esercizio 4 (Gennaio 2014:4, modificato)

Si definisca una funzione ricorsiva "palindroma" che prenda in ingresso due stringhe `stringa` e `err` e restituisca un valore booleano che vale VERO qualora la stringa passata in ingresso sia palindroma, FALSO altrimenti. Se la stringa `stringa` risulta parzialmente palindroma, la parte di essa che non soddisfa il criterio specificato va ritornata mediante la stringa `err`.

Definizioni:

1. una stringa si dice palindroma se è simmetrica rispetto al suo centro, ovvero se può essere letta indifferentemente da sinistra verso destra o da destra verso sinistra;
2. caratteri maiuscoli e minuscoli sono considerati equivalenti al fine di determinare se una stringa è palindroma o meno (es.: "aDa" è palindroma come "aDA");
3. caratteri non alfanumerici non vanno considerati nella verifica di cui al punto (a) (es.: "Amore, Roma." è palindroma).

Esempio di esecuzione:

```
Immetti un'altra frase che ritieni palindroma: E d'Irene se ne ride!
La frase "E d'Irene se ne ride!" è palindroma
Immetti un'altra frase che ritieni palindroma: Programmazione
La frase "Programmazione" non è palindroma
```

NOTA 1: Non è consentito utilizzare alcuna forma di ciclo.
NOTA 2: È consentito definire e utilizzare eventuali funzioni ausiliarie, purchè a loro volta ricorsive e senza cicli.
NOTA 3: Vi viene fornita la funzione `isalpha(lc)`, parte della libreria `<cstring>`, insieme al main e al wrapper. Dovete solo implementare la funzione ricorsiva.
