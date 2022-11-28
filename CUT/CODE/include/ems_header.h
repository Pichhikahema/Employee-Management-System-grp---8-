/***********************************************************************************************************************************
 * *  FILE NAME               :  ems_header.h
 *
 * *  DESCRIPTION             :  This file consists of function declaration used in various function 
 *
 * * REVISION HISTORY         :
 *
 * *    DATE                NAME                 REASON
 *
 *      ----               ------                ------
 *
 * *********************************************************************************************************************************/     
#ifndef EMS_HEADER_H
#define EMS_HEADER_H

// header files declared


// structure of project 
typedef struct project
{
	int p_id;
	char p_name[20];
	int no_p;
	struct project *next1;
}pr;


// temporary structure for the project
typedef struct tproject
{
	int p_id;
	char p_name[20];
	int no_p;
}pt;


// structure of emp_details
typedef struct emp_details
{
	int emp_id;
	char emp_name[20];
	double salary1;
	char phone_number[10];
	int work_hrs;
	char project_name[20];
	int pr_count;
	double total_salary;
	double incentives;
	double epf_deduct;
	char gender[10];
	char address[30];
	int no_projects;
	int project_id;
	int no_people;
	int temp_id;
	//int calculate_salary;
	struct emp_details *next;
}emp;


// temporary structure for emp_details
typedef struct temp
{
	int emp_id;
	char emp_name[20];
	double salary1;
	char phone_number[10];
	int work_hrs;
	char project_name[20];
	int pr_count;
	int no_projects;
	int project_id;
	double total_salary;
	int no_people;
	double incentives;
	double epf_deduct;
	char gender[10];
	int temp_id;
	//int calculate_salary;
	char address[30];
}t;


// functions used 
int employee();
int admin();


int emp_details();
int project_details();
int highest_projects();
int pay_report();
int view_emp_details();
int employee();
int add_emp_details();
int edit_emp_details();
int view_emp_details();
int view_3emp_details();
int view_max_3pr_details();
int del_emp_details();
int view_payslip();
int add_pr_details();
int view_pr_details();


int project();
int project_1();
int project_2();
int project_3();
int edit_project();
int add_project();
int view_project();
int del_project();
int employee_details();
int salary_details();
/*int view_proj_details();
int view_sal_details();
int highest_projects();*/
int alpha_valid(char *s);
int digit_valid();
int emp_file_to_list();
int emp_list_to_file();
int pr_file_to_list();
int pr_list_to_file();


#endif
