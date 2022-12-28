#include "queue.h""
int main()
{
    Queue Q;
    Queue Q2;
    infotype lagu;
    address pLagu;
    address play;

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
    return 0;
}
