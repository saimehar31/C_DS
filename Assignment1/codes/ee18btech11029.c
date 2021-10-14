#include <stdio.h>

void twocomplement(int binary[])
{
    // finding two complement of a number
    /*
        It is usually found by adding 1 to one's complement.
    */
    int carry = 1;
    for (int k = 0; k <= 15; k++)
    {
        if (binary[k] == 1 && carry == 1)
            binary[k] = 0;
        else if (binary[k] == 0 && carry == 1) {
            binary[k] = 1;
            carry = 0;
        }
    }
    printf("2's complement of number is:");
    for (int j = 15; j >= 0; j--) {
        printf("%d",binary[j]);
    }
    printf("\n");
}

void onecomplement(int binary[])
{
    // Finding one's complement of the number
    for (int k = 15; k >= 0; k--)
    {
        binary[k] = !binary[k];
    }
    //Binary representation of 1's complement of number
    printf("1's complement of number is:");
    for (int j = 15; j >= 0; j--)
        printf("%d",binary[j]);
    printf("\n");
    twocomplement(binary);
}


void decToBinary(int n)
{
    int binary[16] = {0}, i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    printf("Binary Representation of Number:");
    //Binary Representation of Number
    for (int j = 15; j >= 0; j--)
        printf("%d",binary[j]);
    printf("\n");
    onecomplement(binary);
}

int main()
{
    int n;
    scanf("%d",&n);
    decToBinary(n);
}

