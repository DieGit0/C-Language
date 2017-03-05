#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "CRUD.h"

//struct carros{
// char marca [20];
// char modelo[20];
// char placa [10];
// }car;

//FILE *arq;

//int OpenFile(char tipo[3]){
// arq = fopen("aula10ex4.txt",tipo);
// return arq;           }
//
//void Entrada(){
//puts("==============================");
//  printf("Marca: "); getchar();gets(&car.marca);
//  printf("Nome: ");  gets(&car.modelo);
//  printf("Placa: "); gets(&car.placa);
//puts("==============================");
//
//if (OpenFile("a")==NULL){
//    puts("Erro ao abrir arquivo para Insercao");
//    getchar();
//    exit(0);
//}else{
//    fwrite(&car,sizeof(car),1,arq);
//    fclose(arq);
//    system("color 4f & type aula10ex4.txt");
//    getchar();
//}
// }

//void Saida(){
//int i;
//puts("\nSaida:");
//puts("=================");
//if(OpenFile("r")==NULL){
//    puts("Erro ao abrir arquivo para Escrita");
//    getchar();
//    exit(0);
//}else{
//for(i=0;fgetc(arq)!=EOF;i++){
//    fseek(arq,i*sizeof(car),0);
//    fread(&car,sizeof(car),1,arq);
//    printf("Reg:%.3d \n",i+1);
//     printf("%s \n",car.marca);
//     printf("%s \n",car.modelo);
//     printf("%s \n",car.placa);
//     printf("================= \n");
//    }
//fclose(arq);
//getchar();
//getchar();
//}}

//void Procura(){
//int i,op,TRUE = 1;
//char c[20]="                   \0";
//printf("retorno %d",OpenFile("r"));
//getchar();
//
//if(OpenFile("r")==NULL){
//    puts("Erro ao abrir arquivo para Leitura");
//    getchar();
//    exit(0);
//}
//
//do{
//system("cls");
//puts("\nProcura:");
//puts("[1] Marca:");
//puts("[2] Modelo:");
//puts("[3] Placa");
//puts("[0] Sair:");
//printf("Escolha: ");
//scanf("%d",&op);
//
//switch(op){
//case 1:
//    printf("Marca: ");
//    scanf("%s",c);
//break;
//case 2:
//    printf("Modelo: ");
//    scanf("%s",c);
//break;
//case 3:
//    printf("Placa: ");
//    scanf("%s",c);
//break;
//case 0:
//    puts("Saindo...");
//    getchar();
//break;
//default:
//    puts("Opcao incorreta");
//    getchar;
//break;}
//
//switch(op){
//case 1:
//     OpenFile("r");
//     for(i=0;!feof(arq);i++){
//         fseek(arq,i*sizeof(car),0);
//         fread(&car,sizeof(car),1,arq);
//         if(strcmp(c,car.marca)==0){
//            printf("\nEncontrado:\n");
//            printf("[%d].marca: %s\n", i,car.marca);
//            printf("[%d].modelo: %s\n",i,car.modelo);
//            printf("[%d].placa: %s\n\n", i,car.placa);
//            system("pause");
//            fclose(arq);
//            TRUE = 0;
//     break;//for
//}}
//if(TRUE){
//   puts("\nMarca nao encontrada");
//   TRUE =1;
//   getchar();getchar();
//}
//break;
//case 2:
//     OpenFile("r");
//     for(i=0;!feof(arq);i++){
//        fseek(arq,i*sizeof(car),0);
//        fread(&car,sizeof(car),1,arq);
//        if(strcmp(c,car.modelo)==0){
//            printf("\nEncontrado:\n");
//            printf("[%d].marca: %s\n", i,car.marca);
//            printf("[%d].modelo: %s\n",i,car.modelo);
//            printf("[%d].placa: %s\n\n", i,car.placa);
//            system("pause");
//            fclose(arq);
//            TRUE = 0;
//     break;}
//}
//if(TRUE){
//   puts("\nModelo nao encontrada");
//   TRUE =1;
//   getchar();getchar();
//}
//break;
//case 3:
//    OpenFile("r");
//     for(i=0;!feof(arq);i++){
//        fseek(arq,i*sizeof(car),0);
//        fread(&car,sizeof(car),1,arq);
//        if(strcmp(c,car.placa)==0){
//           printf("\nEncontrado:\n");
//           printf("[%d].marca: %s\n", i,car.marca);
//           printf("[%d].modelo: %s\n",i,car.modelo);
//           printf("[%d].placa: %s\n\n", i,car.placa);
//           system("pause");
//           fclose(arq);
//           TRUE = 0;
//           break;}}
//if(TRUE){
//   puts("\nPlaca nao encontrada");
//   TRUE =1;}
//   getchar();getchar();
//}
//break;
// }while(op != 0);
//}

//void Altera(){
//int i;
//char op;
//char dados[3][30];
//
//if(OpenFile("rb+")==NULL){
//    puts("Erro ao abrir arquivo");
//    getchar();
//    exit(0);
//};
//
//strcpy(car.marca, "                   ");
//strcpy(car.modelo,"                   ");
//strcpy(car.placa, "         ");
//
//for(i=0;fgetc(arq)!=EOF;i++){
//    OpenFile("rb+");
//    fseek(arq,i*sizeof(car),0);
//    fread(&car,sizeof(car),1,arq);
//     printf("search[%d].marca:  %s :",i, car.marca);
//     scanf("%s",dados[0]);
//     printf("search[%d].modelo: %s :",i, car.modelo);
//     scanf("%s",dados[1]);
//     printf("search[%d].placa:  %s :",i, car.placa);
//     scanf("%s",dados[2]);
//puts("=======================================");
//puts("Confirma a Alteracao?");
//printf("Marca: %s\n" , dados[0]);
//printf("Modelo: %s\n", dados[1]);
//printf("Placa: %s\n" , dados[2]);
//printf("Sim[s] ou Nao[n]: ");
//getchar();// Foi preciso colocar esse getchar() antes para não passar direto no scanf
//scanf("%c",&op);
//printf("Op = %c \n",op);
// if((op == 's') || (op == 'S')){
//    strcpy(&car.marca, &dados[0]);
//    strcpy(&car.modelo,&dados[1]);
//    strcpy(&car.placa, &dados[2]);
//           printf("%d - marca:  %s \n",i+1, car.marca);
//           printf("%d - modelo: %s \n",i+1, car.modelo);
//           printf("%d - placa:  %s \n",i+1, car.placa);
//    getchar();
//    fseek(arq,i*sizeof(car),0);
//    printf("valor de i: %d e estruct: %d \n",i,sizeof(car));
//    fwrite(&car,sizeof(car),1,arq);
//    struct carros c;
//    fseek(arq,i*sizeof(car),0);
//    fread(&c,sizeof(c),1,arq);
//puts("Leitura do Arquivo");
//           printf("%d - arq.marca:  %s \n",i+1, c.marca);
//           printf("%d - arq.modelo: %s \n",i+1, c.modelo);
//           printf("%d - arq.placa:  %s \n",i+1, c.placa);
//    fclose(arq);
//    puts("Os dados foram alterados");
// }else{
//   puts("Nada foi feito"); }
//puts("=======================================");
//getchar();
//}}

//char Exclui(){
//int i;
//char opc='\0';
//
//if(OpenFile("r")==NULL){
//    printf("Erro ao abrir o arquivo");
//    getchar();
//    exit(0);
//}
//for(i=0;!feof(arq);i++){
//        OpenFile("rb+");
//        fseek(arq,i*sizeof(car),SEEK_SET);
//        fread(&car,sizeof(car),1,arq);
//           printf("Op = %c\n",opc);
//           printf("[%d].marca:  %s \n",i+1, car.marca);
//           printf("[%d].modelo: %s \n",i+1, car.modelo);
//           printf("[%d].placa:  %s \n",i+1, car.placa);
//        getchar();
//puts("=======================================");
//printf("Confirma a Exclusao do Registro?\n");
//printf("Sim[s] ou Nao[n]:");
//scanf("%c",&opc);
//printf("\nOp = %c",opc);
//
// if((opc == 's' )|| (opc == 'S')){
//
////    *car.marca  = '\0';
////    *car.modelo = '\0';
////    *car.placa  = '\0';
//
//    strcpy(car.marca ,"                   ");
//    strcpy(car.modelo,"                   ");
//    strcpy(car.placa ,"         ");
//
//    printf("\nsearch marca: %s \n", car.marca);
//    printf("search modelo: %s \n", car.modelo);
//    printf("search placa: %s \n", car.placa);
//
//     fseek(arq,i*sizeof(car),0);
//     fwrite(&car,sizeof(car),1,arq);
//     fclose(arq);
//    puts("\nOs dados foram excluidos");
// }else{
//   puts("\nNada foi feito"); }
//puts("=======================================");
//system("pause");
//}}

int main(){

//struct carros car = {"AAAA","BBBB","CCCC"};
//struct carros c;
//struct carros *pc;
//       pc = &car;
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





