
    LowerBOUND with binary_search

int lowerBound(int arr[],int arr_size,int key)
{
    int begin = 0 ;
    int end = arr_size-1;
    int mid ;
    int index = -1 ;
    while(begin<=end)
    {
        mid = (begin + end)/2;
        if(arr[mid]==key)
        {
            index = mid ;
            end = mid - 1 ;
        }
        if(key>arr[mid])
        {
            begin = mid + 1 ;
        }
        if(key<arr[mid])
        {
            end = mid - 1 ;
        }
    }
    return begin;
}