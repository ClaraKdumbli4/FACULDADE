//Leia um valor inteiro X. Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.
int main(){

    int i, X;

    scanf("%d", &X);
    for(i=0; i< X; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}