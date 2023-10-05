// Remove all occurence of a specific element from array
// In place

void removeElememnt(int arr[], int n, int elem)
{
    int count{0};
    for(int i{0}; i< n; i++)
    {
        if(arr[i]!= elem)
            arr[count++] = arr[i];   
    }
}


// better solution that avoids swapping unnecessarily
void removeElememnt(int arr[], int n, int elem)
{
    int start{0}, end{n-1};
    while(start<end)
    {
        if(arr[start] != elem)
        {
            start++;
            continue;
        }
        if(arr[end] == elem)
        {
            end--;
            continue;
        }
        arr[start] = arr[end];
        start++;
        end--;
    }
}
// This soln changes order but removes elems with less swapping