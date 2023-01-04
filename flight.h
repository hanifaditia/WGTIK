#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

using namespace std;
#include <iostream>

#define info(P) (P)->info
#define next(P) (P)->next
#define first(H) ((H).first)

struct jadwalPenerbangan{
    string Kode;
    string Jenis;
    string Tanggal;
    string Waktu;
    string Asal;
    string Tujuan;
    string Kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;
typedef jadwalPenerbangan infotype;

struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal{
    adr_jadwalP first;
};

void createListJadwal_1301213550(ListJadwal &L);
adr_jadwalP createElemenJadwal_1301213550(infotype X);
void insertLastJ_1301213550(ListJadwal &L, adr_jadwalP P);
void showJadwal_1301213550(ListJadwal L);
void DeleteFirstJ_1301213550(ListJadwal &L, adr_jadwalP &P);
adr_jadwalP SearchJ_1301213550(ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
