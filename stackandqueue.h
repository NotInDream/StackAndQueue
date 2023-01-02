#ifndef STACKANDQUEUE_H_INCLUDED
#define STACKANDQUEUE_H_INCLUDED

#include <iostream>

#define Top(S) ((S).Top)
#define Info(S) ((S).Info)
#define next(Q) (Q)->next
#define info(Q) ((Q)->info)
#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)
#define nil NULL

using namespace std;

const int IDXMAX = 20;

struct album {
    string nama;
    string artis;
};

struct lagu {
    string nama;
    string album;
    string artis;
};


typedef album infotypeS;
typedef int addressS;
typedef struct lagu infotypeQ;
typedef struct ElmtQueue *addressQ;

struct Stack{
    addressS Top;
    infotypeS T[IDXMAX];
};

struct ElmtQueue {
    infotypeQ info;
    addressQ next;
};

struct Queue {
    addressQ Head;
    addressQ Tail;
};

void createQueue(Queue &Q);
bool isEmpty(Queue Q);
addressQ createElement(infotypeQ laguBaru, addressQ &pLagu);
void enqueue(Queue &Q, addressQ pLagu);
addressQ dequeue(Queue &Q, addressQ &plagu);
void showPlaylist(Queue Q);
void sambungQueue(Queue &Q1, Queue Q2);
int cariLagu(Queue Q, string Judul);

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void cekAlbum(Stack S);

void push(Stack &S, infotypeS x);
infotypeS pop(Stack &S, infotypeS &P);
void printInfo(Stack S);
int cariAlbum(Stack S, string Judul);


#endif // STACKANDQUEUE_H_INCLUDED
