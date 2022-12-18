###
Un processo P1 crea una pipe e un figlio F1. Un secondo processo P2
comunicherà con P1 tramite un file TEMP. P2 ogni secondo genera un
numero casuale da 1 a 100 e lo scrive nel FILE seguito dal proprio pid. P1
dopo 20 secondi dalla creazione del figlio scrive nella pipe il pid di P2,
seguito dal numero -1, poi stampa un messaggio sullo schermo e termina la
sua esecuzione. Durante questi 20 secondi P1 leggerà i numeri nel file TEMP
e scriverà sulla pipe il suo pid con il numero che ha letto. F1 leggerà dalla
pipe i pid seguiti dal numero. Se il numero è -1 ucciderà P2 e poi terminerà;
altrimenti stamperà al terminale il proprio pid seguito dal numero che ha
letto. pipeProgramma
esercizio pipe
Un processo P1 crea una pipe e un figlio F1. Un secondo processo P2
comunicherà con P1 tramite un file TEMP. P2 ogni secondo genera un
numero casuale da 1 a 100 e lo scrive nel FILE seguito dal proprio pid. P1
dopo 20 secondi dalla creazione del figlio scrive nella pipe il pid di P2,
seguito dal numero -1, poi stampa un messaggio sullo schermo e termina la
sua esecuzione. Durante questi 20 secondi P1 leggerà i numeri nel file TEMP
e scriverà sulla pipe il suo pid con il numero che ha letto. F1 leggerà dalla
pipe i pid seguiti dal numero. Se il numero è -1 ucciderà P2 e poi terminerà;
altrimenti stamperà al terminale il proprio pid seguito dal numero che ha
letto.
