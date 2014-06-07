int sum(int *tbl, int ct)
{
    int sum, i;

    sum = 0;
    for(i=ct>>2; i>0; i--, tbl+=4) {
        sum += tbl[0];
        sum += tbl[1];
        sum += tbl[2];
        sum += tbl[3];
    }
    for(i=ct&3; i>0; i--, tbl++) {
        sum += (*tbl);
    }
    return(sum);
}
