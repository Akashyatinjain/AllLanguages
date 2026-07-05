#include <stdio.h>
#include <string.h>
#define MAX 10
char names[MAX][30];
int pageCount[MAX];
int front = 0, rear = -1;

int turnaroundtime[MAX];
int waitingTimes[MAX];

void enqueueJob(){
    if (rear == MAX - 1){
        printf("Job queue is full cannot add more jobs\n");
        return;
    }
    char doc[30];
    int pages;
    getchar();
    printf("enter document name:");
    scanf("%[^\n]", doc);
    printf("enter numbers of pages:");
    scanf("%d", &pages);
    rear++;
    strcpy(names[rear], doc);
    pageCount[rear] = pages;
    printf("jobs '%s' with %d pages added succeddfully\n", doc, pages);
}

void processAllJobs(){
    if (front == -1 || front > rear){
        printf("No jobs to process Queue is empty \n");
        return;
    }
    int currentTime = 0;
    int totalTAT = 0, totalWT = 0;
    printf("\nprocessing All jobs (FCFS):\n");
    printf("-----------------------------------------------------------------\n");
    printf("| %-3s | %-20s | %-10s | %-12s | %-12s |\n", "No", "Document", "Pages", "TAT", "WT");
    printf("-----------------------------------------------------------------\n");

    for (int i = front; i <= rear; i++){
        int burstTime = pageCount[i];
        int waitingTime = currentTime;
        int tat = waitingTime + burstTime;

        waitingTimes[i] = waitingTime;
        turnaroundtime[i] = tat;

        totalTAT += tat;
        totalWT += waitingTime;

        printf("| %-3d | %-20s | %-10d | %-12d | %-12d |\n", i - front + 1, names[i], burstTime, tat, waitingTime);

        currentTime += burstTime;
    }

    printf("Total Turnaround Time = %d\n", totalTAT);
    printf("Total Waiting Time    = %d\n", totalWT);
    printf("Average TAT           = %.2f\n", (float)totalTAT / (rear - front + 1));
    printf("Average WT            = %.2f\n", (float)totalWT / (rear - front + 1));
}

void displayJobs(){
    if (front > rear){
        printf("No jobs in the queue.\n");
        return;
    }

    printf("\nPending Jobs:\n");
    for (int i = front; i <= rear; i++){
        printf("%d. %s (%d pages)\n", i - front + 1, names[i], pageCount[i]);
    }
}

int main(){
    int choice;

    do{
        printf("\n====== FCFS Job Scheduler with TAT & WT ======\n");
        printf("1. Add Job\n");
        printf("2. Display Pending Jobs\n");
        printf("3. Process All Jobs\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            enqueueJob();
            break;
        case 2:
            displayJobs();
            break;
        case 3:
            processAllJobs();
            break;
        case 4:
            printf("Exiting Job Scheduler.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
