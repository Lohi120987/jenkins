#include <stdio.h>

biggest2()
{
    int num1, num2;

    printf("Enter two integers :");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
    {
        printf("Largest number is %d.", num1);
    }
    else
    {
        printf("Largest number is %d.", num2);
    }

    // return 0;
}
[ec2-user@ip-172-31-16-247 build_tool]$ cat fact.c
#include <stdio.h>
factorial() {
    int n, i;
    unsigned long long fact = 1;
    printf("\n\nEnter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n\n", n, fact);
    }

    // return 0;
}
