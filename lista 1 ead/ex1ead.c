//Lista 1
// 22 de marco de 2024
// Hector Bernardo de Quadros Arbiza (hectorarbiza.aluno@unipampa.edu.br)

#include<stdio.h>
#include<stdlib.h>

int ** criaMatriz(int lin, int col);
void lerMatriz(int **mat, int lin, int col);
int somaMatriz(int **mat, int lin, int col);
int * colunaMatriz(int **mat, int lin, int col, int ncol);
void liberaMat(int **mat, int lin);
void imprimeMatriz(int **mat, int lin, int col);
void imprimeVet(int *vet, int lin);





int main (){
    int **mat, n, m, *vet, ncol;
    
    printf("digite o numero de linhas da matriz: \n");
    scanf("%d", &n);

    printf("digite o numero de colunas da matriz: \n");
    scanf("%d", &m);
    
    mat = criaMatriz(n,m);
    
    lerMatriz(mat,n,m);
    printf("a soma dos elementos da matriz e: %d \n", somaMatriz(mat,n,m));
    imprimeMatriz(mat,n,m);

    printf("digite o numero da coluna que deseja ver: \n");
    scanf("%d", &ncol);

    vet = colunaMatriz(mat,n,m,ncol);

    printf ("vetor da coluna %d da matriz: ", ncol);
    imprimeVet(vet,n);

    liberaMat(mat, ncol);

    printf ("\n");

    imprimeMatriz(mat,n,m);


    

return 0;
}


int ** criaMatriz(int lin, int col){
    int **mat, i;

    mat = malloc(lin * sizeof(int*));

    for(i=0; i < lin; i++){
        mat[i] =  malloc(col * sizeof(int*));
    } 
   
   return mat;
}


void lerMatriz(int **mat, int lin, int col){
    
    for (int i=0; i<lin; i++){
        for (int j=0; j<col; j++){
            mat[i][j] = rand() % 100;
    }
   }
}


int somaMatriz(int **mat, int lin, int col){
    int soma=0;
    for (int i=0; i<lin ;i++){
    for (int j=0; j<col; j++){
        soma += mat[i][j];
    }
}

return soma;
}

int * colunaMatriz(int **mat, int lin, int col, int ncol){

  int *vet, i;

  vet = malloc(lin * sizeof(int));
    
    for (int i=0; i<lin ;i++){
        for (int j=0; j<col; j++){
            if (j==(ncol)){
                vet[i] = mat[i][ncol];
            }
         }
            
    }
    return vet;
   }

  void liberaMat(int **mat, int ncol){
        free(mat[ncol]);
 
  }


  /* void liberaMat(int **mat, int lin){
    for(int i = 0; i < lin; i++){
        free(mat[i]);
    }
    free(mat);
  }

  */

    void imprimeMatriz(int **mat, int lin, int col){
    for (int i=0; i<lin ;i++){
        for (int j=0; j<col; j++){
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }
    }

   void imprimeVet(int *vet, int lin){
   for (int i=0; i<lin ;i++){
        printf("%d ",vet[i]);
    }
   }
    

  
  

   
   


