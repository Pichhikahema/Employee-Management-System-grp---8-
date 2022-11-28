/***********************************************************************************************
 *
 * FILE NAME        : emp_func.c,
 *
 * DESCRIPTION      : This file defines the functions in the employee menu
 *                    to perform various operations in the employee database
 *
 * REVISION         :
 *
 *      DATE        NAME         REASON
 *
 *      ----        ----         ------
 *
 ************************************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include "../include/ems_header.h"


extern emp *start,*new,*ptr,*prev,*last;
extern pr *start1,*new1,*ptr1,*prev1,*last1;

/*int pay_report()
{
	if(!start)
	{
		printf("Empty list");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	int temp_id;
	printf("Enter employee id to view pay report: ");
	scanf("%d",&temp_id);
	if(new->emp_id==temp_id)
	{
		printf("%d   %s",&new->emp_id,new->emp_name);
	}
	system("read a");
	system("clear");
	return EXIT_SUCCESS;
}*/

int pay_report()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	int temp_id;
	printf("Enter employee id %d to view the pay slip:");
	scanf("%d",&temp_id);
	for(ptr=start;(ptr);ptr=ptr->next)
	{
		if(!ptr)
		{
			printf("employee id %d does not exist",new->temp_id);
			system("read a");
			system("clear");
			return EXIT_FAILURE;
		}
	}
	int calculate_salary=(100*new->work_hrs*30)+(new->no_projects*10);
	printf("%d\n",calculate_salary);
	printf("emp_id\temp_name\tphone\thender\taddress\thours\tprojects\tsalary\n");
	//for(ptr=start;(ptr);ptr=ptr->next);
		
	if(temp_id==new->emp_id)
	{
		//printf("%d%s\n",new->emp_id,new->emp_name);
		printf("%d\t%s\t%s\t%c\t%s\t%d\t%d\t%d\n",ptr->emp_id,ptr->emp_name,ptr->phone_number,ptr->gender,ptr->address,ptr->work_hrs,ptr->no_projects,calculate_salary);
	}
	return EXIT_SUCCESS;
}


int edit_emp_details()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	int temp_id;
	printf("Enter employee id to edit:");
	scanf("%d",&temp_id);

	if(new->emp_id!=temp_id)
	{
		printf("No record found");
		return EXIT_FAILURE;
	}
	else
	{
		printf("Enter new name:");
		scanf("%s",new->emp_name);
		printf("Enter phone number:");
		scanf("%s",&new->emp_name);
		printf("Enter address:");
		scanf("%s",new->address);
		printf("Enter work hours:");
		scanf("%d",&new->work_hrs);
		printf("Enter new name:");
		scanf("%d",&new->no_projects);
	
	}
	if(!start1)
        {
                start1=new1;
                new1->next1=NULL;
        }
        else if(new1->p_id<start1->p_id)
        {
                new1->next1=start1;
                start1=new1;
        }
        else
        {
                for(ptr1=start1;(ptr1) && ptr1->p_id < new1->p_id;prev1=ptr1,ptr1=ptr1->next1);
                prev1->next1=new1;
                new1->next1=ptr1;
        }
        return EXIT_SUCCESS;

	system("read a");
	system("clear");

	return EXIT_SUCCESS;
}

/*	printf("\nExisting name is %s",new->emp_name);
	while(1)
	{
		printf("Enter employee name:\n");
		scanf("%s",new->emp_name);
		if(strlen(new->emp_name)>20)
		{
			printf("\nEmployee name should not be greater than 20 characters\n");
			continue;
		}
		if(alpha_valid(new->emp_name)==1)
		{
			printf("\nName should have alphabets only\n");
			continue;
		}
		else
			break;
	}

	printf("Enter existing phone number is %s",new->phone_number);

	while(1)
	{
		printf("Enter phone number:\n");
		scanf("%s",new->phone_number);
		if(strlen(new->phone_number)!=10)
		{
			printf("\nphone number should  be 10 digits\n");
			continue;
		}
		if(digit_valid(new->phone_number)==1)
		{
			printf("\nphone number should have digits  only\n");
			continue;
		}
		else
			break;
	}

	//entering gender details
	
	printf("\nEnter gender:\n");
	scanf("%s",&new->gender);

	// entering address

	printf("Enter existing  existing address id %s",new->address);
	while(1)
	{
		printf("Enter address:\n");
		scanf("%s",new->address);
		if(strlen(new->address)>30)
		{
			printf("\naddress should not be greater than 30 characters\n");
			continue;
		}
		else
			break;
	}

	system("read a");
	system("clear");
	return EXIT_SUCCESS;
}
int edit_emp_details()
{
	if(!start)
	{
		printf("no record found\n");
		return EXIT_FAILURE;
	}
	int emp_id;
	while(1)
	{
		printf("\nEnter the employee id to edit:\n");
		scanf("%d",&emp_id);
		for(ptr=start;(ptr)&&ptr->emp_id!=emp_id;ptr=ptr->next);
		if(!ptr)
		{
			printf("\nemployee id %d is not found\n",emp_id);
			return EXIT_FAILURE;
		}
		printf("enter new name,phone number,gender,address,hours,no of projects");
		scanf("%s %s %c %s %d %d",ptr->emp_name,ptr->phone_no,ptr->gender,ptr->w_hrs,ptr->no_projects);
		printf("\n1.Name\n2.phone number\n3.gender\n4.work hours\n5.projects\n");
		printf("ENter your choice:");
		scanf("%d",&ptr->ch);
		if(ptr->ch>5)
		{
			printf("\nenter type\n");
			continue;
		}
		else
		{
			if(ptr->ch==1)
			{
				strcpy(ptr->*/

int del_emp_details()
{
	if(!start)
	{
		printf("Empty list");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	int eid;
	printf("\nEnter employee id to delete: ");
	scanf("%d",&eid);
	if(eid==start->emp_id)
	{
		ptr=start;
		start=start->next;
		free(ptr);
	}
	else
	{
		for(ptr=start; (ptr) && ptr->emp_id!=eid; prev=ptr, ptr=ptr->next);
		if(!ptr)
		{
			printf("Employee id you entered doesnot exist......!\n");
			system("read a");
			system("clear");
			return EXIT_FAILURE;
		}
		prev->next=ptr->next;
		free(ptr);
		return EXIT_SUCCESS;
	}

}


int view_max_3pr_details()
{
	if(!start)
	{
		printf("Empty list");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	printf("emp_id\temp_name\tphone\thender\taddress\thours\tprojects\n");
	for(ptr=start;(ptr);ptr=ptr->next);
		if(new->no_projects==3)
		{
			printf("%d\t%s\t%s\t%c\t%s\t%d\t%d\n",ptr->emp_id,ptr->emp_name,ptr->phone_number,ptr->gender,ptr->address,ptr->work_hrs,ptr->no_projects);
		}
		system("read a");
		system("clear");
		return EXIT_SUCCESS;
}
