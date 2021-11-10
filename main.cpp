#include <iostream>
using namespace std;
// stampare n numeri della sequenza di Fibonacci
int main() {
    int PrimoNum=0, SecondoNum=0, ProssimoNum=0, n=0;
    cin >>n;

    if (n>=2){
        PrimoNum=1;
        SecondoNum=1;
        cout << PrimoNum << endl << SecondoNum << endl;
        for (int i = 2; i < n; i++) {
            ProssimoNum=PrimoNum+SecondoNum;
            PrimoNum= SecondoNum;
            SecondoNum= ProssimoNum;
            cout << ProssimoNum<< endl;
        }
    } else {
        cout << "Errore" << endl;
    }
    return 0;
}
