#include "flight.h"

void createListJadwal_1301213550(ListJadwal &L){
    first(L) = NULL;
}

adr_jadwalP createElemenJadwal_1301213550(infotype X){
    adr_jadwalP P = new elemenJadwal;
    info(P) = X;
    next(P) = NULL;
    return P;
}

void insertLastJ_1301213550(ListJadwal &L, adr_jadwalP P){
    adr_jadwalP Q = first(L);
    if(first(L) == NULL){
        first(L) = P;
    }else{
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }

}

void showJadwal_1301213550(ListJadwal L){
    adr_jadwalP Q = first(L);
    if(first(L) == NULL){
        cout << "Jadwal Kosong" << endl;
    }else{
        while(Q != NULL){
            cout << "Kode Penerbangan : " << info(Q).Kode;
            cout <<  "  " << "Jenis Penerbangan : " << info(Q).Jenis;
            cout << "  " << "Tanggal Penerbangan : " << info(Q).Tanggal;
            cout << "  " << "Waktu Penerbangan : " << info(Q).Waktu;
            cout << "  " << "Asal Penerbangan : " << info(Q).Asal;
            cout << "  " << "Tujuan Penerbangan : " << info(Q).Tujuan;
            cout << "  " << "Kapasitas Penerbangan : " << info(Q).Kapasitas  << endl;
            Q = next(Q);
        }
    }
    cout<<endl;
}

void DeleteFirstJ_1301213550(ListJadwal &L, adr_jadwalP &P){
    P = first(L);
    if(first(L) == NULL){
        cout << "Jadwal Kosong" << endl;
    }else{
        first(L) = next(first(L));
        next(P) = NULL;
    }
}

adr_jadwalP SearchJ_1301213550(ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP P;
    P = first(L);
    if(first(L) == NULL){
        cout << "Jadwal Kosong" << endl;
    }else{
        while(P != NULL && info(P).Asal != dari && info(P).Tujuan != ke && info(P).Tanggal != tanggal){
            P = next(P);
        }
    }
    return P;
}
