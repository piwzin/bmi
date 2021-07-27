#include<iostream>

using namespace std;
 
int main(){
    float imc, peso, altura; 
    cout << "Por favor, digite o seu peso em quilos: ";
    cin >> peso;
    cout << "Por favor, digite a sua altura em metros: ";
    cin >> altura;
    cout << "IMC = "<< imc << endl;
    imc = peso / (altura * altura);

    if(imc < 18.3768){
        cout << "Abaixo do Peso";
    }
    else if(imc < 22.0522 && imc > 18.3768){
        cout << "Normal";
    }
    else if(imc > 22.0522 && imc < 26.7299){
        cout << "Sobrepeso";
    }
    else if(imc > 26.7299 && imc < 30.0712){
        cout << "Obesidade 1";
    }
    else if(imc > 30.0712 && imc < 36.7536){
        cout << "Obesidade 2";
    }
    return 0;
