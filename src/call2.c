int func(int *tbl, int ct)
{
    register int    s;

    s = 0;
    for(; ct>0; ct--, tbl++) {
        s += (*tbl);
    }
    return(s);
}
int sum(int *tbl, int ct)
{
    return(func(tbl, ct));
}
