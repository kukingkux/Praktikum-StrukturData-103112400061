#ifndef SERVICE_H_INCLUDED
#define SERVICE_H_INCLUDED
#include <string>
using namespace std;

struct Service{
    string nama;
    string pesanan;
    Service *next;
};

Service *createService(string nama, string pesanan);
void insertService(string nama, string pesanan);
void serveService();
void showServices();

#endif