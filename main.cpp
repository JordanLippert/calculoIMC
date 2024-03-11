#include <iostream>
using namespace std;

float peso, altura, imc;

int main() {
    //coleta de dados do usuário de peso e altura
    cout << " Digite seu peso em Kg: ";
    cin >> peso;
    cout << " Agora digite sua altura: ";
    cin >> altura;

    //cálculo IMC
    imc = peso / (altura * altura);

    //impressão do IMC do usuário
    if (imc < 18.5){
        cout << " Seu IMC e: " << imc << ", esta abaixo do peso";
    }
    else if (imc >= 18.5 && imc < 25){
        cout << " Seu IMC e: " << imc <<", esta num peso normal";
    }
    else if (imc >= 25 && imc < 30){
        cout << " Seu IMC e: " << imc <<", esta acima do peso normal";
    }
    else if (imc >= 30 && imc < 35){
        cout << " Seu IMC e: " << imc <<", cuidado voce esta com Obesidade Grau 1!";
    }
    else if (imc >= 35 && imc < 40){
        cout << " Seu IMC e: " << imc <<", ATENCAO! Voce esta com Obesidade Grau 2!";
    }
    else
        cout << " Seu IMC e: " << imc <<", ATENCAO! Voce esta com Obesidade Grau 3";
    return 0;
}