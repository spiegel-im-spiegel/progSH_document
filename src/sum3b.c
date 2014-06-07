int sum(int *tbl, int ct)
{
    int sum, i;

    sum = 0;
    for(i=ct>>1; i>0; i--) {
        sum += (*tbl++);
        sum += (*tbl++);
    }
    if((ct&1)!=0) {
        sum += (*tbl);
    }

    return(sum);
}
