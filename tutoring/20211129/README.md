
# 20211108: Closing the circle

## Esercizio 1 (originale; simil esercizio-3 d'esame)

Scrivere nel file `esercizio3.cc` la dichiarazione e la definizione della funzione `unisciListe`, che prende in input due puntatori a due liste concatenate contenenti `float`, e restituisce il primo nodo di una nuova lista concatenata, che contiene prima gli elementi della prima lista e poi gli elementi della seconda.

Una volta scritta questa funzione, scrivere una seconda funzione `scorriLista`, che prende in input un puntatore a una lista concatenata, rimuove gli elementi __maggiori di 0__, e restituisce la __somma__ degli elementi appena rimossi.

Il programma deve terminare correttamente, e per fare ciò la memoria va correttamente deallocata. Implementare la funzione `deallocaLista`, in modo che si occupi di questa mansione.

NOTE:

- Scaricare il file `7.1-ori.cc` e modificarlo per inserire la corretta implementazione delle funzioni `unisciListe`, `scorriLista` e `deallocaLista`. Il file arriva già fornito con alcune funzioni ausiliarie per le liste ed un main. Nulla di quanto fornito può essere modificato.
- Il programma deve essere in grado di riconoscere il contesto dell'input. In particolare:
  - se una delle due liste è vuota, verrà restituito un puntatore all'altra;
  - se entrambe sono vuote, verrà restituito un puntatore a NULL;
  - se vengono dati puntatori a nodi centrali (e non all'inizio della lista), il programma dovrà restituire un errore.
- Le dimensioni delle liste in input sono generate casualmente e non è possibile fare assunzioni sulle dimensioni.
- Ricordarsi (importante!) di deallocare la memoria.
- È consentito definire ed implementare funzioni ausiliarie che possano aiutarvi nella soluzione del problema.
- All’interno di questo programma non è ammesso l’utilizzo di variabili globali o di tipo static e di funzioni di libreria al di fuori di quelle definite in `iostream`.
