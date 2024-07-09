int main(){
    int N, horas, minutos;

    scanf("%d", &N);
    horas = N/3600;
    N %= 3600;
    minutos = N/60;
    N %= 60;
    printf("%d:%d:%d\n", horas, minutos, N);
}