//Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.
int main(){
    
    int i, num, pares = 0;
    
    for(i=0; i<5; i++){
        scanf("%d", &num);

        if(num % 2 == 0){
            pares++;
        }
    }
    printf("%d valores pares\n", pares);

    return 0;
}