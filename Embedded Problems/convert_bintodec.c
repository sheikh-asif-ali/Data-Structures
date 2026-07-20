int convertDec(int binary)
{
    int decimal, base=1, rem;
    while(binary>0)
    {
        rem = binary%10;
        binary = binary/10;
        decimal += rem * base;
        base*=2;
    }
    return decimal;
}
int main()
{    
    unsigned int bin_val = 1011;
    int dec_val = convertDec(bin_val);
    printf("Decimal Value: %d",dec_val);
    
    return 0;
}