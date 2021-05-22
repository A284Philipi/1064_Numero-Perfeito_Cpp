#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long int cont = 0, casos, numero, cont2 = 1, divisores = 0;
    cin >> casos;
    while (cont < casos){
        cin >> numero;
        if (numero == 1 || numero == 0){
            divisores = 2;
        }else{
            while (cont2 < numero){
                if (numero % cont2 == 0){
                    divisores = divisores + cont2;
                }
                cont2++;
            }
        }
        if (numero == divisores){
            cout << numero << " eh perfeito" <<endl;
        }else{
            cout << numero << " nao eh perfeito" <<endl;
        }
        divisores = 0;
        cont2 = 1;
        cont++;
    }
    return 0;
}
