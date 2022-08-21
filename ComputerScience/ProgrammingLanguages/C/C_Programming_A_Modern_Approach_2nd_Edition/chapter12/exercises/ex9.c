double inner_product(const double *a, const double *b,
        int n)
{
    const double *p;
    double product = (*a) + (*b);

    for (p = a + 1; p < a + n; p++) 
        product += (*p + *(b + (p - a)));
    return product;
}
