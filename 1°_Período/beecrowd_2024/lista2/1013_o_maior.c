int main(){
    int A, B, C, maiorAB, MAIOR;

    scanf("%d %d %d", &A, &B, &C);
    maiorAB = (A+B+abs(A-B))/2;
    MAIOR = (C+maiorAB + abs(C-maiorAB))/2;
    printf("%d eh o maior\n", MAIOR);
}