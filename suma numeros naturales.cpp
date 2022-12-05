// suma_de_n_numeros_naturales.cpp : 
// miau x2
//

#include <iostream>

int suma(int n, int miu, int conta)
{
    if (++conta <= n)
        return suma(n, miu + conta, conta);
    else
        return miu;
}

int main()
{
    int n;
    int m;

    std::cout << " pon el numero : \n";
    std::cin >> n;
    std::cout << " pon el siguiente numero : \n";
    std::cin >> m;
    std::cout << " el total es: " << n + m << std::endl;

}