#include "stackandqueue.cpp"

int main()
{
    // STACK
    Stack Rak;
    infotypeS Album;
    infotypeS Ambil;
    infotypeS P;

    cout << "============STACK============" << endl;
    createStack(Rak);
    Album.artis = "Joji";
    Album.nama = "BALLADS1";
    push(Rak, Album);
    Album.artis = "The Weekend";
    Album.nama = "After Hours";
    push(Rak, Album);

    printInfo(Rak);
    cout<< endl;
    Ambil = pop(Rak, P);
    cout << "Ambil:"<<endl;
    cout << "Judul: " << Ambil.nama << endl;
    cout << "Artis: " << Ambil.artis << endl;
    cout << endl;

    cekAlbum(Rak);

    cout << "=============================" << endl;
    cout << endl;

    // QUEUE
    Queue Q;
    Queue Q2;
    infotypeQ lagu;
    addressQ pLagu;
    addressQ play;

    cout << "============QUEUE============" << endl;
    createQueue(Q);
    lagu.nama = "WANTED U";
    lagu.album = "BALLADS1";
    lagu.artis = "Joji";
    pLagu = createElement(lagu, pLagu);
    enqueue(Q, pLagu);
    lagu.nama = "YEAH RIGHT";
    lagu.album = "BALLADS1";
    lagu.artis = "Joji";
    pLagu = createElement(lagu, pLagu);
    enqueue(Q, pLagu);
    showPlaylist(Q);
    cout << endl;

    //Queue yang sudah tersedia
    createQueue(Q2);
    lagu.nama = "After Hours";
    lagu.album = "After Hours";
    lagu.artis = "The Weekend";
    pLagu = createElement(lagu, pLagu);
    enqueue(Q2, pLagu);
    lagu.nama = "Blinding by The Light";
    lagu.album = "After Hours";
    lagu.artis = "The Weekend";
    pLagu = createElement(lagu, pLagu);
    enqueue(Q2, pLagu);

    //penyambungan queue
    sambungQueue(Q, Q2);
    showPlaylist(Q);
    cout << endl;

    play = dequeue(Q,pLagu);
    cout << "Now Playing: " << endl;
    cout << "Judul: "<<info(play).nama << endl;
    cout << "Album: "<<info(play).album << endl;
    cout << "Artis: "<<info(play).artis << endl;
    cout << endl;
    showPlaylist(Q);
    cout << "=============================" << endl;

    return 0;
}
