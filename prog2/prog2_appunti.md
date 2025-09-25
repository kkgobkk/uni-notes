funzione variadica:
ha un numero di parametri variabile

es:
printf("formato", [esp1, esp2, ...., espN])
può avere un qualunque numero di esp(i)

set* crea(int n)

void aggiungi(set* s, tipo el)
aggiunge una istanza dell'elemento el

void togli(set* s, tipo el)
rimuove UNA istanza dell'elemento el

void togliTutti(set*s, tipo el)
rimuove TUTTE le istanze dell'elemento el

typedef struct{
	lista dati;
	int cardinalità;
}

cardinalità è un metadato, ovvero un info che riguarda l'insieme

IMPLEMENTARE UN INSIEME
se implementiamo i dati con una lista ordinata, è molto più facile controllare se un valore è già presente nell'insieme
anche in un multiset, avere una lista ordinata è più efficiente perché permette di fermare prima un controllo del numero di istanze di un el presenti in un insieme

STRUTTURE DATI NON LINEARI (ARINGHIERI DISAPPROVES)

GRAFI
o---o\    o
      \  /
    o--o/
    |
    o

ALBERI
	o	livello 0: solo 1 elemento (radice)
       / \
      o   o	livello i tc 0<i<f: nodi interni
     / \   \
    o   o   o	livello f (frontiera): foglie
    
 ogni nodo di un albero ha uno ed uno solo predecessore, tranne la radice che non ha predecessori, e ogni nodo può avere qualsiasi numero di successori
 
  / \
 / ! \     Esiste solo un modo per raggiungere un nodo partendo dalla radice
 -----
 Dato un albero A, 
 A binario <=> V m € A, |{n € A | n succ di a}| <= 2
 
dio è un porcellino d'india

termini utili (non sto a scrivere le def perché sono ovvie: padre, figlio, antenato, discendente)

DISTANZA di un nodo da un altro: numero minimo di salti per arrivare da un nodo ad un altro

La distanza tra radice e A è detta PROFONDITA' di A

GRADO di un nodo: il numero di figlio di quel nodo
se si dice che un albero è di grado N, allora tutti i suoi nodi hanno grado N e tutte le sue foglie sono a profodità N

Un albero è DEGENERE se ogni nodo ha grado 1 (quindi è praticamente una lista)

Un albero è VUOTO se ha profondità -1 e non ha nodi

DEFINIZIONE RICORISVA DI ALBERO
Un albero binario è:
	vuoto
	un nodo con al più due successori, i quali sono a loro volta alberi binari
      
