int main(){
    int idade, anos, meses;

    scanf("%d", &idade);
    anos = idade/360;
    idade %= 360;
    meses = idade/60;
    idade %= 60;
    printf("%d ano(s)\n %d mes(s)\n %d dia(s)\n", anos, meses, idade);

}