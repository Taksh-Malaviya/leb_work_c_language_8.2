/*
Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
For example,
Input:
Enter array A's size: 5

Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Enter array B's size: 3

Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 6

Output:
Array C is: 7, 4, 9, 5, 2, 1, 3, 6*/
#include<stdio.h>

 int main()
{
int a[1000],b[1000],merge[2000];
int n,i,n1,k;

printf("enter count :-");
scanf("%d",&n);
printf("enter count :-");
scanf("%d",&n1);
a[n];
b[n1];


for(i=0; i<n; i++){
printf("enter count A : ");
scanf("%d",&a[i]);

}

for(i=0; i<n1; i++){
printf("enter count B : ");
scanf("%d",&b[i]);

}
for(i=0; i<n; i++){
merge[i]=a[i];
}
for(i=0; i<n; i++){
merge[n+i]=b[i];
}
for(i=0; i<n+n1; i++){
printf("%d",merge[i]);
}
}



