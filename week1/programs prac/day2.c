#include <stdio.h>

// usd to rupee
// int main(){
//     int n;
//     printf("enter the usd \n");
//     scanf("%d",&n);
//     printf("usd to Rupee = %d", 90*n);
// }

// int main(){
//     int n,f=0,s=1,res;
//     printf("Enter number of elements : \n");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         if(i==0) printf("%d\t",f);
//         if(i==1) printf("%d\t",s);
//         else{
//             res=f+s;
//             printf("%d\t",res);
//             f=s;
//             s=res;
//         }       
//     }
// }


// palindrome
int main(){
    int rem,n,rev=0,temp;
    printf("enter the number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
     printf("%d is a palindrome",rev);
     else
     printf("%d is not a palindrome",rev);
}