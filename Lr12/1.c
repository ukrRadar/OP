#include <stdio.h>

struct ComplexNumber
{
    double Remaginet;
    double Imaginet;
};

void averageComplexNumber(struct ComplexNumber *z1, struct ComplexNumber *z2, struct ComplexNumber *result);

int main()
{
    struct ComplexNumber z1 =
    {
        .Remaginet = 2.12,
        .Imaginet = 1.21
    };
    struct ComplexNumber z2 = 
    {
        .Remaginet = -2.8,
        .Imaginet = 7.8
    };
    struct ComplexNumber z3;
    
    averageComplexNumber(&z1, &z2, &z3);
    
    printf("z1 = %lf + %lfi\n",z1.Remaginet, z1.Imaginet);
    printf("z2 = %lf + %lfi\n",z2.Remaginet, z2.Imaginet);
    printf("AVG %lf + %lfi ",z3.Remaginet, z3.Imaginet);
    
    return 0;
}
void averageComplexNumber(struct ComplexNumber *z1, struct ComplexNumber *z2, struct ComplexNumber *result)
{
    result->Remaginet = (z1->Remaginet + z2->Remaginet) / 2;
    result->Imaginet = (z1->Imaginet + z2->Imaginet) / 2;
}
