#include "stack.h"

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

void push(Stack &S, infotype x){
    if (isFull(S)) {
        cout << "Stack Penuh!" << endl;
    }
    else {
        S.Top = S.Top + 1;
        S.T[S.Top] = x;
    }
}

infotype pop(Stack &S, infotype &P){
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

void printInfo(Stack S){
    int i = S.Top;
    while (i != 0){
        cout << "Judul: " << S.T[i].nama << endl;
        cout << "Artis: " << S.T[i].artis << endl;
        i--;
    }
}
