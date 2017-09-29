#include <bits/stdc++.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
 
// Stucture for Item which store weight and corresponding
// value of Item
struct Item
{
    int value, weight;
};
 
// Comparison function to sort Item according to val/weight ratio
bool cmp(struct Item a, struct Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}
 
// Main greedy function to solve problem
double fractionalKnapsack(int W, struct Item arr[], int n)
{
    //    sorting Item on basis of ration
    sort(arr, arr + n, cmp);
 
    //    Uncomment to see new order of Items with their ratio
    /*
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].value << "  " << arr[i].weight << " : "
             << ((double)arr[i].value / arr[i].weight) << endl;
    }
    */
 
    int curWeight = 0;  // Current weight in knapsack
    double finalvalue = 0.0; // Result (value in Knapsack)
 
    // Looping through all Items
    for (int i = 0; i < n; i++)
    {
        // If adding Item won't overflow, add it completely
        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
        }
 
        // If we can't add current Item, add fractional part of it
        else
        {
            int remain = W - curWeight;
            finalvalue += arr[i].value * ((double) remain / arr[i].weight);
            break;
        }
    }
 
    // Returning final value
    return finalvalue;
}
 
// driver program to test above function
int main()
{
    long long int W,n,i; 
double f;  //    Weight of knapsack
    Item arr[1000];
    cin>>n>>W;
for(i=0;i<n;i++)
 cin>>arr[i].weight;
for(i=0;i<n;i++)
 cin>>arr[i].value;
    f=fractionalKnapsack(W, arr, n);
if(f-int(f)!=0)
printf("%0.2f",f);
else
cout<<int(f);
    return 0;
}
