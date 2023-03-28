#include <iostream>




int main() {
    int num;
    scanf("%i",&num);
    while (num>0){
        if(num%2)
            num-=2;
        else
            printf("%d",num);
        num--;
    }
}


