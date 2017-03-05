#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "CRUD.h"

int main(){
    
unsigned short op=0;

do{
system("cls");
puts("[1] Inserir");
puts("[2] Listar");
puts("[3] Procurar");
puts("[4] Alterar");
puts("[5] Excluir");
puts("[0] Sair");
printf("Opcao:");
scanf("%hu",&op);

    switch(op){
    case 1:
         Entrada();
    break;

    case 2:
         Saida();
    break;
    case 3:
         Procura();
    break;
    case 4:
         Altera();
    break;
    case 5:
         Exclui();
    break;
    case 0:
         puts("Saindo...");
    break;
    default:
        puts("Opcao invalida");
    break;
}
}while(op != 0);

return 0;}





