void minmax(int i, int j)
{
    if(i==j)
    {
        max=a[i];
        min=a[i];
    }
    if(i==j-1)
    {
        if(a[i]<a[j])
        {
            max=a[j];
            min=a[i];
        }
        else
        {
            max=a[i];
            min=a[j];
        }
    }
    else
    {
        mid=i+j/2;
        minmax(i,mid);
        max1=max;
        min1=min;
        minimax(mid+1,j)
        if(min>min1)
        {
            min=min1;
        }
    if(max<max1)
    {
            max=max1
    }
}
}