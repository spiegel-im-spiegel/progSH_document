int sum(int *tbl, int ct)
{
    register int    *p, i;
    register int    a, b, sum;

    p = tbl;
    sum = 0;
    a = (*p);
    for(i=(ct-1), p++; i>0; i--, p++) {
        b = (*p);
        sum += a;
        a = b;
    }
    sum += a;
    return(sum);
}
