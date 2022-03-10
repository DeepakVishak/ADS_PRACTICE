// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[]={1,1,1,1,0},b[]={0,0,1,1,1},c[]={0,0,0,0,0},i;
    printf("\nAND OPERATION\n");
    for(i=0;i<5;i++)
    {
        c[i]=a[i]&b[i];
        if(c[i]!=0)
        printf("%d\n",i+1);
    }
    printf("\nOR OPERATION\n");
    for(i=0;i<5;i++)
    {
        c[i]=a[i]|b[i];
        if(c[i]!=0)
        printf("%d\n",i+1);
    }
    printf("\nDIFFERENCE OPERATION\n");
    for(i=0;i<5;i++)
    {
        c[i]=a[i]&(~b[i]);
        if(c[i]!=0)
        printf("%d\n",i+1);
    }
    
    return 0;
}
