#include <iostream>
#include <string>
using namespace std;

class pencilbox {
public:
    int pens;
    int pencils;
    int erasers;

    void additem() {
    pens=2;
    pencils=3;
    erasers=1;
    }
void removeitem()
{
    pens--;
}
void displaycontents() {
cout<<"pens:"<<pens<< endl;
cout<<"pencils:"<<pencils<<endl;
cout<<"erasers:"<<erasers<<endl;
}
};
 int main()
 {
 pencilbox p;
 p.additem();
 p.removeitem();
 p.displaycontents();
 return 0;
 }
