#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

#define Top(S) ((S).Top)
#define Info(S) ((S).Info)

using namespace std;

const int IDXMAX = 20;

struct album {
    string nama;
    string artis;
};

typedef album infotype;
typedef int address;

struct Stack{
    address Top;
    infotype T[IDXMAX];
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void cekAlbum(Stack S);

void push(Stack &S, infotype x);
infotype pop(Stack &S, infotype &P);
void printInfo(Stack S);

#endif // STACK_H_INCLUDED
