/*3. Create a structure Employee with members emp_id, emp_name, emp_dept, emp_experience.
Using structure pointer access details of an employee.*/
#include<stdio.h>
struct employee{
    int emp_id,emp_exp;
    char name[20],emp_dept[20];
};
int main()
{
    struct employee emp={.emp_id=20,.name="John",.emp_dept = "IT",.emp_exp = 6};
    struct employee *emp_ptr=&emp;
    printf("Details of employee are:\n");
    printf("Employee Id = %d, Employee Name = %s, Employee Department= %s, Employee Experienece = %d\n",emp_ptr->emp_id,emp_ptr->name,emp_ptr->emp_dept,emp_ptr->emp_exp);
    return 0;
}