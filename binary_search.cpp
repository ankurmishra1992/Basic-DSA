int binarysearch(vector<int> &A, int start, int end, int x){
    if(start>=end)
    return -1;
    else{
        int mid = start+(end-start)/2;

        if(A[mid]==x)
        return mid;
        if(A[mid]>x)
        return binarysearch(A, start, mid-1, x);
        else return binarysearch(A, mid+1, end, x);
    }
}