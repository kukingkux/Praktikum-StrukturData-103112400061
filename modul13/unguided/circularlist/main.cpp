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