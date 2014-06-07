int sum(int *tbl, int ct)
{
    register int    sum;

    sum = 0;
    for(; ct>0; ct--, tbl++) {
        sum += (*tbl);
    }
    return(sum);
}
