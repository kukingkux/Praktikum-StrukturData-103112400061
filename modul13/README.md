# <h1 align="center">Laporan Praktikum Modul 13 <br>MULTI LINKED LIST</h1>

<p align="center">KEISHIN NAUFA ALFARIDZHI - 103112400061</p>

## Dasar Teori

C++ adalah bahasa pemrograman tingkat tinggi yang dikembangkan oleh Bjarne Stroustrup pada awal 1980-an di Bell Labs. Dirancang sebagai versi yang lebih lengkap dari bahasa pemrograman C, ada banyak fitur tambahan yang disertakan oleh C++.

Fitur ini termasuk object-oriented programming (OOP), pengelolaan memori secara manual, dan penggunaan template generik. Hasilnya, bahasa pemrograman ini pun menjadi lebih fleksibel dan efisien untuk berbagai kebutuhan.

C++ juga dirancang untuk menangani proyek pemrograman kompleks, termasuk aplikasi dengan performa tinggi seperti sistem operasi dan software grafis. Selain itu, C++ mendukung berbagai gaya pemrograman, mulai dari prosedural, generik, hingga berorientasi objek sehingga cocok untuk pengembangan software skala besar.

Berikut merupakan konsep dasar dalam bahasa C++

### 1. **Variabel**

Variabel adalah tempat penyimpanan data dalam program, yang memiliki nama dan nilai tertentu. Di C++, variabel memiliki tipe data yang menentukan jenis nilai yang bisa disimpan.

Berikut adalah tipe-tipe data yang ada dalam variabel C++:

- bool: singkatan dari tipe data boolean, yang hanya berisi dua nilai, yaitu True atau False.
- char: kependekan dari character, yaitu tipe data huruf dari A sampai Z.
- int: kepanjangannya adalah integer, yaitu tipe berupa angka.
- float dan double: tipe data yang berupa angka pecahan, contohnya 1,33.
- string: tipe data dalam bentuk kumpulan karakter, seperti “bahasa pemrograman C++“.

Selain itu, variabel bisa bersifat konstan dengan kata kunci const, yang artinya nilainya tidak bisa diubah setelah ditentukan. C++ juga mendukung pointer, yaitu variabel yang menyimpan alamat memori sehingga developer bisa mengontrol memori secar langsung.

Penulisan variabel dalam C++ terdiri dari dua langkah, yaitu deklarasi dan inisialisasi.

### 2. **Syntax**

Sintaks merupakan pedoman dan peraturan yang harus diikuti ketika menuliskan baris kode/instruksi dalam bahasa pemrograman. Selain itu, sintaks juga dapat dipandang sebagai kerangka yang menentukan struktur bahasa pemrograman.

Bahasa C++ juga memiliki sintaks untuk fungsi-fungsi yang sudah disediakan. Instruksi yang berbeda memiliki sintaks yang berbeda yang menentukan penggunaannya, tetapi program C++ juga memiliki aturan sintaks dasar yang diikuti di seluruh program.

- #include <iostream> : bagian ini disebut preprocessor directive untuk menyertakan file header.

- <iostream> : memberikan akses ke fungsi input-output standar dalam C++.

- using namespace std : bagian ini disebut deklarasi yang memberi tahu program untuk menggunakan namespace std yang berisi banyak fungsi dan objek standar.

- int main() : bagian ini disebut deklarasi fungsi utama (main) yang merupakan pintu masuk eksekusi untuk program C++.

- { dan } : bagian ini disebut kurung kurawal membuka dan menutup blok baris kode untuk fungsi main.

- Semicolon ( ; ) : setiap baris kode dalam contoh di atas diakhiri dengan simbol titik koma ( ; ). Simbol ini berfungsi sebagai penanda akhir dari setiap baris kode dalam program. Ketika kompiler menemui titik koma ini, proses eksekusi pada baris tersebut dihentikan dan lanjut ke baris kode berikutnya.

- return 0; : bagian ini disebut pernyataan kembalian yang mengindikasikan bahwa program telah selesai dengan sukses, sedangkan 0 adalah kode keluaran yang menunjukkan tidak ada kesalahan.

### 3. **Komentar**

Komentar dalam bahasa pemrograman C++ bertujuan untuk memberikan penjelasan mengenai setiap baris kode dengan tujuan memudahkan pembacaan. Penulisan komentar ini dilakukan untuk menyediakan informasi yang relevan terkait dengan implementasi kode yang sedang dibuat. Praktik ini umum dilakukan oleh para programmer sebagai bagian dari dokumentasi proyek mereka.

### 4. **Operasi Aritmatika**

Aritmatika adalah cabang ilmu matematika yang membahas perhitungan dasar "kabataku", yakni operasi perkalian, pembagian, penambahan dan pengurangan.

Selain keempat operasi di atas, bahasa C++ juga memiliki operasi modulo division, atau operator % yang dipakai untuk mencari sisa hasil bagi.

Berikut merupakan operasi aritmatika yang dapat dilakukan dalam bahasa C++.

- +=: assignment penambahan (Contoh: A += 7 ekuivalen dengan A = A + 7).
- -= : assignment pengurangan.
- \*= : assignment perkalian.
- /= : assignment pembagian.
- %=: assignment mod.

### 5. **Control Structures**

Control structure mengatur alur eksekusi program berdasarkan kondisi tertentu. Ada beberapa control structure utama dalam C++, termasuk if-else untuk percabangan serta for, while, dan do-while untuk loop atau perulangan.

Dengan struktur ini, program bisa memberikan respons yang berbeda tergantung pada input atau kondisi yang terjadi selama runtime. Control structure memastikan efisiensi dalam pemrosesan, terutama saat menangani data besar atau algoritma yang kompleks.

**if**<br>
Statement `if` digunakan untuk mengevaluasi ekspresi logis yang menghasilkan nilai `true` atau `false`. Apabila nilainya `true`, blok kode di dalam `if` akan dieksekusi. Kalau tidak, blok tersebut akan dilewati.

**else if dan else**<br>
Apabila kondisi di dalam `if` bernilai `false`, Anda bisa menggunakan `else if` untuk memeriksa kondisi lainnya. Kalau semua kondisi `if` dan `else if` bernilai `false`, blok `else` akan dijalankan sebagai opsi terakhir.

**for**<br>
Loop `for` digunakan untuk melakukan pengulangan dengan jumlah yang diketahui. Struktur ini mencakup **inisialisasi**, **kondisi**, dan **inkrementasi/dekrementasi** dalam satu baris.

Contohnya adalah sebagai berikut:

```c++
...
int main() {
for (int i = 0; i < 5; i++) {
    cout << "Perulangan ke-" << i << endl;
}
```

Pada contoh di atas, variabel `i` diinisialisasi dengan nilai 0. Loop akan berulang selama `i < 5`, dan setiap kali loop berakhir, nilai `i` akan bertambah 1. Pengulangan akan berhenti saat kondisi `i < 5` tidak lagi terpenuhi.

**while**<br>
Loop `while` akan terus mengeksekusi blok kode selama ekspresi kondisional bernilai `true`. Pengulangan akan berhenti begitu kondisi menjadi `false`.

**do-while**<br>
Dengan `do-while`, blok kode akan dieksekusi minimal satu kali, bahkan meskipun kondisinya bernilai `false` saat pemeriksaan pertama. Setelah satu kali eksekusi, kondisi akan diperiksa untuk menentukan apakah loop akan dijalankan lagi.

### 6. **Function**

Sebuah Function dalam C++ adalah blok kode yang dapat menerima input (dalam bentuk parameter) dari pemanggilnya, melakukan serangkaian operasi, dan secara opsional mengembalikan nilai sebagai output. Function sangat berguna untuk mengorganisir kode secara terstruktur dan dapat digunakan kembali.

**Deklarasi Function**<br>
Sebuah deklarasi Function minimal terdiri dari tipe pengembalian, nama Function, dan daftar parameter.

**Definisi Function**<br>
Definisi Function terdiri dari deklarasi dan body Function. Body Function adalah bagian dari Function yang berisi kode yang akan dieksekusi ketika Function dipanggil.

**Parameter dan Argumen**<br>
Sebuah Function memiliki daftar parameter yang memungkinkan pemanggil untuk meneruskan argumen ke dalam Function. Argumen adalah nilai konkret yang dilewatkan ke Function. Anda dapat menggunakan referensi atau nilai untuk mem-pass argumen ke dalam Function.

**Jenis Return**<br>
Jenis return function merujuk pada nilai yang dikembalikan oleh suatu fungsi setelah melakukan operasi atau pemrosesan tertentu. Dalam bahasa pemrograman C++, sebuah function dapat mengembalikan berbagai jenis nilai tergantung pada kebutuhan dan logika programnya.

### 7. **Array**

Array merupakan struktur data yang digunakan untuk `menyimpan sekumpulan data` dalam satu tempat. Setiap data dalam Array memiliki indeks, sehingga kita akan mudah memprosesnya.

Indeks array selalu dimulai dari angka nol (`0`). Pada teori struktur data ukuran array akan bergantung dari banyaknya data yang disimpan di dalamnya.

**Cara Membuat Array pada C++**<br>
Pada C++, array dapat kita buat dengan cara seperti ini.

```c++
// membuat array kosong dengan tipe data integer dan panjang 10
int nama_array[10];

// membuat array dengan langsung diisi
int nama_arr[3] = {0, 3, 2}
```

Cara membuat array hampir sama seperti cara membuat variabel biasa. Bedanya pada array kita harus menentukan panjangnya.

**Cara Mengambil Data dari Array**<br>
Seperti yang sudah kita ketahui, array akan menyimpan sekumpulan data dan memberinya nomer indeks agar mudah diakses. Indeks array selalu dimulai dari nol `0`.

Misalkan kita punya array seperti ini: <br>
`char huruf[5] = {'a', 'b', 'c', 'd', 'e'};`<br>
Bagaimana cara mengambil huruf `c`?

Jawabannya:
`huruf[2];`

**Mengisi Ulang Data Array**<br>
Data pada array dapat kita isi ulang dengan cara seperti ini:<br>
`huruf[2] = 'z';`<br>
Maka isi array `huruf` pada indeks ke-2 akan bernilai z`.

### 8. **Linked List**

Dalam C++, linked list merupakan struktur data linear yang memungkinkan user untuk menyimpan data di lokasi memory yang tidak berurutan. Sebuah linked list didefinisikan sebagai sekumpulan nodes yang dimana tiap node memiliki 2 anggota: value node itu sendiri dan petunjuk next/previous yang menyimpan alamat node berikutnya/sebelumnya.

**Representasi Linked List dalam C++**<br>
Dalam C++, linked list pada dasarnya direpresentasikan oleh pointer ke node pertama, yang umumnya disebut sebagai "**head**" dari list tersebut. Setiam node dalam list didefinisikan oleh struktur yang mencakup data field dan pointer yang mengarah ke struktur dengan tipe yang sama. Jenis struktur ini dikenal sebagai struktur self-referential.

**Singly Linked List**<br>
Singly linked List adalah bentuk paling sederhana dari linked list, di mana setiap node mengandung 2 anggota yaitu data dan next pointer yang menyimpan alamat node berikutnya. Setiap node dalam singly linked list terhubung melalui petunjuk berikutnya, dan penunjuk beriutnya dari node terakhir mengarah ke NULL, yang menandakan akhir dari linked list. Diagram berikut menggambarkan struktur singly linked list: <br>
![Diagram singly linked list](assets/singly-linked-list-in-c.webp)

**Doubly Linked List**<br>
Doubly Linked List adalah jenis linked list yang di mana setiap node mengandung 3 bagian: data, pointer ke node berikutnya, dan pointer ke node sebelumnya. Struktur ini memungkinkan penelusuran daftar ke arah depan dan belakang, berbeda dengan Singly Linked List yang hanya dapat ditelusuri ke arah depan.
![Diagram doubly linked list](assets/doubly-linked-list-in-c.webp)

### 9. **Stack**

Kontainer stack mengikuti urutan LIFO (Last In First Out) untuk proses insert dan delete. Artinya, elemen yang dimasukkan paling akhir akan dihapus terlebih dahulu, dan elemen yang dimasukkan paling awal akan dihapus terakhir. Hal ini dilakukan dengan insert dan delete elemen hanya pada satu sisi stack yang umumnya disebut sebagai top (puncak) dari stack.

**Operasi dasar Stack**

**1. Inserting Elements**<br>
Dalam stack, elemen baru hanya bisa di-insert di bagian top dari stack dengan menggunakan method push().

**2. Accessing Elements**<br>
Hanya elemen di bagian top dari stack yang bisa diakses menggunakan method top().

**3. Deleting Elements**<br>
Dalam stack, hanya elemen di bagian top yang bisa di-delete menggunakan method pop() dalam satu operasi.

**4. empty()**<br>
Method ini mengecek apakah stack kosong. Method ini mengembalikan true jika stack tidak memiliki elemen; jika tidak, method ini mengembalikan false.

**5. Size of stack**<br>
Function size() pada stack mengembalikan jumlah elemen yang sedang ada di dalam stack. Function ini membantu mengetahui berapa banyak item yang tersimpan tanpa memodifikasi stack.

### 10. **Queue**

Queue menyimpan banyak elemen dalam urutan tertentu yang disebut FIFO.

FIFO adalah singkatan dari First In, First Out. Untuk memvisualisasikan FIFO, bayangkan queue seperti orang-orang yang mengantre di sebuah supermarket. Orang yang pertama kali berdiri dalam antrean adalah orang pertama yang bisa membayar dan keluar dari supermarket. Cara pengorganisasian elemen seperti ini disebut FIFO dalam ilmu komputer dan pemrograman.

Berbeda dengan vector, elemen dalam queue tidak diakses berdasarkan nomor indeks. Karena elemen queue di-add di bagian belakang dan di-remove dari bagian depan, kita hanya bisa mengakses elemen yang ada di bagian front atau back saja.

**Operasi dasar Stack**<br>
Terdapat 2 operasi berupa Enqueue untuk insert, dan Dequeue untuk delete.

### 11. **BST (Binary Search Tree)**

Dalam C++, B-tree adalah struktur data balanced tree yang menjaga data tetap terurut dan memungkinkan proses search, sequential access, insert, dan delete dalam waktu logaritmik. B-tree merupakan generalisasi dari Binary Search Tree (BST) karena sebuah node dapat memiliki lebih dari dua child. B-tree dioptimalkan untuk sistem yang melakukan read dan write data dalam blok berukuran besar. Pada artikel ini, kita akan mempelajari cara mengimplementasikan B-tree dalam bahasa pemrograman C++.

**Properti B-tree**<br>
B-tree adalah self-balancing search tree di mana setiap node dapat memiliki banyak child. Struktur ini menjaga keseimbangan dengan memastikan semua leaf node berada pada level yang sama. Jumlah child dari sebuah node dibatasi dalam rentang tertentu yang telah ditentukan sebelumnya.

- B-tree memiliki properti sebagai berikut:
- Setiap node memiliki maksimal m child.
- Setiap non-leaf node (kecuali root) memiliki minimal ⌈m/2⌉ child.
- Root node memiliki minimal dua child.
- Non-leaf node dengan k child memiliki k−1 key.
- Semua leaf node berada pada level yang sama dan tidak menyimpan key.

**Implementasi B-tree dalam C++**<br>
B-tree dapat diimplementasikan menggunakan sebuah struktur node yang berisi array key dan array pointer ke child. Jumlah key dalam sebuah node selalu satu lebih sedikit dibandingkan jumlah pointer ke child. Diagram berikut merepresentasikan struktur dari sebuah B-tree:
![Diagram B-tree](assets/BTree.png)

### 12. **Multi Linked List**

Multi-linked list adalah jenis khusus dari list yang memiliki dua atau lebih urutan key secara logis. Sebelum membahas detail tentang multi-linked list, mari lihat terlebih dahulu apa itu linked list. Linked list adalah struktur data yang tidak memiliki batasan ukuran selama memori heap masih tersedia. Kita telah melihat berbagai jenis linked list, seperti Singly Linked List, Circular Linked List, dan Doubly Linked List. Pada bagian ini, kita akan membahas tentang multi-linked list.

Dalam multi-linked list, setiap node dapat memiliki N buah pointer ke node lainnya. Multi-linked list umumnya digunakan untuk mengorganisasi beberapa urutan (order) dari satu kumpulan elemen.

**Properti Multi-Linked List**

Properti dari multi-linked list adalah sebagai berikut:

- Merupakan list terintegrasi dari struktur-struktur yang saling berhubungan.
- Semua node terintegrasi menggunakan link berupa pointer.
- Node-node yang terhubung saling terhubung dengan data yang saling berkaitan.
- Node mengandung pointer dari satu struktur ke struktur lainnya.

<br>

**Struktur Multi-Linked List**

Struktur dari multi-linked list bergantung pada struktur node-nya. Sebuah node umumnya mengandung dua hal:

- Sebuah list pointer
- Seluruh data yang relevan

<br>

**Use Case Multi-Linked List**

Beberapa contoh penggunaan multi-linked list adalah:

- Beberapa urutan (order) dari satu set elemen
- Representasi sparse matrix
- List di dalam list

### 13. **Circular Linked List**

Circular linked list adalah struktur data di mana node terakhir menunjuk kembali ke node pertama, sehingga membentuk sebuah loop tertutup.

- Struktur: Semua node terhubung membentuk lingkaran, sehingga traversal dapat dilakukan secara terus-menerus tanpa menemui NULL.

- Perbedaan dengan Linked List Biasa: Pada linked list biasa, node terakhir menunjuk ke NULL, sedangkan pada circular linked list, node terakhir menunjuk ke node pertama.

- Penggunaan: Sangat cocok untuk tugas seperti scheduling dan pengelolaan playlist, di mana proses berjalan secara mulus dan berulang.

<br>

**Jenis-Jenis Circular Linked List**

Circular linked list dapat dibuat baik dari singly linked list maupun doubly linked list. Oleh karena itu, circular linked list pada dasarnya terbagi menjadi dua jenis:

1. Circular Singly Linked List

   Pada Circular Singly Linked List, setiap node hanya memiliki satu pointer yang disebut pointer next. Pointer next pada node terakhir menunjuk kembali ke node pertama, sehingga membentuk sebuah lingkaran. Pada jenis linked list ini, traversal hanya dapat dilakukan dalam satu arah.

2. Circular Doubly Linked List

   Pada Circular Doubly Linked List, setiap node memiliki dua pointer, yaitu prev dan next, mirip dengan doubly linked list. Pointer prev menunjuk ke node sebelumnya dan pointer next menunjuk ke node berikutnya. Selain node terakhir yang menyimpan alamat node pertama, node pertama juga menyimpan alamat node terakhir.

## Guided

Berikut merupakan guided dari Modul 13 - Multi Linked List

`guided1.cpp`

```c++
#include <iostream>
#include <string>
using namespace std;

struct ChildNode {
    string info;
    ChildNode *next;
};

struct ParentNode {
    string info;
    ChildNode *childHead;
    ParentNode *next;
};

ParentNode *createParent(string info) {
    ParentNode *newNode = new ParentNode;
    newNode->info = info;
    newNode->childHead = NULL;
    newNode->next = NULL;
    return newNode;
}

ChildNode *createChild(string info) {
    ChildNode *newNode = new ChildNode;
    newNode->info = info;
    newNode->next = NULL;
    return newNode;
}

void insertParent(ParentNode *&head, string info) {
    ParentNode *newNode = createParent(info);
    if (head == NULL) {
        head = newNode;
    } else {
        ParentNode *temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertChild(ParentNode *head, string parentInfo, string childInfo) {
    ParentNode *p = head;
    while(p != NULL && p->info != parentInfo) {
        p = p->next;
    }

    if (p != NULL) {
        ChildNode *newChild = createChild(childInfo);
        if (p->childHead == NULL) {
            p->childHead = newChild;
        } else {
            ChildNode *c = p->childHead;
            while(c->next != NULL) {
                c = c->next;
            }
            c->next = newChild;
        }
    }
}

void printAll(ParentNode *head) {
    ParentNode *p = head;
    while(p != NULL) {
        cout << p->info;
        ChildNode *c = p->childHead;
        if (c != NULL) {
            while(c != NULL) {
                cout << " -> " << c->info;
                c = c->next;
            }
        }
        cout << endl;
        p = p->next;
    }
}

int main() {
    ParentNode *list = NULL;
    insertParent(list, "Parent Node 1");
    insertParent(list, "Parent Node 2");

    printAll(list);
    cout << "\n";

    insertChild(list, "Parent Node 1", "Child Node A");
    insertChild(list, "Parent Node 1", "Child Node B");
    insertChild(list, "Parent Node 2", "Child Node C");

    printAll(list);

    return 0;
}
```

![Guided](output/guided.png)

### Penjelasan:

Program ini memperlihatkan struktur _Multi Linked List_ dengan mencetak node parent dengan nama `Parent Node` beserta dengan node anak dengan nama `Child Node`.

## Unguided

Di bawah ini merupakan code untuk pengerjaan unguided soal 2-3.

### Unguided 2 - Multi Linked List

Perhatikan program 46 _multilist.h_, buat _multilist.cpp_ untuk implementasi semua fungsi pada _multilist.h_. Buat _main.cpp_ untuk pemanggilan fungsi-fungsi tersebut.

`multilist.h`

```c++
/*file : multilist .h*/
/* contoh ADT list berkait dengan representasi fisik pointer*/
/* representasi address dengan pointer*/

/* info tipe adalah integer */
#ifndef MULTILIST_H_INCLUDED
#define MULTILIST_H_INCLUDED
#define Nil NULL

typedef int infotypeanak;
typedef int infotypeinduk;
typedef struct elemen_list_induk *address;
typedef struct elemen_list_anak *address_anak;
/* define list : */

/* list kosong jika L.first=Nil
setiap elemen address P dapat diacu P→info atau P→next
elemen terakhir list jika addressnya last, maka L.last = Nil */
struct elemen_list_anak{
    /* struct ini untuk menyimpan elemen anak dan pointer penunjuk
    elemen tetangganya */
    infotypeanak info;
    address_anak next;
    address_anak prev;
};

struct listanak {
    /* struct ini digunakan untuk menyimpan list anak itu sendiri */
    address_anak first;
    address_anak last;
};

struct elemen_list_induk{
    /* struct ini untuk menyimpan elemen induk dan pointer penunjuk
    elemen tetangganya */
    infotypeanak info;
    listanak lanak;
    address next;
    address prev;
};
struct listinduk {
    /* struct ini digunakan untuk menyimpan list induk itu sendiri */
    address first;
    address last;
};

/********* pengecekan apakah list kosong ***********/
bool ListEmpty(listinduk L);
/*mengembalikan nilai true jika list induk kosong*/
bool ListEmptyAnak(listanak L);
/*mengembalikan nilai true jika list anak kosong*/

/********* pembuatan list kosong *********/
void CreateList(listinduk &L);
/* I.S. sembarang
F.S. terbentuk list induk kosong*/

void CreateListAnak(listanak &L);
/* I.S. sembarang
F.S. terbentuk list anak kosong*/


/********* manajemen memori *********/
address alokasi(infotypeinduk P);
/* mengirimkan address dari alokasi sebuah elemen induk
jika alokasi berhasil, maka nilai address tidak Nil dan jika gagal
nilai address Nil */

address_anak alokasiAnak(infotypeanak P);
/* mengirimkan address dari alokasi sebuah elemen anak
jika alokasi berhasil, maka nilai address tidak Nil dan jika gagal
nilai address_anak Nil */

void dealokasi(address P);
/* I.S. P terdefinisi
F.S. memori yang digunakan P dikembalikan ke sistem */

void dealokasiAnak(address_anak P);
/* I.S. P terdefinisi
F.S. memori yang digunakan P dikembalikan ke sistem */
/********* pencarian sebuah elemen list *********/

address findElm(listinduk L, infotypeinduk X);
/* mencari apakah ada elemen list dengan P→info = X
jika ada, mengembalikan address elemen tab tsb, dan Nil jika sebaliknya
*/

address_anak findElm(listanak Lanak, infotypeanak X);
/* mencari apakah ada elemen list dengan P→info = X
jika ada, mengembalikan address elemen tab tsb, dan Nil jika sebaliknya
*/

bool fFindElm(listinduk L, address P);
/* mencari apakah ada elemen list dengan alamat P
mengembalikan true jika ada dan false jika tidak ada */

bool fFindElmanak(listanak Lanak, address_anak P);
/* mencari apakah ada elemen list dengan alamat P
mengembalikan true jika ada dan false jika tidak ada */

address findBefore(listinduk L, address P);
/* mengembalikan address elemen sebelum P
jika P berada pada awal list, maka mengembalikan nilai Nil */

address_anak findBeforeAnak(listanak Lanak, infotypeinduk X, address_anak
P);
/* mengembalikan address elemen sebelum P dimana P→info = X
jika P berada pada awal list, maka mengembalikan nilai Nil */

/********* penambahan elemen **********/
void insertFirst(listinduk &L, address P);
/* I.S. sembarang, P sudah dialokasikan
F.S. menempatkan elemen beralamat P pada awal list */

void insertAfter(listinduk &L, address P, address Prec);
/* I.S. sembarang, P dan Prec alamt salah satu elemen list
F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */
void insertLast(listinduk &L, address P);
/* I.S. sembarang, P sudah dialokasikan
F.S. menempatkan elemen beralamat P pada akhir list */

void insertFirstAnak(listanak &L, address_anak P);
/* I.S. sembarang, P sudah dialokasikan
F.S. menempatkan elemen beralamat P pada awal list */

void insertAfterAnak(listanak &L, address_anak P, address_anak Prec);
/* I.S. sembarang, P dan Prec alamt salah satu elemen list
F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLastAnak(listanak &L, address_anak P);
/* I.S. sembarang, P sudah dialokasikan
F.S. menempatkan elemen beralamat P pada akhir list */

/********* penghapusan sebuah elemen *********/
void delFirst(listinduk &L, address &P);
/* I.S. list tidak kosong
F.S. adalah alamat dari alamat elemen pertama list
sebelum elemen pertama list dihapus
elemen pertama list hilang dan list mungkin menjadi kosong
first elemen yang baru adalah successor first elemen yang lama */

void delLast(listinduk &L, address &P);
/* I.S. list tidak kosong
F.S. adalah alamat dari alamat elemen terakhir list
sebelum elemen terakhir list dihapus
elemen terakhir list hilang dan list mungkin menjadi kosong
last elemen yang baru adalah successor last elemen yang lama */

void delAfter(listinduk &L, address &P, address Prec);
/* I.S. list tidak kosng, Prec alamat salah satu elemen list
F.S. P adalah alamatdari Prec→next, menghapus Prec→next dari list */

void delP (listinduk &L, infotypeinduk X);
/* I.S. sembarang
F.S. jika ada elemen list dengan alamat P, dimana P→info = X,
        maka P dihapus dan P di-dealokasi,
        jika tidak ada maka list tetap list mungkin akan menjadi kosong
        karena penghapusan */

void delFirstAnak(listanak &L, address_anak &P);
/* I.S. list tidak kosong
F.S. adalah alamat dari alamat elemen pertama list
sebelum elemen pertama list dihapus
elemen pertama list hilang dan list mungkin menjadi kosong
first elemen yang baru adalah successor first elemen yang lama */

void delLastAnak(listanak &L, address_anak &P);
/* I.S. list tidak kosong
F.S. adalah alamat dari alamat elemen terakhir list
sebelum elemen terakhir list dihapus
elemen terakhir list hilang dan list mungkin menjadi kosong
last elemen yang baru adalah successor last elemen yang lama */

void delAfterAnak(listanak &L, address_anak &P, address_anak Prec);
/* I.S. list tidak kosng, Prec alamat salah satu elemen list
F.S. P adalah alamatdari Prec→next, menghapus Prec→next dari list */

void delPAnak (listanak &L, infotypeanak X);
/* I.S. sembarang
F.S. jika ada elemen list dengan alamat P, dimana P→info = X,
        maka P dihapus dan P di-dealokasi,
        jika tidak ada maka list tetap list mungkin akan menjadi kosong
        karena penghapusan */

/********** proses semau elemen list *********/
void printInfo(listinduk L);
/* I.S. list mungkin kosong
F.S. jika list tidak kosong menampilkan semua info yang ada pada list
*/


int nbList(listinduk L);
/* mengembalikan jumlah elemen pada list */

void printInfoAnak(listanak Lanak);
/* I.S. list mungkin kosong
F.S. jika list tidak kosong menampilkan semua info yang ada pada list
*/

int nbListAnak(listanak Lanak);
/* mengembalikan jumlah elemen pada list anak */

/********** proses terhadap list **********/
void delAll(listinduk &L);
/* menghapus semua elemen list dan semua elemen di-dealokasi */

#endif
```

<br>

`multilist.cpp`

```c++
#include <iostream>
#include "multilist.h"
using namespace std;

bool ListEmpty(listinduk L) {
    return (L.first == Nil && L.last == Nil);
}

bool ListEmptyAnak(listanak L) {
    return (L.first == Nil && L.last == Nil);
}

void CreateList(listinduk &L) {
    L.first = Nil;
    L.last = Nil;
}

void CreateListAnak(listanak &L) {
    L.first = Nil;
    L.last = Nil;
}

address alokasi(infotypeinduk P) {
    address newNode = new elemen_list_induk;
    newNode->info = P;
    newNode->next = Nil;
    newNode->prev = Nil;
    CreateListAnak(newNode->lanak);
    return newNode;
}

address_anak alokasiAnak(infotypeanak P) {
    address_anak newNode = new elemen_list_anak;
    newNode->info = P;
    newNode->next = Nil;
    newNode->prev = Nil;
    return newNode;
}

void dealokasi(address P) {
    delete P;
}

void dealokasiAnak(address_anak P) {
    delete P;
}

address findElm(listinduk L, infotypeinduk X) {
    address P = L.first;
    while (P != Nil && P->info != X) {
        P = P->next;
    }
    return P;
}

address_anak findElm(listanak Lanak, infotypeanak X) {
    address_anak P = Lanak.first;
    while (P != Nil && P->info != X) {
        P = P->next;
    }
    return P;
}

bool fFindElm(listinduk L, address P) {
    address curr = L.first;
    while (curr != Nil) {
        if (curr == P) {
            return true;
        } else {
            curr = curr->next;
        }
    }
    return false;
}

bool fFindElmanak(listanak Lanak, address_anak P) {
    address_anak curr = Lanak.first;
    while (curr != Nil) {
        if (curr == P) {
            return true;
        } else {
            curr = curr->next;
        }
    }
    return false;
}

address findBefore(listinduk L, address P) {
    address curr = L.first;
    address before = Nil;
    while (curr != Nil && curr != P) {
        before = curr;
        curr = curr->next;
    }
    return before;
}

address_anak findBeforeAnak(listanak Lanak, infotypeinduk X, address_anak P) {
    address_anak curr = Lanak.first;
    address_anak before = Nil;
    while (curr != Nil && curr != P) {
        before = curr;
        curr = curr->next;
    }
    return before;
}

void insertFirst(listinduk &L, address P) {
    if (ListEmpty(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertAfter(listinduk &L, address P, address Prec) {
    if (Prec != Nil) {
        P->next = Prec->next;
        P->prev = Prec;
        if (Prec->next != Nil) {
            Prec->next->prev = P;
        } else {
            L.last = P;
        }
    }
}

void insertLast(listinduk &L, address P) {
    if (ListEmpty(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void insertFirstAnak(listanak &L, address_anak P) {
    if (ListEmptyAnak(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertAfterAnak(listanak &L, address_anak P, address_anak Prec) {
    if (Prec != Nil) {
        P->next = Prec->next;
        P->prev = Prec;
        if (Prec->next != Nil) {
            Prec->next->prev = P;
        } else {
            L.last = P;
        }
    }
}

void insertLastAnak(listanak &L, address_anak P) {
    if (ListEmptyAnak(L)) {
        L.first = P;
        L.last = P;
    } else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void delFirst(listinduk &L, address &P) {
    if (!ListEmpty(L)) {
        P = L.first;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.first = L.first->next;
            L.first->prev = Nil;
            P->next = Nil;
        }
    }
}

void delLast(listinduk &L, address &P) {
    if (!ListEmpty(L)) {
        P = L.last;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.last = L.last->prev;
            L.last->next = Nil;
            P->prev = Nil;
        }
    }
}

void delAfter(listinduk &L, address &P, address Prec) {
    if (Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        Prec->next = P->next;
        if (P->next != Nil) {
            P->next->prev = Prec;
        } else {
            L.last = Prec;
        }
    }
}

void delP (listinduk &L, infotypeinduk X) {
    address P = findElm(L, X);
    if (P != Nil) {
        if (P == L.first) {
            delFirst(L, P);
        } else if (P == L.last) {
            delLast(L, P);
        } else {
            address before = findBefore(L, P);
            delAfter(L, P, before);
        }
    }
}

void delFirstAnak(listanak &L, address_anak &P) {
    if (!ListEmptyAnak(L)) {
        P = L.first;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.first = L.first->next;
            L.first->prev = Nil;
            P->next = Nil;
        }
    }
}

void delLastAnak(listanak &L, address_anak &P) {
    if (!ListEmptyAnak(L)) {
        P = L.last;
        if (L.first == L.last) {
            L.first = Nil;
            L.last = Nil;
        } else {
            L.last = L.last->prev;
            L.last->next = Nil;
            P->prev = Nil;
        }
    }
}

void delAfterAnak(listanak &L, address_anak &P, address_anak Prec) {
    if (Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        Prec->next = P->next;
        if (P->next != Nil) {
            P->next->prev = Prec;
        } else {
            L.last = Prec;
        }
    }
}

void delPAnak (listanak &L, infotypeanak X) {
    address_anak P = findElm(L, X);
    if (P != Nil) {
        if (P == L.first) {
            delFirstAnak(L, P);
        } else if (P == L.last) {
            delLastAnak(L, P);
        } else {
            address_anak before = findBeforeAnak(L, X, P);
            delAfterAnak(L, P, before);
        }
    }
}

void printInfo(listinduk L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
}

int nbList(listinduk L) {
    int count = 0;
    address P = L.first;
    while (P != Nil) {
        count++;
        P = P->next;
    }
    return count;
}

void printInfoAnak(listanak Lanak) {
    address_anak P = Lanak.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
}

int nbListAnak(listanak Lanak) {
    int count = 0;
    address_anak P = Lanak.first;
    while (P != Nil) {
        count++;
        P = P->next;
    }
    return count;
}

void delAll(listinduk &L) {
    address P;
    while (!ListEmpty(L)) {
        delFirst(L, P);
        dealokasi(P);
    }
}
```

<br>

`main.cpp`

```c++
#include <iostream>
#include "multilist.h"
#include "multilist.cpp"
using namespace std;

int main() {
    listinduk L;
    CreateList(L);

    address Parent1 = alokasi(10);
    address Parent2 = alokasi(20);
    address Parent3 = alokasi(30);

    insertLast(L, Parent1);
    insertLast(L, Parent2);
    insertLast(L, Parent3);

    address_anak Child1 = alokasiAnak(100);
    address_anak Child2 = alokasiAnak(200);
    address_anak Child3 = alokasiAnak(300);

    insertLastAnak(Parent1->lanak, Child1);
    insertLastAnak(Parent1->lanak, Child2);
    insertLastAnak(Parent2->lanak, Child3);

    cout << "Isi list induk: ";
    printInfo(L);
    cout << "\nIsi list induk 1: ";
    printInfoAnak(Parent1->lanak);
    cout << "\nIsi list induk 2: ";
    printInfoAnak(Parent2->lanak);
    cout << "\nJumlah elemen dalam list induk: " << nbList(L) << endl;

    delAll(L);
    cout << "Setelah menghapus semua elemen, apakah list induk kosong? " << (ListEmpty(L) ? "Ya" : "Tidak") << endl;

    return 0;
}
```

> output<br>![Screenshot output unguided 3](output/unguided_2.png)

Program implementasi _Multi Linked List_ pada C++. Terdapat 3 buah file yang terdiri dari 1 file header (`multilist.h`), 1 file ADT (`multilist.cpp`), dan 1 file utama (`main.cpp`).

1. multilist.h: File header ini bekerja sebagai interface, mendeklarasikan semua struct dan function.

   - infotypeanak: definisi type **integer**.

   - infotypeinduk: definisi type **integer**.

   - address: definisi type pointer ke struct elemen_list_induk.

   - address_anak: definisi type pointer ke struct elemen_list_anak.

   - struct elemen_list_anak: menyimpen elemen anak dan pointer penunjuk ke tetangganya.

   - struct listanak: menyimpan list anak itu sendiri.

   - struct elemen_list_induk: menyimpen elemen induk dan pointer penunjuk ke tetangganya serta list anak.

   - struct listinduk: menyimpan list induk itu sendiri.

2. multilist.cpp: File implementasi ini berisi logic dari semua function yang dideklarasikan di dalam file header.

   - `ListEmpty()`: Function untuk mengecek apakah list induk kosong. Return true jika list kosong, Return false jika tidak kosong.

   - `ListEmptyAnak()`: Function untuk mengecek apakah list anak kosong. Return true jika list kosong, Return false jika tidak kosong.

   - `CreateList()`: Prosedur untuk membuat list induk kosong.

   - `CreateListAnak()`: Prosedur untuk membuat list anak kosong.

   - `alokasi()`: Function untuk mengalokasikan memory untuk node baru dengan value P. Return address dari node baru tersebut.

   - `alokasiAnak()`: Function untuk mengalokasikan memory untuk node anak baru dengan value P. Return address dari node anak baru tersebut.

   - `dealokasi()`: Prosedur untuk mengembalikan memori yang digunakan P ke sistem.

   - `dealokasiAnak()`: Prosedur untuk mengembalikan memori yang digunakan P ke sistem.

   - `findElm()`: Function untuk mencari elemen list induk dengan value X. Jika ditemukan, return address elemen tersebut. Jika tidak, return Nil.

   - `fFindElm()`: Function untuk mencari elemen list induk dengan address P. Return true jika ketemu, return false jika tidak ketemu.

   - `fFindElmanak()`: Function untuk mencari elemen list anak dengan address P. Return true jika ketemu, return false jika tidak ketemu.

   - `findBefore()`: Function untuk mengembalikan address elemen sebelum P pada list induk. Jika P berada pada awal list, return Nil.

   - `findBeforeAnak()`: Function untuk mengembalikan address elemen sebelum P pada list anak. Jika P berada pada awal list, return Nil.

   - `insertFirst()`: Prosedur untuk menempatkan elemen dengan address P pada awal list induk.

   - `insertAfter()`: Prosedur untuk menempatkan elemen dengan address P sesudah elemen dengan address Prec pada list induk.

   - `insertLast()`: Prosedur untuk menempatkan elemen dengan address P pada akhir list induk.

   - `insertFirstAnak()`: Prosedur untuk menempatkan elemen dengan address P pada awal list anak.

   - `insertAfterAnak()`: Prosedur untuk menempatkan elemen dengan address P sesudah elemen dengan address Prec pada list anak.

   - `insertLastAnak()`: Prosedur untuk menempatkan elemen dengan address P pada akhir list anak.

   - `delFirst()`: Prosedur untuk menghapus elemen pertama list induk dan mengembalikan address elemen tersebut ke P. Kalau list kosong, tidak melakukan apa-apa. Kalau list jadi kosong setelah hapus data, maka first dan last di-set ke Nil.

   - `delLast()`: Prosedur untuk menghapus elemen terakhir list induk dan mengembalikan address elemen tersebut ke P. Kalau list kosong, tidak melakukan apa-apa. Kalau list jadi kosong setelah hapus data, maka first dan last di-set ke Nil.

   - `delAfter()`: Prosedur untuk menghapus elemen sesudah Prec pada list induk dan mengembalikan address elemen tersebut ke P.

   - `delP()`: Prosedur untuk menghapus elemen dengan value X pada list induk. Jika ditemukan, elemen tersebut dihapus dan dilakukan dealokasi.

   - `delFirstAnak()`: Prosedur untuk menghapus elemen pertama list anak dan mengembalikan address elemen tersebut ke P. Kalau list kosong, tidak melakukan apa-apa. Kalau list jadi kosong setelah hapus data, maka first dan last di-set ke Nil.

   - `delLastAnak()`: Prosedur untuk menghapus elemen terakhir list anak dan mengembalikan address elemen tersebut ke P. Kalau list kosong, tidak melakukan apa-apa. Kalau list jadi kosong setelah hapus data, maka first dan last di-set ke Nil.

   - `delAfterAnak()`: Prosedur untuk menghapus elemen sesudah Prec pada list anak dan mengembalikan address elemen tersebut ke P.

   - `delPAnak()`: Prosedur untuk menghapus elemen dengan value X pada list anak. Jika ditemukan, elemen tersebut dihapus dan dilakukan dealokasi.

   - `printInfo()`: Prosedur untuk menampilkan semua info (data) yang ada pada list induk.

   - `nbList()`: Function untuk menghitung jumlah elemen pada list induk. Return jumlah elemen.

   - `printInfoAnak()`: Prosedur untuk menampilkan semua info (data) yang ada pada list anak.

   - `nbListAnak()`: Function untuk menghitung jumlah elemen pada list anak. Return jumlah elemen.

   - `delAll()`: Prosedur untuk menghapus semua elemen pada list induk dan melakukan dealokasi pada setiap elemen.

3. `main.cpp`: File utama untuk memanggil function dari `multilist.cpp` untuk menjalankan dan menggunakan multilist.

---

### Unguided 3

Buatlah ADT _Multi Linked list_ sebagai berikut di dalam file “**circularlist.h**”:

```
Type infotype : mahasiswa <
    Nama:string
    Nim:string
    Jenis_kelamin:char
    Ipk:float>
Type address : pointer to ElmList
Type ElmList <
    info : infotype
    next :address>
Type List <
    First : address>
```

- Terdapat 11 fungsi/prosedur untuk ADT circularlist
  - procedure CreateList( input/output L : List )
  - function alokasi( x : infotype ) → address
  - procedure dealokasi( input/output t P : address )
  - procedure insertFirst( input/output L : List, input P : address )
  - procedure insertAfter( input/output L : List, input Prec : address, P : address)
  - procedure insertLast( input/output L : List, input P : address )
  - procedure deleteFirst( input/output L : List, input/output P : address )
  - procedure deleteAfter( input/output L : List, input Prec : address,  
     input/output t P : address )
  - procedure deleteLast( input/output L : List, P : address )
  - function findElm( L : List, x : infotype ) → address
  - procedure printInfo( input L : List )

Buatlah implementasi ADT _Doubly Linked list_ pada _file_ “**circularlist.cpp**”. Tambahkan fungsi/prosedur berikut pada file “**main.cpp**”.

- fungsi create ( in nama, nim : string, jenis_kelamin : char, ipk : float)
  - fungsi disediakan, ketik ulang code yang diberikan
  - fungsi mengalokasikan sebuah elemen list dengan info sesuai input

`circularlist.h`

```c++
#ifndef CIRCULARLIST_H_INCLUDED
#define CIRCULARLIST_H_INCLUDED
#define Nil NULL
#include <string>
using namespace std;

typedef struct ElmList *address;

struct infotype {
    string Nama;
    string Nim;
    char Jenis_kelamin;
    float IPK;
};

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

void CreateList(List &L);
address alokasi(infotype x);
void dealokasi(address P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address P, address Prec);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);
address findElm(List L, infotype x);
void printInfo(List L);
address CreateData(string nama, string nim, char jenis_kelamin, float ipk);


#endif
```

<br>

`circularlist.cpp`

```c++
#include <iostream>
#include "circularlist.h"
using namespace std;

void CreateList(List &L) {
    L.First = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi (address P) {
    delete P;
}

void insertFirst(List &L, address P) {
    if (L.First == Nil) {
        L.First = P;
        P->next = L.First;
    } else {
        address last = L.First;
        while (last->next != L.First) {
            last = last->next;
        }
        P->next = L.First;
        L.First = P;
        last->next = L.First;
    }
}

void insertAfter(List &L, address Prec, address P) {
    if (Prec != Nil) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void insertLast(List &L, address P) {
    if (L.First == Nil) {
        L.First = P;
        P->next = L.First;
    } else {
        address last = L.First;
        while (last->next != L.First) {
            last = last->next;
        }
        last->next = P;
        P->next = L.First;
    }
}

void deleteFirst(List &L, address &P) {
    if (L.First != Nil) {
        P = L.First;
        if (L.First->next == L.First) {
            L.First = Nil;
        } else {
            address last = L.First;
            while (last->next != L.First) {
                last = last->next;
            }
            L.First = L.First->next;
            last->next = L.First;
        }
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    if (Prec != Nil && Prec->next != L.First) {
        P = Prec->next;
        Prec->next = P->next;
    }
}

void deleteLast(List &L, address &P) {
    if (L.First != Nil) {
        address last = L.First;
        address beforeLast = Nil;
        while (last->next != L.First) {
            beforeLast = last;
            last = last->next;
        }
        P = last;
        if (beforeLast == Nil) {
            L.First = Nil;
        } else {
            beforeLast->next = L.First;
        }
    }
}

address findElm(List L, infotype x) {
    if (L.First == Nil) {
        return Nil;
    } else {
        address P = L.First;
        do {
            if (P->info.Nim == x.Nim) {
                return P;
            } else {
                P = P->next;
            }
        } while (P != L.First);
        return Nil;
    }
}

void printInfo(List L) {
    int i = 1;
    if (L.First == Nil) {
        cout << "List kosong." << endl;
    } else {
        address P = L.First;
        cout << "No\t| Nama \t| Nim \t| Jenis Kelamin | IPK" << endl;
        cout << "-----------------------------------------------" << endl;
        do {
            cout << i << "\t| " << P->info.Nama << "\t| " << P->info.Nim << "\t| " << P->info.Jenis_kelamin << "\t\t| " << P->info.IPK << endl;
            P = P->next;
            i++;
        } while (P != L.First);
    }
}

address CreateData(string nama, string nim, char jenis_kelamin, float ipk)
{
    /**
    * PR : mengalokasikan sebuah elemen list dengan info dengan info sesuai input
    * FS : address P menunjuk elemen dengan info sesuai input
    */
    infotype x;
    address P;
    x.Nama = nama;
    x.Nim = nim;
    x.Jenis_kelamin = jenis_kelamin;
    x.IPK = ipk;
    P = alokasi(x);
    return P;
}
```

<br>

`main.cpp`

```c++
#include <iostream>
#include "circularlist.h"
#include "circularlist.cpp"
using namespace std;

int main() {
    List L, A, B, L2;

    address P1 = Nil;
    address P2 = Nil;
    infotype x;

    CreateList(L);

    cout<<"coba insert first, last, dan after"<<endl;
    P1 = CreateData("Danu", "04", 'l', 4.0);
    insertFirst(L,P1);
    P1 = CreateData("Fahmi", "06", 'l',3.45);
    insertLast(L,P1);
    P1 = CreateData("Bobi", "02", 'l',3.71);
    insertFirst(L,P1);

    P1 = CreateData("Ali", "01", 'l', 3.3);
    insertFirst(L,P1);

    P1 = CreateData("Gita", "07", 'p', 3.75);
    insertLast(L,P1);

    x.Nim = "07";
    P1 = findElm(L,x);
    P2 = CreateData("Cindi", "03", 'p', 3.5);
    insertAfter(L, P1, P2);

    x.Nim = "02";
    P1 = findElm(L,x);
    P2 = CreateData("Hilmi", "08", 'p', 3.3);
    insertAfter(L, P1, P2);

    x.Nim = "04";
    P1 = findElm(L,x);
    P2 = CreateData("Eli", "05", 'p', 3.4);
    insertAfter(L, P1, P2);

    printInfo(L);
    return 0;
}
```

> output<br>![Screenshot output unguided 1](output/unguided_3.png)

Program implementasi _Circular List_ pada C++. Diimplementasikan menggunakan _Doubly Linked List_ dan memiliki 3 operasi yaitu _insert_, _find_ & _delete_. Terdapat 3 buah file yang terdiri dari 1 file header (`circularlist.h`), 1 file ADT (`circularlist.cpp`), dan 1 file utama (`main.cpp`).

1. circularlist.h: File header ini bekerja sebagai interface, mendeklarasikan semua struct dan function.

   - address: definisi type pointer ke struct ElmList.

   - struct infotype: mendefinisikan tipe data untuk menyimpan informasi mahasiswa yang terdiri dari Nama, Nim, Jenis_kelamin, dan Ipk.

   - struct ElmList: menyimpan elemen list dan pointer ke elemen selanjutnya.

   - struct List: menyimpan list itu sendiri dengan pointer ke elemen pertama.

2. circularlist.cpp: File implementasi ini berisi logic dari semua function yang dideklarasikan di dalam file header.

   - `CreateList()`: Prosedur untuk membuat list kosong.

   - `alokasi()`: Function untuk mengalokasikan memory untuk node baru dengan value x. Return address dari node baru tersebut.

   - `dealokasi()`: Prosedur untuk mengembalikan memori yang digunakan P ke sistem.

   - `insertFirst()`: Prosedur untuk menempatkan elemen dengan address P pada awal list.

   - `insertAfter()`: Prosedur untuk menempatkan elemen dengan address P sesudah elemen dengan address Prec.

   - `insertLast()`: Prosedur untuk menempatkan elemen dengan address P pada akhir list. Cek apakah list kosong atau tidak untuk mengatur pointer next dari elemen terakhir.

   - `deleteFirst()`: Prosedur untuk menghapus elemen pertama list dan mengembalikan address elemen tersebut ke P. Kalau list kosong, tidak melakukan apa-apa. Kalau list jadi kosong setelah hapus data, maka first di-set ke Nil.

   - `deleteAfter()`: Prosedur untuk menghapus elemen sesudah Prec dan mengembalikan address elemen tersebut ke P.

   - `deleteLast()`: Prosedur untuk menghapus elemen terakhir list dan mengembalikan address elemen tersebut ke P. Kalau list kosong, tidak melakukan apa-apa. Kalau list jadi kosong setelah hapus data, maka first di-set ke Nil.

   - `findElm()`: Function untuk mencari elemen list dengan value x. Jika ditemukan, return address elemen tersebut. Jika tidak, return Nil.

   - `printInfo()`: Prosedur untuk menampilkan semua info (data) yang ada pada list.

   - `CreateData()`: Function untuk mengalokasikan sebuah elemen list dengan info sesuai input. Return address dari elemen tersebut.

3. `main.cpp`: File utama untuk memanggil function dari `circularlist.cpp` untuk menjalankan operasi Circular List.

## Referensi

1. _Hostinger_. https://www.hostinger.com/id/tutorial/bahasa-pemrograman-cpp. Diakses pada 03 Oktober 2025.
2. _Dicoding_. https://www.dicoding.com/blog/memahami-esensi-bahasa-pemrograman-c/. Diakses pada 03 Oktober 2025.
3. _Duniailkom_. https://www.duniailkom.com/tutorial-belajar-c-plus-plus-jenis-jenis-operator-aritmatika-bahasa-c-plus-plus/. Diakses pada 03 Oktober 2025.
4. _kodingakademi_. https://www.kodingakademi.id/function-c-panduan-lengkap/. Diakses pada 03 Oktober 2025.
5. _petanikode_ . https://www.petanikode.com/cpp-array/. Diakses pada 06 Oktober 2025.
6. _GeekForGeeks_. https://www.geeksforgeeks.org/cpp/cpp-linked-list/. Diakses pada 13 Oktober 2025.
7. _GeekForGeeks_. https://www.geeksforgeeks.org/cpp/doubly-linked-list-in-cpp/. Diakses pada 27 Oktober 2025.
8. _GeekForGeeks_. https://www.geeksforgeeks.org/cpp/stack-in-cpp-stl/. Diakses pada 4 November 2025.
9. _W3schools_. https://www.w3schools.com/cpp/cpp_queues.asp. Diakses pada 14 November 2025.
10. _GeeksForGeeks_. https://www.geeksforgeeks.org/cpp/b-tree-implementation-in-cpp/. Diakses pada 6 Desember 2025.
11. _GeeksForGeeks_. https://www.geeksforgeeks.org/dsa/circular-linked-list/. Diakses pada 18 Desember 2025.
12. _GeekForGeeks_. https://www.geeksforgeeks.org/dsa/introduction-to-multi-linked-list/. Diakses 18 Desember 2025.
