#inlcude<stdio.h>

int *puntero;
int arreglo[5]= {1,2,3,4,5};
int arreglo2[5];

int apun(int *ptr){
int i=0;
      for(i=0; i<5; i++){
         arreglo2[i] = *(ptr+i);
	}
}

int main(){
int i=0;
   apun(arreglo);

for(i=0; i<5; i++){
   printf("%d\n", arreglo2[i]); //Aquí ya imprimimos el arreglo 2
   printf("%d\n", arreglo[i]); //Aquí imprimimos el arreglo 1

}


}