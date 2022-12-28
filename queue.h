#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>
using namespace std;

#define next(Q) (Q)->next
#define info(Q) ((Q)->info)
#define Head(Q) ((Q).Head)
#define Tail(Q) ((Q).Tail)
#define nil NULL

struct lagu {
    string nama;
    string album;
    string artis;
};

typedef struct lagu infotype;

typedef struct ElmtQueue *address;

struct ElmtQueue {
    infotype info;
    address next;
};

struct Queue {
    address Head;
    address Tail;
};

void createQueue(Queue &Q);
bool isEmpty(Queue Q);
address createElement(infotype laguBaru, address &pLagu);
void enqueue(Queue &Q, address pLagu);
address dequeue(Queue &Q, address &plagu);
void showPlaylist(Queue Q);
void sambungQueue(Queue &Q1, Queue Q2);


#endif // QUEUE_H_INCLUDED
