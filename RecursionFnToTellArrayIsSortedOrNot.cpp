bool isSorted(int arr[],int size)
{
    //base case
    if(size==0||size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }
}