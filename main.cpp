#include <iostream>
#include "matriz.h"

int main ( void ) {
    
    int n;
    std::cout << "Dimensao das matrizes: ";
    std::cin >> n;

    MatrizQuadrada M1(n);
    MatrizQuadrada M2(n);
    MatrizQuadrada M3(n);
    MatrizQuadrada I(n);
    MatrizQuadrada R(n);
    MatrizQuadrada T(n);
    
    M1.leMatriz();               /* Le uma matriz nxn */
    std::cout << "---------------------------------------" << std::endl;

    I.criaMatrizIdentidade();   /* Cria uma matriz identidade de tamanho n */
    
    R.produto (M1, I);         /* R = M1*I */
    
    if (M1.compara (R) ) {
        std::cout << " Matrizes iguais !";
    }
    else {
        std::cout << " Matrizes diferentes !";
    }
    
    M1.imprimeMatriz();

    R.imprimeMatriz();

    T.criaTransposta(R); /* T = transposta de R*/

    M2.leMatriz();       /* Le uma matriz nxn */

    M3.soma(R, M2);   /* M3 = R+M2 */

    M2.imprimeMatriz();

    M3.imprimeMatriz();
}