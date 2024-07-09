int main(){
    int codigoP1, numP1, codigoP2, numP2;
    float valorP1, valorP2, total;

    printf("Indique o codigo, quantd e valor do seu item: ");
    scanf("%d %d %f", &codigoP1, &numP1, &valorP1);
    printf("Indique o codigo, quantd e valor do seu outro item: ");
    scanf("%d %d %f", &codigoP2, &numP2, &valorP2);
    total = numP1*valorP1 + numP2*valorP2;
    printf("TOTAL A PAGAR: %.2f\n", total);

}