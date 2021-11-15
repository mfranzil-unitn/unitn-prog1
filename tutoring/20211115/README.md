# 20211115 - Simulazione (parziale) di un esame

Oggi i PC della A201 sono stati impostati in modalità esame. Ciò comporta vari quirk:

- La connessione alla WAN è disabilitata
- Gli accessi e la command history del terminale sono monitorati
- Alcuni software non sono accessibili (e quelli presenti sono monitorati anche)

Per sfruttare questa opportunità, vi lasciamo due esercizi d'esame sulla quale esercitarvi, in modo da prendere confidenza con l'uso di Ubuntu in questa modalità mentre avete sottomano un vero testo d'esame.

## Esercizio 1 - Es. 1 Gennaio 2011

Sia `input1.txt` un file di testo contenente una sequenza di stringhe formate da ripetizioni
dell'unico carattere `+`, separate tra loro da uno o più spazi e ritorni a capo. Le stringhe
rappresentano una sequenza di interi positivi codificati in codice unario (cioè la lunghezza
di ogni stringa rappresenta il valore associato). Ad esempio, il seguente file:

```plaintext
++++++ ++ +++ +++++++
++++++++++ + ++++++++++ + +++++
++++++++ +++++ ++++++ 
++++++ +++++++ + ++ +++
+++++++++ +++ +++++++ +++++++ ++++
+++++++++ +++++++++ +++
```

corrisponde alla sequenza di interi `6 2 3 7 10 1 10 1 5 8 5 6 6 7 1 2 3 9 3 7 7 4 9 9`.

Nel file `esercizio1.cc` definita la funzione main che invoca la funzione `leggi_e_calcola_massimo`, passando il nome del file `input1.txt`, e stampa il risultato. Scrivere nel file `esercizio1.cpp` la definizione della funzione `leggi_e_calcola_massimo`, Ia quale calcola il massimo dei valori contenuti nel file ed appende ad esso il risultato rappresentato in codice unario (ed arrotondato per eccesso). Nell'esempio precedente, dopo I'invocazione della funzione `leggi_e_calcola_massimo`, il file deve essere il seguente:

```plaintext
++++++ ++ +++ +++++++
++++++++++ + ++++++++++ + +++++
++++++++ +++++ ++++++ 
++++++ +++++++ + ++ +++
+++++++++ +++ +++++++ +++++++ ++++
+++++++++ +++++++++ +++
++++++++++
```

in cui il valore `10`, il massimo, è stato appeso alla fine del file. Inoltre, `leggi_e_calcola_massimo` memorizza il valore del massimo nella variabile di tipo `int` passata per riferimento.

### Note

- Valutazione: Questo esercizio vale 7 punti (al punteggio di tutti gli esercizi va poi sommato 2.
- Fate attenzione: il file `input1.txt` deve terminare con una newline (e per correttezza, chiudetelo con un'altra newline quando ci scrivete sopra) quando  viene aperto, altrimenti il vostro output potrebbe essere inserito nell'ultima riga.

## Esercizio 2 - Es. 2 Luglio 2021

Scrivere la dichiarazione e la definizione di una funzione __ricorsiva__ `f`, che prende come argomento un intero
`n` e ritorna il numero di coppie di cifre uguali in posizioni
adiacenti presenti nel numero `n`, nel caso `n` sia
negativo restituisce 0. La funzione è inserita in un semplice
programma che prende l'intero da analizzare come primo argomento del
comando, come illustrato nei seguenti esempi di esecuzione:

```
$ ./a.out 551122
The read string is: 551122
The converted value is: 551122
function(551122) = 3

$ ./a.out 55511222
The read string is: 55511222
The converted value is: 55511222
function(55511222) = 5

$ ./a.out 1232123
The read string is: 1232123
The converted value is: 1232123
function(1232123) = 0
```

Il `main` è già fornito, e non necessita di essere modificato.

### Note

- Scaricare il file `esercizio2.cc`, modificarlo per inserire la dichiarazione e la definizione della funzione `funzione`, e caricare il file sorgente risultato delle vostre modifiche a soluzione di questo esercizio nello spazio apposito.
- La funzione `funzione` deve essere ricorsiva ed al suo interno \textbf{NON ci possono essere cicli o chiamate a funzioni contenenti cicli}. Si può però fare uso di funzioni ausiliarie da chiamare all'interno di questa funzione che NON contengano cicli o che siano ricorsive.
- Le uniche assunzioni che si possono fare sull'input e su dimensioni di eventuali strutture/array utilizzate nel file di partenza fornito sono __solo quelle espressamente specificate in questo testo__ (e NON quelle riportate nel file fornito, che sono SOLO indicative per consentire di svolgere l'esame).
- All'interno di questo programma __non è ammesso__ l'utilizzo di variabili globali o di tipo `static` e di funzioni di libreria al di fuori di quelle definite in `cstddef`.
- Si ricorda che, l'esempio di esecuzione è puramente indicativo, e la soluzione proposta NON deve funzionare solo per l'input fornito, ma deve essere robusta a variazioni compatibili con la specifica riportata in questo testo.
