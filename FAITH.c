# include <stdio.h>
 int main(){
    int amount = 50000;
    int withdraw;
    int balance;

    printf("Enter amount to withdraw: ");
    scanf("%d",&withdraw);
    if(withdraw<= amount){
    balance = amount- withdraw;
    printf("Dear customer your current balance is %d\n", balance);
    }else {
      printf("Dear customer, your withdraw amount exceeds your current Balance!!!\n");
    }
    
    return 0;
 }