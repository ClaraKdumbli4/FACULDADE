int main(){

    int i, N, X, in=0, out=0;

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &X);
        if(X >= 10 && X <= 20){
            in++;
        }else{
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);
    
    return 0;
}