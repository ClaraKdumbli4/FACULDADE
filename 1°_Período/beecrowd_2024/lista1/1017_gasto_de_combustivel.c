int main() {
    double horas, kmh, QL;

    printf("Indique as horas e a distancia em km: "); 
    scanf("%lf %lf", &horas, &kmh);
    QL = (horas * kmh)/12;
    printf("%.3lf\n", QL);
    
}