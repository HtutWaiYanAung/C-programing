 #include <stdio.h>
int main(){
    double  fahrenheit, celsius;
printf("Please enter degrees in Fahrenheit:\n ");
scanf("%lf", &fahrenheit);

celsius = (fahrenheit - 32) * (5.0/9);

printf("%f Fahrenheit is %f Celsius\n", fahrenheit, celsius);


return 0;
}
