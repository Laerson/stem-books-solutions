double median(double x, double y, double z)
{
    double middle = x;
    if ((x <= y && y <= z) || (z <= y && y <= x))
        middle = y;
    else if ((x <= z && z <= y) || (y <= z && z <= x))
        middle = z;

    return middle;
}
