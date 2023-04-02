// 20) amstrong num 
#include <stdio.h>
int main() {
	
    int num, originalNum, remainder, total = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {

        remainder = originalNum % 10;
        
       total += remainder * remainder * remainder;
        
       originalNum /= 10;
    }

    if (total == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
