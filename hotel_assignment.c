#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Declare all variables at the beginning for older C compatibility
    float revenue[7];
    float totalRevenue = 0.0;
    float averageDailyRevenue = 0.0;
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    int occupancy[5][10];
    int chain[3][5][10];
    int totalOccupiedAllBranches = 0;
    
    int i, floor, room, branch;
    int occupiedCount, vacantCount, branchOccupied;

    // Seed the random number generator
    srand(time(0));

    printf("=========================================\n");
    printf("   HOTEL MANAGEMENT SYSTEM USING ARRAYS   \n");
    printf("=========================================\n\n");

    // ==========================================
    // 1D ARRAY - Weekly Revenue Tracker
    // ==========================================
    printf("--- 1. 1D Array: Weekly Revenue Tracker ---\n");

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        revenue[i] = (rand() % 41000) + 10000; 
        totalRevenue += revenue[i];
        printf("Revenue for %s: Ksh. %.2f\n", days[i], revenue[i]);
    }

    averageDailyRevenue = totalRevenue / 7.0;
    printf("\nTotal Weekly Revenue: Ksh. %.2f\n", totalRevenue);
    printf("Average Daily Revenue: Ksh. %.2f\n\n", averageDailyRevenue);


    // ==========================================
    // 2D ARRAY - Room Occupancy (One Branch)
    // ==========================================
    printf("--- 2. 2D Array: Room Occupancy (One Branch) ---\n");

    for (floor = 0; floor < 5; floor++) {
        occupiedCount = 0;
        vacantCount = 0;

        printf("\nFloor %d:\n", floor + 1);
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Generates 0 or 1
            
            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
            printf("Room %d.%d [%d]  ", floor + 1, room + 1, occupancy[floor][room]);
        }
        printf("\n--> Floor Summary: Occupied = %d | Vacant = %d\n", occupiedCount, vacantCount);
    }
    printf("\n");


    // ==========================================
    // 3D ARRAY - Multiple Branches
    // ==========================================
    printf("--- 3. 3D Array: Multiple Branches ---\n");

    for (branch = 0; branch < 3; branch++) {
        branchOccupied = 0;
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1) {
                    branchOccupied++;
                }
            }
        }
        totalOccupiedAllBranches += branchOccupied;
        printf("Branch %d Total Occupied Rooms: %d\n", branch + 1, branchOccupied);
    }

    printf("\nTotal number of occupied rooms across all branches: %d\n", totalOccupiedAllBranches);
    printf("=========================================\n");

    return 0;
}
