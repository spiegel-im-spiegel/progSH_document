void    func(int *sum, int *tbl, int ct)
{
    register int    s;

    s = 0;
    for(; ct>0; ct--, tbl++) {
        s += (*tbl);
    }
    (*sum) = s;
    return;
}
int sum(int *tbl, int ct)
{
    int sum;

    func(&sum, tbl, ct);
    return(sum);
}
