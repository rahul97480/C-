#include <stdio.h>
 
int max(int x, int y) { return (x > y) ? x: y; }
int min(int x, int y) { return (x < y) ? x: y; }
 
// Function to find the maximum profit earned from at most two stock transactions
int findMaxProfit(int price[], int n)
{
    int profit[n];
    profit[n-1] = 0;
 
    // to keep track of the maximum stock price on the right of the current stock price
    int max_so_far = price[n - 1];
 
    // traverse the array from right to left
    for (int i = n - 2; i >= 0; i--)
    {
        // update `profit[i]` to the maximum profit earned by a single stock
        // transaction from the day `i` till day `n-1`
        profit[i] = max(profit[i + 1], max_so_far - price[i]);
 
        // update maximum stock price seen so far
        max_so_far = max(max_so_far, price[i]);
    }
 
    // to keep track of the minimum stock price to the left of the current stock price
    int min_so_far = price[0];
 
    // traverse the array from left to right
    for (int i = 1; i < n; i++)
    {
        /* Update `profit[i]` by taking a maximum of the following:
           1. `profit[i-1]`, which represents the maximum profit calculated so far
           2. The total profit obtained by closing the first transaction on the day `i`
              and performing another transaction from the day `i` till day `n-1`. */
 
        profit[i] = max(profit[i - 1], (price[i] - min_so_far) + profit[i]);
 
        // update the minimum stock price seen so far
        min_so_far = min(min_so_far, price[i]);
    }
 
    // the last element of `profit[]` stores the result
    return profit[n - 1];
}
 
int main()
{
    int price[] = { 2, 4, 7, 5, 4, 3, 5 };
    int n = sizeof(price) / sizeof(price[0]);
 
    printf("The maximum profit is %d", findMaxProfit(price, n));
 
    return 0;
}