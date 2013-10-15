//
//  main.c
//  ConvertFahtoCelDeg
//
//  Created by Tiffany on 10/10/13.
//  Copyright (c) 2013 Tiffany. All rights reserved.
//

#include <stdio.h> 

float ConvertFtoC(float, float);

int main(int argc, const char * argv[])
{
    float fahrenheit;
    float celcius;
    
    printf("What is the temperature in Fahrenheit?\n");
    scanf("%f", &fahrenheit);
    
    ConvertFtoC(fahrenheit, celcius);
    
    celcius = ConvertFtoC(fahrenheit, celcius);
    
    printf(" %.2f degress F is equal to %.2f degrees C\n", fahrenheit, celcius);
    
    
    return 0;
}

float ConvertFtoC(float F, float C)
{
    C = (5 * (F - 32)/9);

    return C;
}