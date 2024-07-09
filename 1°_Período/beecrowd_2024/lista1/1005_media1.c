int main(){
    double A, B, MEDIA;

    printf("Digite os valores das suas provas: ");
    scanf("%lf %lf", &A, &B);
    MEDIA = (A*3.5 + B*7.5)/11;
    printf("MEDIA = %.5lf\n", MEDIA);
}