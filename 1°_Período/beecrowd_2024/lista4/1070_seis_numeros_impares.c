int main(){

    int i = 0, X;

    scanf("%d", &X);
    while(i<6){
        if(X % 2 != 0){
            printf("%d", X);
            i++;
        }
        X++;
    }

    return 0;
}