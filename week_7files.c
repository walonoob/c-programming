#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for Q2
struct Student {
    char name[50];
    char regNumber[20];
    float totalMarks;
};

// Helper function to create sample files for testing Q2 and Q3 if they don't exist
void createSampleFiles() {
    // Sample for Q2: binary file
    FILE *binFile = fopen("results.dat", "wb");
    if (binFile != NULL) {
        struct Student s1 = {"Alice Smith", "S001", 450.5};
        struct Student s2 = {"Bob Jones", "S002", 380.0};
        fwrite(&s1, sizeof(struct Student), 1, binFile);
        fwrite(&s2, sizeof(struct Student), 1, binFile);
        fclose(binFile);
    }

    // Sample for Q3: text file with sales amounts
    FILE *salesFile = fopen("sales.txt", "w");
    if (salesFile != NULL) {
        fprintf(salesFile, "1500.50\n");
        fprintf(salesFile, "2300.00\n");
        fprintf(salesFile, "450.25\n");
        fclose(salesFile);
    }
}

int main() {
    // Create sample files so the file-reading tasks can run right away
    createSampleFiles();

    printf("=========================================\n");
    printf("         WEEK 7 ACTIVITY: C FILES        \n");
    printf("=========================================\n\n");

    // ==========================================
    // Q1. Text File - Append Book Title
    // ==========================================
    printf("--- Q1. Append Book Title to borrowed_books.txt ---\n");
    
    // Open file in append mode ("a") to ensure existing records are not deleted
    FILE *fileQ1 = fopen("borrowed_books.txt", "a");
    if (fileQ1 == NULL) {
        printf("Error opening file for writing!\n");
    } else {
        char newBook[100] = "Introduction to C Programming"; // You can change this to any book title
        
        fprintf(fileQ1, "%s\n", newBook);
        fclose(fileQ1);
        
        printf("Success: Book title '%s' successfully stored.\n\n", newBook);
    }


    // ==========================================
    // Q2. Binary File - Read Student Records
    // ==========================================
    printf("--- Q2. Read Student Records from results.dat ---\n");
    
    FILE *fileQ2 = fopen("results.dat", "rb");
    if (fileQ2 == NULL) {
        printf("Error opening binary file!\n");
    } else {
        struct Student studentRecord;
        printf("%-20s %-15s %s\n", "Name", "Reg Number", "Total Marks");
        printf("--------------------------------------------------\n");
        
        // Read records one by one until the end of the file
        while (fread(&studentRecord, sizeof(struct Student), 1, fileQ2) == 1) {
            printf("%-20s %-15s %.2f\n", studentRecord.name, studentRecord.regNumber, studentRecord.totalMarks);
        }
        
        fclose(fileQ2);
        printf("\n");
    }


    // ==========================================
    // Q3. Text File - Daily Sales Transactions
    // ==========================================
    printf("--- Q3. Process sales.txt Transactions ---\n");
    
    FILE *fileQ3 = fopen("sales.txt", "r");
    if (fileQ3 == NULL) {
        printf("Error opening sales file!\n");
    } else {
        float transactionAmount;
        float totalSales = 0.0;
        
        // Read each transaction line from the file
        while (fscanf(fileQ3, "%f", &transactionAmount) == 1) {
            totalSales += transactionAmount;
        }
        
        // Properly close the file after reading
        fclose(fileQ3);
        
        printf("Total sales for the day: Ksh. %.2f\n", totalSales);
        printf("File successfully closed after reading.\n");
    }

    printf("=========================================\n");
    return 0;
}
