#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

void newdata();
int list_of_donor();
int search_donor(char *bgrp);

struct
{
  char d_name[25] ;
  int d_age;
  char d_bgrp[10];
  char d_contactinfo[25];
  char d_address[500];
  char d_recentbd[20];
}donor_data;

//initializing the files used in the program

FILE *Donor_data_record;


int list_of_donor()
{
	int cnt=0;
	Donor_data_record = fopen("Donor_data_record.txt","a+");
    while(!feof(Donor_data_record))
    {
    	fscanf(Donor_data_record,"%s%d%s%s%s%s",donor_data.d_name,&donor_data.d_age,donor_data.d_bgrp,donor_data.d_contactinfo,donor_data.d_address,donor_data.d_recentbd);
        cnt++;
        fclose(Donor_data_record);
    }
return cnt;
}

int search_donor(char *bgrp)
{
	int i;
    int Found=0;
    Donor_data_record=fopen("Donor_data_record.txt","r");
        while(!feof(Donor_data_record))
        {
            fscanf(Donor_data_record,"%s%d%s%s%s%s",donor_data.d_name,&donor_data.d_age,donor_data.d_bgrp,donor_data.d_contactinfo,donor_data.d_address,donor_data.d_recentbd);
            if(strcmp(bgrp,donor_data.d_bgrp)==0)
            {
            	Found=1;
            }
        }
        fclose(Donor_data_record);
        if(!Found)
        return 0;
        else
        return 1;
}
