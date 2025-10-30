name: JUSTICE MUCHIRI WANJIKU
REG: CT101\G\26422\25
YEAR: YEAR ONE (1)
COURSE: COMPUTER SCIENCE 
GROUP: A
YEARS: 21

#include <stdio.h>

int main() {
    // ---------- 1D ARRAY: WEEKLY REVENUE TRACKER ----------
    float revenue[7];
    float total = 0, average;
    int i;

    printf("=== WEEKLY REVENUE TRACKER ===\n");
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    // ---------- 2D ARRAY: ROOM OCCUPANCY (ONE BRANCH) ----------
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    printf("\n=== ROOM OCCUPANCY (ONE BRANCH) ===\n");
    printf("Enter occupancy data (1 = occupied, 0 = vacant)\n");
    
    for(floor = 0; floor < 5; floor++) {
        printf("\nFloor %d:\n", floor + 1);
        for(room = 0; room < 10; room++) {
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Display occupied/vacant rooms per floor
    printf("\n=== OCCUPANCY REPORT ===\n");
    for(floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for(room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    // ---------- 3D ARRAY: MULTIPLE BRANCHES ----------
    int chain[3][5][10];
    int branch;
    int totalOccupied, totalVacant;

    printf("\n=== MULTIPLE BRANCHES OCCUPANCY (MANUAL INPUT) ===\n");
    printf("Enter occupancy data (1 = occupied, 0 = vacant)\n");

    for(branch = 0; branch < 3; branch++) {
        printf("\n--- Branch %d ---\n", branch + 1);
        for(floor = 0; floor < 5; floor++) {
            printf("\nFloor %d:\n", floor + 1);
            for(room = 0; room < 10; room++) {
                printf("Branch %d, Floor %d, Room %d: ", branch + 1, floor + 1, room + 1);
                scanf("%d", &chain[branch][floor][room]);
            }
        }
    }

    // Display total occupancy per branch
    printf("\n=== MULTI-BRANCH OCCUPANCY REPORT ===\n");
    for(branch = 0; branch < 3; branch++) {
        totalOccupied = 0;
        totalVacant = 0;
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                if(chain[branch][floor][room] == 1)
                    totalOccupied++;
                else
                    totalVacant++;
            }
        }
        printf("Branch %d -> Occupied: %d, Vacant: %d\n", branch + 1, totalOccupied, totalVacant);
    }

    return 0;
}