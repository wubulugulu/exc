// #include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                // Tukar elemen jika tidak dalam urutan yang benar
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Array setelah diurutkan (Bubble Sort): ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}


// #include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; ++i) {
        int minIndex = i;
        for (int j = i+1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Tukar elemen terkecil dengan elemen pertama
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Array setelah diurutkan (Selection Sort): ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}


// #include <iostream>
#include <string>
using namespace std;

// Mendefinisikan struct "Mahasiswa"
struct Mahasiswa {
    // Anggota-anggota struct
    string nama;
    int usia;
    double ipk;
};

int main() {
    // Membuat instance struct "Mahasiswa"
    Mahasiswa mhs1;

    // Mengisi nilai anggota struct
    mhs1.nama = "John Doe";
    mhs1.usia = 20;
    mhs1.ipk = 3.75;

    // Menampilkan informasi mahasiswa
    cout << "Informasi Mahasiswa:\n";
    cout << "Nama: " << mhs1.nama << endl;
    cout << "Usia: " << mhs1.usia << " tahun\n";
    cout << "IPK: " << mhs1.ipk << endl;

    return 0;
}


// #include <iostream>
#include <string>
using namespace std;

// Mendefinisikan struct "Mahasiswa"
struct Mahasiswa {
    string nama;
    int usia;
    double ipk;
};

int main() {
    const int JUMLAH_MAHASISWA = 3;

    // Membuat array dari struct "Mahasiswa"
    Mahasiswa daftarMahasiswa[JUMLAH_MAHASISWA];

    // Mengisi nilai untuk setiap mahasiswa
    for (int i = 0; i < JUMLAH_MAHASISWA; ++i) {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin >> daftarMahasiswa[i].nama;

        cout << "Masukkan usia mahasiswa ke-" << i + 1 << ": ";
        cin >> daftarMahasiswa[i].usia;

        cout << "Masukkan IPK mahasiswa ke-" << i + 1 << ": ";
        cin >> daftarMahasiswa[i].ipk;
    }

    // Menampilkan informasi setiap mahasiswa
    cout << "\nInformasi Mahasiswa:\n";
    for (int i = 0; i < JUMLAH_MAHASISWA; ++i) {
        cout << "Mahasiswa " << i + 1 << ":\n";
        cout << "Nama: " << daftarMahasiswa[i].nama << endl;
        cout << "Usia: " << daftarMahasiswa[i].usia << " tahun\n";
        cout << "IPK: " << daftarMahasiswa[i].ipk << endl;
        cout << "-------------------------\n";
    }

    return 0;
}


// #include <iostream>
using namespace std;

int pencarianSekuensial(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            return i;  // Mengembalikan indeks elemen jika ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika elemen tidak ditemukan
}

int main() {
    int arr[] = {10, 5, 7, 2, 8, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int hasil = pencarianSekuensial(arr, n, target);

    if (hasil != -1) {
        cout << "Elemen " << target << " ditemukan di indeks " << hasil << endl;
    } else {
        cout << "Elemen " << target << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}


// #include <iostream>
using namespace std;

int pencarianBiner(int arr[], int awal, int akhir, int target) {
    while (awal <= akhir) {
        int tengah = awal + (akhir - awal) / 2;

        if (arr[tengah] == target) { 
            return tengah; // Mengembalikan indeks elemen jika ditemukan
        } else if (arr[tengah] < target) {
            awal = tengah + 1; // Cari di setengah kanan
        } else {
            akhir = tengah - 1; // Cari di setengah kiri
        }
    }
    return -1; // Mengembalikan -1 jika elemen tidak ditemukan
}

int main() {
    int arr[] = {1, 2, 4, 5, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;

    int hasil = pencarianBiner(arr, 0, n - 1, target);

    if (hasil != -1) {
        cout << "Elemen " << target << " ditemukan di indeks " << hasil << endl;
    } else {
        cout << "Elemen " << target << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

// Fungsi nilai balik dengan tipe data int
int tambahkan(int a, int b) {
    return a + b;
}

int main() {
    int hasil = tambahkan(5, 3);
    cout << "Hasil penjumlahan: " << hasil << endl;

    return 0;
}


#include <iostream>
using namespace std;

// Fungsi void tanpa nilai balik
void sapaPengguna(string nama) {
    cout << "Halo, " << nama << "!" << endl;
}

int main() {
    sapaPengguna("John");
    return 0;
}


#include <iostream>
using namespace std;

// Fungsi dengan parameter
void cetakPersegiPanjang(int panjang, int lebar) {
    for (int i = 0; i < panjang; ++i) {
        for (int j = 0; j < lebar; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    cetakPersegiPanjang(4, 5);
    return 0;
}
