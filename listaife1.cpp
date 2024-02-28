#include <iostream>

using namespace std;

float calculoimc(float altura, float massa){
    float imc = massa/(altura*altura);
    return imc;
}

int main(){
    float massa, altura;
    cout << "Digite sua massa (em kg) e sua altura (em metros): ";
    cin >> massa >> altura;
    float imc = calculoimc(altura,massa);
    if(imc<17){
        cout << "Voce esta muito abaixo do peso!";
        return 0;
    }else if(17<= imc && imc <18.5){
        cout << "Voce esta abaixo do peso!";
        return 0;
    }else if(18.5<=imc && imc<25){
        cout << "Voce esta com o peso normal!";
        return 0;
    }else if(25<=imc && imc<30){
        cout << "Voce esta acima do peso!";
        return 0;
    }else if(30<=imc && imc<35){
        cout << "Voce esta com obesidade!";
        return 0;
    }else if(35<=imc && imc<40){
        cout << "Voce esta com obesidade severa!";
        return 0;
    }else if(40<=imc){
        cout << "Voce esta com obesidade morbida!";
        return 0;
    }
}