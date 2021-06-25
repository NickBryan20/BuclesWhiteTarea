#include <iostream>
#include <stdlib.h>

int main() {
    //1. Imprima las 10 primeras tablas de
    // multiplicar usando bucles "while"
    int numero;

    do{
        cout<<"Digite un numero: "; cin>>numero
    }while((numero<1)  ||  (numero>10));

    for(int i=1; i<=10;i++){
        cout<<numero<<" X "<<i<<" = "<<numero*i<<endl;
    }

    cout<<"\n\n";
    system("pause");


    //2. Realizar la sumatoria de los 50 primeros números primos
    // Ejemplo: 1 +2 +3 + 5 +   7 + 11 + 13.... + 31 +... etc
    bool primo(int n){
        bool condicion;
        if(n != 1 && n != 0){

            for(int i=2; i<=n; i++){
                if(n % i == 0){
                    if(n == i){
                        condicion = true
                    }
                    else{
                        condicion = false;
                        return condicion;
                    }
                }

            }
        }else condicion = false;

        return condicion;
    }


    int n;
         cout<<"Ingrese hasta que número buscar"<<endl;
         cin>>n;

         for(int i=1; 1<=n; i++){
             if(primo(i)) cout<<i<<endl;


         }


         //3. Realizar la sumatoria de los 10 primeros factoriales
         // Ejemplo:    fact(1) + fact(2) + fact(3) +... fact(10)
#include<iostream>
#include<stdlib.h>

using namespace std;
int main(){
         int numero, factorial = 1;

         cout<<"Digite un numero "; cin>>numero;

         for(int i=1;i<=numero;i++){
             factorial = factorial * i;
         }

         cout<<"\nEl factorial del numero es: "<<factorial<<endl;

         system("pause");
         return 0;
}
