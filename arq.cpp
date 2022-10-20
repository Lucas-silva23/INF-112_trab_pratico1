#include <iostream>
#include "matriz.h"

MatrizQuadrada::MatrizQuadrada(int n){
    _n = n; 
    *_elementos = new int[_n];

    for(int i=0;i<_n;i++){
        _elementos[i] = new int[_n];
    }
};

MatrizQuadrada::~MatrizQuadrada(){
    for(int i=0;i<_n;i++){
        delete[] _elementos[i];
    }
    delete[] _elementos;
};

void MatrizQuadrada::leMatriz(){
    std::cout << "Digite os elementos da Matriz: ";
    for(int i=0;i<_n;i++){
        for(int j=0;j<_n;j++){
            std::cin >> _elementos[i][j];
        }
    }
};

void MatrizQuadrada::criaMatrizIdentidade(){
    int aux = 0;
    for(int i=0;i<_n;i++){
        for(int j=0;j<_n;j++){
            if(j == aux)
                _elementos[i][j] = 1;
            else
                _elementos[i][j] = 0;
        }
        aux++;
    }
};

void MatrizQuadrada::imprimeMatriz(){
    for(int i=0;i<_n;i++){
        for(int j=0;j<_n;j++){
            std::cout << _elementos[i][j];
        }
    std::cout << std::endl;
    }
    std::cout << std::endl;
};

void MatrizQuadrada::criaTransposta(MatrizQuadrada x){
    for(int i=0;i<_n;i++){
        for(int j=0;j<_n;j++){
            _elementos[i][j] = x._elementos[j][i];
        }
    }
};

void MatrizQuadrada::soma(MatrizQuadrada x, MatrizQuadrada y){
    for(int i=0;i<_n;i++){
        for(int j=0;j<_n;j++){
            _elementos[i][j] = x._elementos[i][j] + y._elementos[i][j];
        }
    }
};

bool MatrizQuadrada::compara(MatrizQuadrada x){
    int cont = 0;
    
    for(int i=0;i<_n;i++){
        for(int j=0;j<_n;j++){
            if(_elementos[i][j] = x._elementos[j][i]){
                cont++;
            } 
        }
    }

    if(cont == _n*_n)
        return true;
    else
        return false;
};

void MatrizQuadrada::produto(MatrizQuadrada x, MatrizQuadrada y){
    int k = 0;

    for(int i=0;i<_n;i++){
        int somaelementos = 0;
        for(int j=0;j<_n;j++){
            somaelementos += x._elementos[i][j] * y._elementos[j][i];
        }
        _elementos[i][k] = somaelementos;
        k++;
    }
};