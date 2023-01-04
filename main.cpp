#include "flight.h"

int main()
{
    ListJadwal L;
    infotype jadwal;
    adr_jadwalP P;
    int n;
    createListJadwal_1301213550(L);
    cout << "Input Data Sebanyak : " ;
    cin >> n;
    for (int i = 0;i<n;i++){
        cout << "Kode Penerbangan : ";
        cin >> jadwal.Kode;
        cout << "Jenis Penerbangan : ";
        cin >> jadwal.Jenis;
        cout << "Tanggal Penerbangan : ";
        cin >> jadwal.Tanggal;
        cout << "Waktu Penerbangan : ";
        cin >> jadwal.Waktu;
        cout << "Asal Penerbangan : ";
        cin >> jadwal.Asal;
        cout << "Tujuan Penerbangan : ";
        cin >> jadwal.Tujuan;
        cout << "Kapasitas Penerbangan : ";
        cin >> jadwal.Kapasitas;
        cout << endl;
        P = createElemenJadwal_1301213550(jadwal);
        insertLastJ_1301213550(L,P);
    }

    cout << "Jadwal Penerbangan sebelum di delete :" << endl;
    showJadwal_1301213550(L);
    cout << "-Mendelet jadwal penerbangan-" << endl;
    DeleteFirstJ_1301213550(L,P);
    showJadwal_1301213550(L);
    cout << "-mencari jadwal penerbangan dari surabaya ke malang tanggal 9 Desember 2022-" << endl;
    P = SearchJ_1301213550(L,"Surabaya(SUB)","Malang(MLG)","9-Desember-2022");
    cout << "Address Jadwal yang dicari : "<<P<<endl;

}
