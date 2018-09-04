#ifndef __CARTE_H__
#define __CARTE_H__

static const int dim = 52;

enum SEMI {CUORI, FIORI, PICCHE, QUADRI};

struct Carta {
  SEMI seme;
  int valore;
};

struct queue 
{
  int head, tail;
  Carta elem[dim];
};

enum retval { FAIL, OK };

void init (queue &);
retval enqueue(Carta,queue &);
retval first(Carta &,const queue &);
retval dequeue(queue &);

#endif
