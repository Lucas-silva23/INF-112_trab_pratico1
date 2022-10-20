struct MatrizQuadrada{
    int **_elementos;
    int _n;

    //Construtor
    MatrizQuadrada(int n);

    //Destrutor
    ~MatrizQuadrada();

    //Metodos
    void leMatriz();

    void criaMatrizIdentidade();

    void produto(MatrizQuadrada x, MatrizQuadrada y);

    void imprimeMatriz();

    void soma(MatrizQuadrada x, MatrizQuadrada y);

    void criaTransposta(MatrizQuadrada x);

    bool compara(MatrizQuadrada x);

};