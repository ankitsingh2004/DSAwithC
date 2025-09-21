#include<stdio.h>
// GCD
int gcd(int a,int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;

    }
    return a;
}

// Modular exponentitation function : (base ^exp) %mod
int mod_pow(int base ,int exp, int mod ){
    int ans =1;
    base =base%mod;
    while(exp>0){
        ans =(ans*base)%mod;
        exp =exp/2;
        base =(base*base) %mod;
    }
    return ans;
}
int main(){
    int p,q;
    printf("enter the two prime Numbers :");
    scanf("%d %d",&p,&q);

    int n=p*q;
    int phi = (p-1) * (q-1);// here phi is a phirtext
//    choose a valid e 
int e;
for(e=2;e<phi;e++){
    if(gcd(e,phi)==1){
        break;
    }
}
    // compute d ([private key ])
    int d=0;
    for(int i=1;i<phi;i++){
        if((e*i)%phi==1){
            d=i;
            break;
        }
    }
    int message;
    printf("enter the message (integer less than %d): ",n);
    scanf("%d",&message);

    // Encrption C =M ^e mod n;
    int encrypt =mod_pow(message,e,n);

    // decryption M=c^d mod n 
    int decrpted =mod_pow(encrypt,d,n);
printf("\n Public Key ( e,n ): (%d, %d)\n", e,n);
printf("\n Private Key ( d,n ): (%d, %d)\n", d,n);
printf("\n Encrypted message : %d\n",encrypt);
printf("\n Decrypted message : %d\n",decrpted);
return 0;

}


// enter the two prime Numbers :3 11
// enter the message (integer less than 33): 5

//  Public Key ( e,n ): (3, 33)

//  Private Key ( d,n ): (7, 33)

//  Encrypted message : 26

//  Decrypted message : 5