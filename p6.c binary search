#include <stdio.h>
int main(){
    int arr[5], i, key, n = 5;
    int l,h,m;

    printf("Enter any 5 elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element to  search:\n");
    scanf("%d",&key);
    l = 0;
    h = n-1;
    while(l<=h){
        m = (l+h)/2;
        if(arr[m]==key){
            printf("Element found  %d\n",m);
            break;
        }
       else if(key<arr[m])
            h = m-1;
        else
            l = m+1;
    }
    if(l>h)
        printf("Element not found\n");

        return 0;
}
