#include "queue.h"

void createQueue(Queue &Q){
    Head(Q) = nil;
    Tail(Q) = nil;
}

bool isEmpty(Queue Q){
    if (Head(Q) == NULL && Tail(Q) == NULL){
        return true;
    }
    else {
        return false;
    }
}

address createElement(infotype laguBaru, address &pLagu){
    pLagu = new ElmtQueue;
    next(pLagu) = nil;
    info(pLagu) = laguBaru;
    return pLagu;
}

void enqueue(Queue &Q, address pLagu){
    if (Head(Q) == nil && Tail(Q) == nil){
        Head(Q) = pLagu;
        Tail(Q) = pLagu;
    }
    else{
        next(Tail(Q)) = pLagu;
        Tail(Q) = pLagu;
    }
}

address dequeue(Queue &Q, address &pLagu){
    if (isEmpty(Q)){
        cout << "Queue Kosong!" << endl;
    }
    else {
        pLagu = Head(Q);
        Head(Q) = next(pLagu);
        next(pLagu) = nil;
    }
    return pLagu;
}

void showPlaylist(Queue Q){
    address P = Head(Q);
    while (P != nil){
        cout << "Judul: " << info(P).nama << endl;
        cout << "Album: " << info(P).album << endl;
        cout << "Artis: " << info(P).artis << endl;
        P = next(P);
    }
}

void sambungQueue(Queue &Q1, Queue Q2){
    address P = Head(Q2);
    while (P != nil){
        enqueue(Q1, P);
        P = next(P);
    }
}
