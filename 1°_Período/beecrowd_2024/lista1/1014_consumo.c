int main(){
    int X; //X representa distancia em Km
    float Y, CONSUMO; // Y representa o combustivel gasto

    printf("Digite a distancia percorrida: ");
    scanf("%d", &X);
    printf("Indique o gasto de gasolina: ");
    scanf("%f", &Y);
    CONSUMO = X/Y;
    printf("%.3f\n", CONSUMO);
    
}