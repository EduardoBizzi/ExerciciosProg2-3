#include <iostream>
using namespace std;

int main(){
    float numero1 = 7.3, numero2;
    float *fp;
    fp = &numero1;
    cout << *fp << endl;
    numero2 = *fp;
    cout << numero2 << endl;
    cout << &numero1 << endl;
    cout << fp << endl;
    if(&numero1 == fp){
        cout << "Sim, o valor impresso e o mesmo" << endl;
    }
}