#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
typedef struct {
int codigo;
float numero,dato;
char des[40];
char nombre[20];
float precio;
int  subopcion,leerentero;
float existencia;} PRODUCTO;
 
int menu(void) {
int op1;
printf("\n\n\t\t ***MI PROPIO MENU***\n\n\t\t");
printf("\n\n\t 1-. ALTAS DE PRODUCTOS           |");
printf("\n\n\t 2-. BAJAS DE PRODUCTOS           |");
printf("\n\n\t 3-. CAMBIOS DE PRODUCTOS         |");
printf("\n\n\t 4-. LISTAR PRODUCTOS             |");
printf("\n\n\t 5-. STOCK MENOR A 5              |");
printf("\n\n\t 6-. STOCK MAYOR A 25             |");
printf("\n\n\t 7-. SALIR                        |");
printf("\n\n\n\t DAME LA OPCION DESEADA           |\n\n");
printf("\n -");
 
scanf("%d",&op1);
return(op1);
}
 
int main(void){
PRODUCTO b[100];
int op=0, I=0,J,si;
while(op < 7) {
system("cls");
op = menu();
system("cls");
switch (op){
case 1:{
printf("\n ALTA DE PRODUCTO");
do {fflush( stdin );
printf("\n dame el nombre del producto: ");
gets(b[I].nombre);
fflush( stdin );
printf("\n dame la descripcion del producto: ");
gets(b[I].des);
printf("\n dame el stock:");
scanf("%d",&b[I].numero);
 
printf("\n\n Para agregar otro producto presione 1\n\n o cualquier numero para continuar");
scanf("%d",&si);
I=I+1;
}while(si==1);
break;
}
 
case 2:{
printf("\n bajas de productos");
printf("\n");
 
 
break;
}
case 3:{
printf("\n cambios de productos");
getche();
break;
}
case 4:{
printf("\n listas de productos\n");
for(J=0;J<I;J++){
printf("\n %s...%s...%d",b[J].nombre,b[J].des,b[J].numero);
 
}
getche();
break;
}
 
case 5:{
printf("\n Productos con stock menor a 5");
for(J=0;J<I;J++){
printf("\n%s\n%s\n%d",b[J].nombre,b[J].des,b[J].numero<5);
}
getche();
break;
}
case 6:{
printf("\n Productos con stock mayor a 25");
for(J=0;J<I;J++){
printf("\n%s\n%s\n%d",b[J].nombre,b[J].des,b[J].numero>25);
}
getche();
break;
}
case 7:{
printf("\n salir");
getche();
break;
}
default:{
printf("\n\n La opcion no existe presione del 1 al 7\n\n\n");
system("pause");
menu();
break;
}
 
if(op < 7) {
printf("\n\n");
system("PAUSE");
}

 
}
  system("PAUSE");
}
  



  


