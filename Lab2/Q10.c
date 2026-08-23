#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    int Emp_id;
    char Emp_name[50];
    char Emp_city[50];
};

void findEmployeeById(const struct Employee emp[], int n, int id);
void sortEmployeesById(struct Employee emp[], int n);
void sortCharacters(char str[]);
int countEmployees(int n);
int addFiveEmployees(struct Employee emp[], int *n);

int main(void) {
    struct Employee emp[MAX] = {
        {101, "Alice", "Delhi"},
        {104, "Bob", "Mumbai"},
        {102, "Charlie", "Bangalore"},
        {105, "David", "Kolkata"},
        {103, "Eva", "Chennai"}
    };

    int n = 5;

    printf("----- Find Employee by ID (e.g. 104) -----\n");
    findEmployeeById(emp, n, 104);

    printf("\n----- Sorted Employee Records by ID -----\n");
    sortEmployeesById(emp, n);
    for (int i = 0; i < n; i++)
        printf("%d\t%s\t%s\n", emp[i].Emp_id, emp[i].Emp_name, emp[i].Emp_city);

    printf("\n----- Alphabetical Sort of a Name (e.g. Eva) -----\n");
    char name[] = "Eva";
    sortCharacters(name);
    printf("Sorted Name: %s\n", name);

    printf("\n----- Count of Employees -----\n");
    printf("Total Employees: %d\n", countEmployees(n));

    printf("\n----- Adding 5 More Records -----\n");
    if (!addFiveEmployees(emp, &n))
        return 1;

    printf("\n----- All Employee Records After Addition -----\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%s\t%s\n", emp[i].Emp_id, emp[i].Emp_name, emp[i].Emp_city);

    return 0;
}

void findEmployeeById(const struct Employee emp[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (emp[i].Emp_id == id) {
            printf("Record Found: %d\t%s\t%s\n",
                   emp[i].Emp_id, emp[i].Emp_name, emp[i].Emp_city);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

void sortEmployeesById(struct Employee emp[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (emp[i].Emp_id > emp[j].Emp_id) {
                struct Employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

void sortCharacters(char str[]) {
    size_t len = strlen(str);
    for (size_t i = 0; i + 1 < len; i++) {
        for (size_t j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int countEmployees(int n) {
    return n;
}

int addFiveEmployees(struct Employee emp[], int *n) {
    for (int i = 0; i < 5; i++) {
        if (*n >= MAX) {
            fprintf(stderr, "Employee limit reached.\n");
            return 0;
        }

        printf("Enter details for Employee %d:\n", *n + 1);
        printf("Emp_id: ");
        if (scanf("%d", &emp[*n].Emp_id) != 1) return 0;

        printf("Emp_name: ");
        if (scanf("%49s", emp[*n].Emp_name) != 1) return 0;

        printf("Emp_city: ");
        if (scanf("%49s", emp[*n].Emp_city) != 1) return 0;

        (*n)++;
    }
    return 1;
}
