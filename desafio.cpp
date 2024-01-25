#include <new>
#include <iostream>

int main(){
    int n=0,piramidal=0,contador=0,par=0,impar=0;
    bool naoPiramidal = false;

    std::cout << "digite a quantidade de elementos da sequência:\n";
    std::cin >> n;
    int *vetor = new int[n];

    for(int i = 0;i<n;i++){
        if(contador == n){
            break;
        }

        for(int j=i;j<i*2;j++){
            if(contador == n){
                break;
            }
            contador++;
            std::cout << "digite o elemento da sequência " << i << std::endl;
            std::cin >> vetor[contador];
            if(vetor[contador]%2 == 0){
                par++;
            }else{
                impar++;
            }

        }
        std::cout << "par: " << par << std::endl << "impar: " << impar << std::endl << "piramidal: "
        << piramidal << std::endl;
        if(par == i || impar == i){
            piramidal++;
        }else{
            naoPiramidal = true;
        }
        if(par+impar != piramidal-1){
            naoPiramidal = true;
        }
        par = 0;
        impar = 0;
        
    }
    if(naoPiramidal == false){
        std::cout << "é pirâmidal com " << piramidal-1 << "-piramidal.\n";
    }else{
        std::cout << "Não é pirâmidal.\n";
    }
}