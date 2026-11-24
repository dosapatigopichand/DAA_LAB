#include <iostream> #include <climits> using namespace std;
int n; int cost[10][10]; int visited[10];
int minCost = INT_MAX; int bestPath[10];
void tsp(int city, int count, int totalCost, int path[])
{
    if (count == n)
    {         int finalCost = totalCost + cost[city][0];
        if (finalCost < minCost)
        {
            minCost = finalCost;
            for (int i = 0; i < n; i++)                 bestPath[i] = path[i];
        }         return;     }
    for (int i = 1; i < n; i++)
    {         if (!visited[i])         {             visited[i] = 1;             path[count] = i;
            tsp(i, count + 1,                 totalCost + cost[city][i], path);             visited[i] = 0;
        }
    }
}
int main() {
    cout << "Enter number of cities: ";     cin >> n;     cout << "Enter cost matrix:\n";
    for (int i = 0; i < n; i++)
    {         for (int j = 0; j < n; j++)
        {             cin >> cost[i][j];
        }     }     int path[10];
    visited[0] = 1;     path[0] = 0;     tsp(0, 1, 0, path);     cout << "\nMinimum Cost: " << minCost;     cout << "\nOptimal Path: ";
    for (int i = 0; i < n; i++)         cout << bestPath[i] + 1 << " -> ";     cout << "1\n";
    return 0;
}
