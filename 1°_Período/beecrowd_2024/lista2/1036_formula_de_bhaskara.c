int main(){
    double A, B, C, delta, R2, R1;

    scanf("%lf %lf %lf", &A, &B, &C);
    delta = B*B - 4*A*C;
    if(A!=0 && delta>1){
        R1 = (-B + sqrt(delta))/2*A;
        R2 = (-B - sqrt(delta))/2*A;
        printf("R1: %.5lf\n R2: %.5lf\n", R1, R2);
    }else{
        printf("Impossivel calcular");
    }
}