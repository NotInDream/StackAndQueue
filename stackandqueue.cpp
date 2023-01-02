#include "stackandqueue.h"

void createStack(Stack &S){
    S.Top = 0;
}

bool isEmpty(Stack S){
    if (S.Top == 0){
        return true;
    }
    else {
        return false;
    }
}

bool isFull(Stack S){
    if (S.Top == (IDXMAX)) {
        return true;
    }
    else {
        return false;
    }
}

void push(Stack &S, infotypeS x){
    if (isFull(S)) {
        cout << "Stack Penuh!" << endl;
    }
    else {
        S.Top = S.Top + 1;
        S.T[S.Top] = x;
    }
}

infotypeS pop(Stack &S, infotypeS &P){
    if (isEmpty(S)){
        cout << "Stack Kosong!" << endl;
    }
    else {
        P = S.T[S.Top];
        S.Top = S.Top - 1;
        return P;
    }
}

void cekAlbum(Stack S){
    if (isEmpty(S)) {
        cout << "Stack Kosong!" << endl;
    }
    else {
        cout << "Total Album: " << S.Top << endl;
    }
}

int cariAlbum(Stack S, string Judul){
    int i = S.Top;
    while(i != 0){
        if (S.T[i].nama == Judul){
            return i;
        }
        i--;
    }
    return 0;
}

void printInfo(Stack S){
    int i = S.Top;
    while (i != 0){
        cout << "Tumpukkan ke- " << i << endl;
        cout << "Judul: " << S.T[i].nama << endl;
        cout << "Artis: " << S.T[i].artis << endl;
        i--;
    }
}

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

addressQ createElement(infotypeQ laguBaru, addressQ &pLagu){
    pLagu = new ElmtQueue;
    next(pLagu) = nil;
    info(pLagu) = laguBaru;
    return pLagu;
}

void enqueue(Queue &Q, addressQ pLagu){
    if (Head(Q) == nil && Tail(Q) == nil){
        Head(Q) = pLagu;
        Tail(Q) = pLagu;
    }
    else{
        next(Tail(Q)) = pLagu;
        Tail(Q) = pLagu;
    }
}

addressQ dequeue(Queue &Q, addressQ &pLagu){
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
    addressQ P = Head(Q);
    int i = 1;
    while (P != nil){
        cout << "Urutan ke-" << i << endl;
        cout << "Judul: " << info(P).nama << endl;
        cout << "Album: " << info(P).album << endl;
        cout << "Artis: " << info(P).artis << endl;
        P = next(P);
        i++;
    }
}

void sambungQueue(Queue &Q1, Queue Q2){
    addressQ P = Head(Q2);
    while (P != nil){
        enqueue(Q1, P);
        P = next(P);
    }
}

int cariLagu(Queue Q, string Judul){
    addressQ P = Head(Q);
    int i = 1;
    while (P != nil){
        if (info(P).nama == Judul){
            return i;
        }
        P = next(P);
        i++;
    }
}
