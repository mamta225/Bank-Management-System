#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
struct date
{
int dd,mm,yy;
};
typedef struct detail
{
char name[20],fname[20],mname[20],designation[20],gender[10],email[40],address[50],state[10];
int age,pin;
long long int mnumb;
struct date d1,d2;
}det;
typedef struct employee
{
det detail;
char pass[20];
struct employee *next;
}emp;
typedef struct customer
{
det d;
char pass[20];
long int aom;
long long int ac_num,ifsc;
struct customer *next;}cus;
void einput(emp **,det);
void edet(emp *);
void cinput(cus **,det);
void cdet(cus *);
void wd(cus *,det);
void dep(cus *,det);
void bs(cus *,det);
int main()
{
int i,ch,ch1,ch2;
char name[20],pass[20],chr;
det d1,d2;
emp *start=NULL;
cus *strt=NULL;
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
system("cls");
system("COLOR 0F");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\n\n\n\n\t\t\t\t\t\t\t\t PLEASE WAIT WHILE LOADING\n");
printf("\n\n\n\n\t\t\t\t\t\t\t\t LOADING");
for(i=0;i<5;i++)
{
printf(".");
sleep(1);
}
system("cls");
do
{
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\n\t\t\t\t\t\t\tIn which section do you want to enter?\n");
printf("\t\t\t\t\t\t\t1-->Employee's section\n");
printf("\t\t\t\t\t\t\t2-->Customer's section\n");
printf("\t\t\t\t\t\t\t3-->Quit?\n");
scanf("%d",&ch);
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
switch(ch)
{
case 1:printf("\t\t\t\t\t\t\tWhat function do you want to perform?\n");
printf("\t\t\t\t\t\t\t1-->New Entry\n");
printf("\t\t\t\t\t\t\t2-->Get details \n");
printf("\t\t\t\t\t\t\t3-->Quit\n");
scanf("%d",&ch1);
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
switch(ch1)
{
case 1:
einput(&start,d1);
break;
case 2:
edet(start);
break;
case 3:exit(0);default:system("cls");
system("COLOR F4");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t INVALID INPUT\n");
}
break;
case 2:printf("\t\t\t\t\t\t\tWhat function do you want to perform?\n");
printf("\t\t\t\t\t\t\t1-->New Entry\n");
printf("\t\t\t\t\t\t\t2-->Customer detail \n");
printf("\t\t\t\t\t\t\t3-->Withdrawl\n");
printf("\t\t\t\t\t\t\t4-->Deposit\n");
printf("\t\t\t\t\t\t\t5-->Check Balance\n");
printf("\t\t\t\t\t\t\t6-->Quit\n");
scanf("%d",&ch2);
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
switch(ch2)
{
case 1:cinput(&strt,d2);
break;
case 2:
cdet(strt);
break;
case 3:
wd(strt,d2);
break;
case 4:
dep(strt,d2);
break;
case 5:
bs(strt,d2);
break;
case 6:exit(0);default:system("cls");
system("COLOR F4");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t INVALID INPUT\n");
}
break;
case 3:
exit(0);
default:
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t INVALID INPUT\n");
break;
}
system("cls");
system("COLOR 0F");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t Do you wish to continue(y/n)?\n");
scanf("%c",&chr);
}while(chr!='n');
return 0;
}
void einput(emp **start,det d1)
{
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
char p[20];
emp *e;
e=(emp*)malloc(sizeof(emp));
fflush(stdin);
printf("\n\t\t\t\t\t\t\t\tBefore proceeding please register using your mobile number\n");
printf("\n\t\t\t\t\t\t\t\tMobile number-->");
scanf("%lld",&e->detail.mnumb);
fflush(stdin);
printf("\n\t\t\t\t\t\t\t\tPassword-->");gets(e->pass);
printf("\n\t\t\t\t\t\t\t\tConfirm Password-->");
gets(p);
system("cls");
if(strcmp(p,e->pass)==0)
{
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\n\t\t\t\t\t\t\t\tENTER EMPLOYER'S DETAILS\n");
printf("\nName-->");
gets(e->detail.name);
printf("\nFather's Name-->");
gets(e->detail.fname);
printf("\nMother's Name-->");
gets(e->detail.mname);
printf("\nDate Of Birth(DD/MM/YY)-->");
scanf("%d/%d/%d",&e->detail.d1.dd,&e->detail.d1.mm,&e->detail.d1.yy);
fflush(stdin);
printf("\nAge-->");
 scanf("%d",&e->detail.age);
 fflush(stdin);
printf("\nGender-->");
gets(e->detail.gender);
printf("\nState-->");
gets(e->detail.state);
printf("\nPincode-->");
 scanf("%d",&e->detail.pin);
 fflush(stdin);
 printf("\nAddress-->");
gets(e->detail.address);
fflush(stdin);
printf("\nEmail id-->");
gets(e->detail.email);
printf("\nDesignation-->");gets(e->detail.designation);
printf("\nDate Of Joining(DD/MM/YY)-->");
scanf("%d/%d/%d",&e->detail.d2.dd,&e->detail.d2.mm,&e->detail.d2.yy);
e->next=*start;
*start=e;
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\tRegistration Complete\n\n");
printf("\t\t\t\t\t\t\t\tPress Any Key To Proccede\n\n");
getch();
}
else
{
system("COLOR F4");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t Error in proceeding\n");
printf("\n\n\t\t\t\t\t\t\tThe Confirm Password confirmation does not match\n\n");
getch();
}
}
void edet(emp *start)
{
emp *e;
int count=0,i;
char ps[20];
long long int mn;
e=start;
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\tENTER EMPLOYEE REGISTERED MOBILE NUMBER AND PASSWORD TO LOGIN\n\n");
printf("\t\t\t\t\t\tMOBILE NUMBER-->");scanf("%lld",&mn);
fflush(stdin);
printf("\n\n\t\t\t\t\t\tPASSWORD-->");
gets(ps);
while(e!=NULL)
{
if((mn==e->detail.mnumb)&&strcmp(ps,e->pass)==0)
{
system("cls");
fflush(stdin);
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\t EMPLOYEE'S DETAIL \n\n");
printf("%c",201);
for(i=0;i<40;i++)
{
printf("%c",205);
}
printf("%c",187);
printf("\n Name-->");
printf("%s",e->detail.name);
printf("\n Father's Name-->");
printf("%s",e->detail.fname);
printf("\n Mother's Name-->");
printf("%s",e->detail.mname);
printf("\n Date Of Birth(DD/MM/YY)-->");
printf("%d/%d/%d",e->detail.d1.dd,e->detail.d1.mm,e->detail.d1.yy);
printf("\n Age-->");
printf("%d",e->detail.age);
printf("\n Gender-->");
printf("%s",e->detail.gender);
printf("\n State-->");
printf("%s",e->detail.state);
printf("\n Pincode-->");printf("%d",e->detail.pin);
printf("\n Address-->");
printf("%s",e->detail.address);
printf("\n Mobile number-->");
printf("%lld",e->detail.mnumb);
printf("\n Email id-->");
printf("%s",e->detail.email);
printf("\n Designation-->");
printf("%s",e->detail.designation);
printf("\n Date Of Joining(DD/MM/YY)-->");
printf("%d/%d/%d",e->detail.d2.dd,e->detail.d2.mm,e->detail.d2.yy);
printf("\n%c",200);
for(i=0;i<40;i++)
{
printf("%c",205);
}
printf("%c\n",188);
count++;
}
if(count==0)
{
system("cls");
system("COLOR F4");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t ACCESS DENIED\n");
printf("\n\n\t\t\t\t\t\t\tEither Mobile Number or Password is incorrect");
}
e=e->next;
}
printf("\n\nPRESS ANY KEY IF YOU WAMT TO VIEW FURTHER INFORMATION\n");getch();
}
void cinput(cus **strt,det d2)
{
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
char p[20];
int i,temp;
cus *e;
e=(cus*)malloc(sizeof(cus));
srand (time(0));
e->ac_num=0;
e->ifsc=0;
e->aom=0;
fflush(stdin);
printf("\n\t\t\t\t\t\t\t\tBefore proceeding please register using your mobile number\n");
printf("\n\t\t\t\t\t\t\t\tMobile number-->");
scanf("%lld",&e->d.mnumb);
fflush(stdin);
printf("\n\t\t\t\t\t\t\t\tPassword-->");
gets(e->pass);
printf("\n\t\t\t\t\t\t\t\tConfirm Password-->");
gets(p);
system("cls");
if(strcmp(p,e->pass)==0)
{
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\n\t\t\t\t\t\t\t\tENTER CUSTOMER'S DETAILS\n");
printf("\nName-->");
gets(e->d.name);
printf("\nFather's Name-->");gets(e->d.fname);
printf("\nMother's Name-->");
gets(e->d.mname);
printf("\nDate Of Birth(DD/MM/YY)-->");
scanf("%d/%d/%d",&e->d.d2.dd,&e->d.d2.mm,&e->d.d2.yy);
fflush(stdin);
printf("\nAge-->");
 scanf("%d",&e->d.age);
 fflush(stdin);
printf("\nGender-->");
gets(e->d.gender);
printf("\nState-->");
gets(e->d.state);
printf("\nPincode-->");
 scanf("%d",&e->d.pin);
 fflush(stdin);
 printf("\nAddress-->");
gets(e->d.address);
fflush(stdin);
printf("\nEmail id-->");
gets(e->d.email);
printf("\nAccount opening money-->");
scanf("%ld",&e->aom);
for(i=0;i<6;i++)
{
temp=rand();
e->ac_num=e->ac_num*10+temp;
}
for(i=0;i<10;i++)
{
temp=rand();
e->ifsc=e->ifsc*10+temp;
}e->next=*strt;
*strt=e;
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\tRegistration Complete\n\n");
printf("\t\t\t\t\t\t\t\tWelcome to Student Bank of India ");
puts(e->d.name);
printf("\n\n");
printf("\t\t\t\t\t\t\t\tYour Account number is-->%lld\n\n",e->ac_num);
printf("\t\t\t\t\t\t\t\tYour IFSC Code is-->%lld",e->ifsc);
printf("\n\n");
printf("\t\t\t\t\t\t\t\tPress Any Key To Proccede");
printf("\n\n");
getch();
}
else
{
system("COLOR F4");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t Error in proceeding\n");
printf("\n\n\t\t\t\t\t\t\tThe Confirm Password confirmation does not match\n\n");
getch();
}
}
void cdet(cus *strt)
{
cus *e;
int count=0,i=0;
char pss[20];
long long int mumbn;e=strt;
if(e==NULL)
{
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\n\n\n\n\t\t\t\t\t\tCURRENTLY WE DON'T HAVE ANY CUSTOMER'");
}
else
{
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\tENTER CUSTOMER REGISTERED MOBILE NUMBER AND PASSWORD TO LOGIN\n\n");
printf("\t\t\t\t\t\tMOBILE NUMBER-->");
scanf("%lld",&mumbn);
fflush(stdin);
printf("\n\n\t\t\t\t\t\tPASSWORD-->");
gets(pss);
while(e!=NULL)
{
if((mumbn==e->d.mnumb)&&strcmp(pss,e->pass)==0)
{
system("cls");
fflush(stdin);
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\t\t\t CUSTOMER'S DETAIL \n\n");
printf("%c",201);
for(i=0;i<40;i++)
{
printf("%c",205);
}printf("%c",187);
printf("\n Name-->");
printf("%s",e->d.name);
printf("\n Father's Name-->");
printf("%s",e->d.fname);
printf("\n Mother's Name-->");
printf("%s",e->d.mname);
printf("\n Date Of Birth(DD/MM/YY)-->");
printf("%d/%d/%d",e->d.d2.dd,e->d.d2.mm,e->d.d2.yy);
printf("\n Age-->");
printf("%d",e->d.age);
printf("\n Gender-->");
printf("%s",e->d.gender);
printf("\n State-->");
printf("%s",e->d.state);
printf("\n Pincode-->");
printf("%d",e->d.pin);
printf("\n Address-->");
printf("%s",e->d.address);
printf("\n Mobile number-->");
printf("%lld",e->d.mnumb);
printf("\n Email id-->");
printf("%s",e->d.email);
printf("\n Account number-->%lld",e->ac_num);
printf("\n IFSC Code-->%lld",e->ifsc);
printf("\n%c",200);
for(i=0;i<40;i++)
{
printf("%c",205);
}
printf("%c\n",188);
count++;}
else if(count==0)
{
system("COLOR F4");
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t ACCESS DENIED\n");
printf("\n\n\t\t\t\t\t\t\tEither Mobile Number or Password is incorrect");
}
e=e->next;
}
}
printf("\n\nPRESS ANY KEY IF YOU WAMT TO VIEW FURTHER INFORMATION\n");
getch();
}
void wd(cus *strt,det d2)
{
cus *e;
char pss[20];
long int wm;
long long int mumbn;
e=strt;
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\tENTER CUSTOMER REGISTERED MOBILE NUMBER AND PASSWORD TO LOGIN\n\n");
printf("\t\t\t\t\t\tMOBILE NUMBER-->");
scanf("%lld",&mumbn);
fflush(stdin);
printf("\n\n\t\t\t\t\t\tPASSWORD-->");
gets(pss);
while(e!=NULL)
{
if((mumbn==e->d.mnumb)&&strcmp(pss,e->pass)==0)
{
system("cls");
fflush(stdin);
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\tENTER AMOUNT YOU WANT TO WITHDRAW\n\n");
scanf("%ld",&wm);
if(wm<=e->aom)
{
 system("cls"); printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
 e->aom=e->aom-wm;
 printf("\t\t\t\t\t\tSUCCESS\n");
 printf("\t\t\t\t\t\tCURRENT BANK BALANCE IS-->%ld\n\n",e->aom);
}
else
{
 system("cls");
 printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
 printf("\t\t\t\t\t\tFAILED TO PROCCED\n");
 printf("\t\t\t\t\t\tYOU DON'T HAVE SUFFICIENT BALANCE '\n\n");
}
e=e->next;
}
else
{
system("cls");
system("COLOR F4");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t ACCESS DENIED\n");
printf("\n\n\t\t\t\t\t\t\tEither Mobile Number or Password is incorrect");
e=e->next;
}
}
printf("PRESS ANY KEY IF YOU WAMT TO VIEW FURTHER INFORMATION\n");
getch();
}
void dep(cus *strt,det d2)
{
cus *e;
char pss[20];
long int dm;
long long int mumbn;
e=strt;
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\tENTER CUSTOMER REGISTERED MOBILE NUMBER AND PASSWORD TO LOGIN\n\n");
printf("\t\t\t\t\t\tMOBILE NUMBER-->");
scanf("%lld",&mumbn);
fflush(stdin);
printf("\n\n\t\t\t\t\t\tPASSWORD-->");
gets(pss);
while(e!=NULL)
{
if((mumbn==e->d.mnumb)&&strcmp(pss,e->pass)==0)
{
system("cls");fflush(stdin);
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\tENTER AMOUNT YOU WANT TO DEPOSIT\n\n");
scanf("%ld",&dm);
system("cls");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
if(dm<=0)
{
printf("\t\t\t\t\t\tYOU CAN'T DEPOSIT NEGATIVE OR ZERO AMOUNT\n\n");
break;
}
e->aom=e->aom+dm;
printf("\t\t\t\t\t\tSUCCESS\n");
printf("\t\t\t\t\t\tCURRENT BANK BALANCE IS-->%ld\n\n",e->aom);
e=e->next;
}
else
{
system("cls");
system("COLOR F4");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t ACCESS DENIED\n");
printf("\n\n\t\t\t\t\t\t\tEither Mobile Number or Password is incorrect");
e=e->next;
}
}
printf("\n\nPRESS ANY KEY IF YOU WAMT TO VIEW FURTHER INFORMATION\n");
getch();
}
void bs(cus *strt,det d2)
{
cus *e;
char pss[20];
long int wm;
long long int mumbn;
e=strt;
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\tENTER CUSTOMER REGISTERED MOBILE NUMBER AND PASSWORD TO LOGIN\n\n");
printf("\t\t\t\t\t\tMOBILE NUMBER-->");
scanf("%lld",&mumbn);
fflush(stdin);
printf("\n\n\t\t\t\t\t\tPASSWORD-->");
gets(pss);
while(e!=NULL)
{if((mumbn==e->d.mnumb)&&strcmp(pss,e->pass)==0)
{
system("cls");
fflush(stdin);
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n");
printf("\t\t\t\t\t\tCURRENT BANK BALANCE IS-->%ld\n\n",e->aom);
e=e->next;
}
else
{
system("cls");
system("COLOR F4");
printf("\t\t\t\t\t\t\t\t STUDENT BANK OF INDIA\n\n\n\n\n\n\n\n");
printf("\n\n\t\t\t\t\t\t\t\t ACCESS DENIED\n");
printf("\n\n\t\t\t\t\t\t\tEither Mobile Number or Password is incorrect");
e=e->next;
}
}
 printf("\n\nPRESS ANY KEY IF YOU WANT TO VIEW FURTHER INFORMATION\n");
getch();
}




