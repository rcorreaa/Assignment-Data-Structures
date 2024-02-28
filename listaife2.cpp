#include <iostream>

using namespace std;

int bis(int ano){
    if(ano%4 == 0){
        cout << "O ano " << ano << " e um ano bissexto";
        return 0;
    }else{
        cout << "O ano " << ano << " nao e um ano bissexto";
        return 0;
    }
}

int main(){
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;
    bis(ano);
    return 0;
}