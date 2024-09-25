#include <stdio.h>
#include <string.h>
int main(void) {
  //Declarando um array de string
  char string[100] = "Ola TDS";

  //Utilizando o metodo strlen
  int tamanho = strlen(string);
  printf("O comportamento da string é: %d\n", tamanho);

  //Utilizando o metodo strcpy
  char strCopy[100];
  strcpy(strCopy, string);
  printf("Copia da string: %s\n", strCopy);

  //Metodo strcat
  char str2[100] = "Programando em c";
  strcat(string,str2);
  printf("String concatenada: %s\n", string);

  //Metodo strcmp comparando duas strings
  int comparacao = strcmp(string, strCopy);
  if(comparacao == 0){
    printf("As strings são iguais\n");{
} else{
    printf("As strings são diferentes\n");
    }

  //Exemplo de como manipular arrays de inteiros
  int arr[] = {1,2,3,4,5};
  int n = sizeof(arr);
  printf("O tamanho do array é: %d\n", n);
}
  return 0;
}