#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct students
{
	int rollno;
	string name;
	string mothername;
	string fathername;
	int date,month,year;
	long long phnno;
	char grade;
	int per;

	int dsamarks,oopsmarks,deldmarks,mathsmarks,coamarks;
	struct students *next;
};
void getdata();
void showdata();
void calper();
void deletedata();
void insertdata();
void entry_menu();
void mainmenu();
void result();
void showclass();
void intro();
struct students *head=NULL;
struct students *temp,*startlist;
int main()
{
	int t=1,ch;

	intro();

	int choice;
	int num;
	system("cls");
	while(t)
	{

	cout<<"\n\n\n\t\t\t\t\t\t\t\t\tENTRY MENU";
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t1.ENTER NEW DATA\n\t\t\t\t\t\t\t\t2.SHOW REPORT CARD\n\t\t\t\t\t\t\t\t3.DELETE DATA\n\t\t\t\t\t\t\t\t4.INSERT NEW DATA\n\t\t\t\t\t\t\t\t5.SHOW COMBINED RESULT";
	//cout<<"\n\n\t5.BACK TO MAIN MENU";
	cout<<"\n\n\t\t\t\t\t\t\tPlease Enter Your Choice (1-5)---------------> ";
	cin>>choice;
	system("cls");
	switch(choice)
		{
			case 1:getdata();
			system("CLS");
			break;
			case 2:showdata();
			//system("CLS");
			break;
			case 3:deletedata();
			//system("CLS");
			break;
			case 4:insertdata();
		//	system("CLS");
			break;
			case 5:showclass();
			break;
			//	default:	cout<<"\a"; entry_menu();
			//default:
				//cout<<"\a";

		}
		cout<<"\t\t\t\t\t\t\n\n************ENTER\n\t '0' TO END\n\t '1' TO CONTINUE**************\n";
		cout<<"\t\t";
		cin>>t;
	}


}
int countDigit(long long n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}
void getdata()
{

	if(head==NULL)
	{
		temp=new students();
		cout<<"\n\n>>>>>>>    Enter roll number of the student:_________ ";
		cin>>temp->rollno;
		cout<<endl;
		cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter name of the student:________________ ";
		getline(cin,temp->name);
		cout<<endl;
		//cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter mother's name of the student:_______ ";
		getline(cin,temp->mothername);
		cout<<endl;
			//cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter father's name of the student:________ ";
		getline(cin,temp->fathername);
		cout<<endl;

		label3:
		try{
			cout<<"\n\n\n\n>>>>>>>    Enter phone number:_____________________ ";
			cin>>temp->phnno;
		//int len = to_string(temp->phnno).length();
		if(countDigit(temp->phnno)!=10 )
		throw temp->phnno;
		cout<<"\n\n>>Enter date of birth:"<<endl;
	}
	catch(...)
	{
		cout<<"\n\t\tWrong phone number entered";
		goto label3;
	}
		label1:
		try{

		cout<<"\n\n-----Date:   ";
		cin>>temp->date;
		if(temp->date<1 || temp->date>31)
		throw temp->date;
		cout<<"\n-----Month:   ";
		cin>>temp->month;
			if(temp->month<1 || temp->month>12)
		throw temp->month;
		cout<<"\n-----Year:   ";
		cin>>temp->year;
			if(temp->year<1980 || temp->year>2019)
		throw temp->year;
		cout<<"\n\n";
	}
	catch(...)
	{
		cout<<"\t\tWARNING\n\t\tWrong DOB entered:";
		goto label1;
	}
		label2:
		try{

		cout<<"---->   enter DSA marks of the student: ";
		cin>>temp->dsamarks;
		if(temp->dsamarks<0 || temp->dsamarks>100)
		throw temp->dsamarks;
		cout<<"---->   enter OOPS marks of the student: ";
		cin>>temp->oopsmarks;
		if(temp->oopsmarks<0 || temp->oopsmarks>100)
		throw temp->oopsmarks;
		cout<<"---->   enter MATHS marks of the student: ";
		cin>>temp->mathsmarks;
		if(temp->mathsmarks<0 || temp->mathsmarks>100)
		throw temp->mathsmarks;
		cout<<"---->   enter COA marks of the student: ";
		cin>>temp->coamarks;
		if(temp->coamarks<0 || temp->coamarks>100)
		throw temp->coamarks;
		cout<<"---->   enter DELd marks of the student: ";
		cin>>temp->deldmarks;
		if(temp->deldmarks<0 || temp->deldmarks>100)
		throw temp->deldmarks;
	}
	catch(...)
	{
		cout<<"\n\t\t\nWrong marks entered\n";
		goto label2;
	}
		cout<<endl;
		void calculate();
		head=temp;
		startlist=head;
		cout<<"\n\t\tDATA ENTERED SUCCESSFULLY !!!!!!";
	}
	else
	{
		temp=new students();
		cout<<"\n\n>>>>>>>    Enter roll number of the student:_________ ";
		cin>>temp->rollno;
		cout<<endl;
		cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter name of the student:________________ ";
		getline(cin,temp->name);
		cout<<endl;
		//cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter mother's name of the student:_______ ";
		getline(cin,temp->mothername);
		cout<<endl;
			//cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter father's name of the student:________ ";
		getline(cin,temp->fathername);
		cout<<endl;

		label5:
		try{
			cout<<"\n\n\n\n>>>>>>>    Enter phone number:_____________________ ";
			cin>>temp->phnno;
		//int len = to_string(temp->phnno).length();
		if(countDigit(temp->phnno)!=10 )
		throw temp->phnno;
		cout<<"\n\n>>Enter date of birth:"<<endl;
	}
	catch(...)
	{
		cout<<"\n\t\tWrong phone number entered";
		goto label5;
	}
		label6:
		try{

		cout<<"\n\n-----Date:   ";
		cin>>temp->date;
		if(temp->date<1 || temp->date>31)
		throw temp->date;
		cout<<"\n-----Month:   ";
		cin>>temp->month;
			if(temp->month<1 || temp->month>12)
		throw temp->month;
		cout<<"\n-----Year:   ";
		cin>>temp->year;
			if(temp->year<1980 || temp->year>2019)
		throw temp->year;
		cout<<"\n\n";
	}
	catch(...)
	{
		cout<<"\t\tWARNING\n\t\tWrong DOB entered:";
		goto label6;
	}
		label7:
		try{

		cout<<"---->   enter DSA marks of the student: ";
		cin>>temp->dsamarks;
		if(temp->dsamarks<0 || temp->dsamarks>100)
		throw temp->dsamarks;
		cout<<"---->   enter OOPS marks of the student: ";
		cin>>temp->oopsmarks;
		if(temp->oopsmarks<0 || temp->oopsmarks>100)
		throw temp->oopsmarks;
		cout<<"---->   enter MATHS marks of the student: ";
		cin>>temp->mathsmarks;
		if(temp->mathsmarks<0 || temp->mathsmarks>100)
		throw temp->mathsmarks;
		cout<<"---->   enter COA marks of the student: ";
		cin>>temp->coamarks;
		if(temp->coamarks<0 || temp->coamarks>100)
		throw temp->coamarks;
		cout<<"---->   enter DELd marks of the student: ";
		cin>>temp->deldmarks;
		if(temp->deldmarks<0 || temp->deldmarks>100)
		throw temp->deldmarks;
	}
	catch(...)
	{
		cout<<"\n\t\t\nWrong marks entered\n";
		goto label7;
	}
		cout<<endl;
		void calculate();
		temp->next=NULL;
		startlist->next=temp;
		startlist=temp;

	}
	cout<<"\n\t\tDATA ENTERED SUCCESSFULLY !!!!!!";
	return;

}
void calculate()
{ int sum=0;
char Grade,grade;
	sum=temp->dsamarks+temp->oopsmarks+temp->mathsmarks+temp->coamarks+temp->deldmarks;
			temp->per=sum/5.0;
			cout<<"\n*************************";
			cout<<"\nPercentage: "<<temp->per<<"%\n";
			if(temp->per>=60)
		 Grade='A';
	else if(temp->per>=50)
		Grade='B';
	else if(temp->per>=33)
		Grade='C';
	else
		Grade='F';
		temp->grade=Grade;
		cout<<"\n GRADE:  "<<temp->grade<<endl;;
			//flag=1;
			return;

}
void showdata()
{
	int t,flag=0,sum=0;
	char Grade;
	struct students *ptr;

	cout<<"\n\n------- Enter roll number you want to display:------->";
	cin>>t;
	ptr=head;
	while(ptr!=NULL)
	{
		if(ptr->rollno==t)
		{
			system("CLS");
			cout<<"\t\tSTUDENT REPORT CARD";
			//cout.width(25);
			cout<<"\n*****************************************************************************************";
			//cout<<"\n\t\t\t\t****************************";
			cout<<"\n\n\tPERSONAL DETAILS";
			//cout<<"\n\t\t\t\t****************************";
			cout<<"\n\n\t\t\t\t\t\t\t\t\t\troll number: "<<ptr->rollno<<endl;
			cout<<"Student name   :  "<<ptr->name<<endl;
			cout<<"mother's name  :  "<<ptr->mothername<<endl<<endl;
			cout<<"father's name  :  "<<ptr->fathername<<endl<<endl;
			cout<<"\nphone number :  "<<ptr->phnno<<endl<<endl;
			cout<<"Date of Birth  :  "<<ptr->date<<"/"<<ptr->month<<"/"<<ptr->year<<endl;
			cout<<"\n\n\n\t\t\t\t************************************************";
			cout<<"\n\n\t\t\t\t\t\t*******marks********\n";
			cout<<"\t\t\t\t\t\tDSA marks:    "<<ptr->dsamarks<<endl;
			cout<<"\t\t\t\t\t\tOOPS marks:   "<<ptr->oopsmarks<<endl;
			cout<<"\t\t\t\t\t\tMATHS marks:  "<<ptr->mathsmarks<<endl;
			cout<<"\t\t\t\t\t\tCOA marks:    "<<ptr->coamarks<<endl;
			cout<<"\t\t\t\t\t\tDELD marks:    "<<ptr->deldmarks<<endl;
			sum=ptr->dsamarks+ptr->oopsmarks+ptr->mathsmarks+ptr->coamarks+ptr->deldmarks;
			ptr->per=sum/5.0;
			cout<<"\n\t\t\t\t\t\t*************************";
			cout<<"\n\t\t\t\t\t\tPercentage: "<<ptr->per<<"%\n";
			if(ptr->per>=60)
		 Grade='A';
	else if(ptr->per>=50)
		Grade='B';
	else if(ptr->per>=33)
		Grade='C';
	else
		Grade='F';
		ptr->grade=Grade;
		cout<<"\t\t\t\t\t\tGRADE:  "<<ptr->grade<<endl;;
			flag=1;
			return;


		}
		else
		ptr=ptr->next;
	}
	if(flag==0)
	cout<<"ROLL NUMBER DOES NOT EXISTS";
	return;
}

void deletedata()
{
	int ch=1,pos,flag=1;
	cout<<"\nenter roll number to be deleted";
	cin>>pos;
	struct students *holder,*t;
	t=head;
	if(head==NULL)
	{
		cout<<"list is empty:\n";
	}

	else
	if(pos==1)
	{
		head=head->next;
		holder=head;
		delete(holder);
	}
	else
	{

	while(t!=NULL)
	{
		if(ch==pos-1)
		{
			holder=t->next;
			   t->next=t->next->next;
			   delete(holder);
			   flag=1;
			   break;

		}
		else
		{
		ch++;
		t=t->next;
     	}
	}
	if(flag==0)
cout<<"DATA CANNOT BE DELETED!!!!!!!!";
return;
}

}


void insertdata()
{
	struct students *t,*ptr;
	ptr=head;
	int ch=1,pos,flag=0;
	cout<<"enter position/rollnumber to be inserted:\n";
	cin>>pos;

	if(pos==1)
	{
		ptr=new students();
		cout<<"\n\n>>>>>>>    Enter roll number of the student:_________ ";
		cin>>ptr->rollno;
		cout<<endl;
		cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter name of the student:________________ ";
		getline(cin,ptr->name);
		cout<<endl;
		//cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter mother's name of the student:_______ ";
		getline(cin,ptr->mothername);
		cout<<endl;
			//cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter father's name of the student:________ ";
		getline(cin,ptr->fathername);
		cout<<endl;

		label7:
		try{
			cout<<"\n\n\n\n>>>>>>>    Enter phone number:_____________________ ";
			cin>>ptr->phnno;
		//int len = to_string(temp->phnno).length();
		if(countDigit(ptr->phnno)!=10 )
		throw ptr->phnno;
		cout<<"\n\n>>Enter date of birth:"<<endl;
	}
	catch(...)
	{
		cout<<"\n\t\tWrong phone number entered";
		goto label7;
	}
		label8:
		try{

		cout<<"\n\n-----Date:   ";
		cin>>ptr->date;
		if(ptr->date<1 || ptr->date>31)
		throw ptr->date;
		cout<<"\n-----Month:   ";
		cin>>ptr->month;
			if(ptr->month<1 || ptr->month>12)
		throw ptr->month;
		cout<<"\n-----Year:   ";
		cin>>ptr->year;
			if(ptr->year<1980 || ptr->year>2019)
		throw ptr->year;
		cout<<"\n\n";
	}
	catch(...)
	{
		cout<<"\t\tWARNING\n\t\tWrong DOB entered:";
		goto label8;
	}
		label9:
		try{

		cout<<"---->   enter DSA marks of the student: ";
		cin>>ptr->dsamarks;
		if(ptr->dsamarks<0 || ptr->dsamarks>100)
		throw ptr->dsamarks;
		cout<<"---->   enter OOPS marks of the student: ";
		cin>>ptr->oopsmarks;
		if(ptr->oopsmarks<0 || ptr->oopsmarks>100)
		throw ptr->oopsmarks;
		cout<<"---->   enter MATHS marks of the student: ";
		cin>>ptr->mathsmarks;
		if(ptr->mathsmarks<0 || ptr->mathsmarks>100)
		throw ptr->mathsmarks;
		cout<<"---->   enter COA marks of the student: ";
		cin>>ptr->coamarks;
		if(ptr->coamarks<0 || ptr->coamarks>100)
		throw ptr->coamarks;
		cout<<"---->   enter DELd marks of the student: ";
		cin>>ptr->deldmarks;
		if(ptr->deldmarks<0 || ptr->deldmarks>100)
		throw ptr->deldmarks;
	}
	catch(...)
	{
		cout<<"\n\t\t\nWrong marks entered\n";
		goto label9;
	}
		cout<<endl;
		void calculate();
		cout<<endl;
		ptr->next=head;
		head=ptr;
		flag=1;


	}
	else
	{
		t=head;
		while(t!=NULL)
		{
			if(ch==pos-1)
			{
					ptr=new students();
		cout<<"\n\n>>>>>>>    Enter roll number of the student:_________ ";
		cin>>ptr->rollno;
		cout<<endl;
		cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter name of the student:________________ ";
		getline(cin,ptr->name);
		cout<<endl;
		//cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter mother's name of the student:_______ ";
		getline(cin,ptr->mothername);
		cout<<endl;
			//cin.ignore(256, '\n');
		cout<<"\n\n>>>>>>>    Enter father's name of the student:________ ";
		getline(cin,ptr->fathername);
		cout<<endl;

		label11:
		try{
			cout<<"\n\n\n\n>>>>>>>    Enter phone number:_____________________ ";
			cin>>ptr->phnno;
		//int len = to_string(temp->phnno).length();
		if(countDigit(ptr->phnno)!=10 )
		throw ptr->phnno;
		cout<<"\n\n>>Enter date of birth:"<<endl;
	}
	catch(...)
	{
		cout<<"\n\t\tWrong phone number entered";
		goto label11;
	}
		label12:
		try{

		cout<<"\n\n-----Date:   ";
		cin>>ptr->date;
		if(ptr->date<1 || ptr->date>31)
		throw ptr->date;
		cout<<"\n-----Month:   ";
		cin>>ptr->month;
			if(ptr->month<1 || ptr->month>12)
		throw ptr->month;
		cout<<"\n-----Year:   ";
		cin>>ptr->year;
			if(ptr->year<1980 || ptr->year>2019)
		throw ptr->year;
		cout<<"\n\n";
	}
	catch(...)
	{
		cout<<"\t\tWARNING\n\t\tWrong DOB entered:";
		goto label12;
	}
		label13:
		try{

		cout<<"---->   enter DSA marks of the student: ";
		cin>>ptr->dsamarks;
		if(ptr->dsamarks<0 || ptr->dsamarks>100)
		throw ptr->dsamarks;
		cout<<"---->   enter OOPS marks of the student: ";
		cin>>ptr->oopsmarks;
		if(ptr->oopsmarks<0 || ptr->oopsmarks>100)
		throw ptr->oopsmarks;
		cout<<"---->   enter MATHS marks of the student: ";
		cin>>ptr->mathsmarks;
		if(ptr->mathsmarks<0 || ptr->mathsmarks>100)
		throw ptr->mathsmarks;
		cout<<"---->   enter COA marks of the student: ";
		cin>>ptr->coamarks;
		if(ptr->coamarks<0 || ptr->coamarks>100)
		throw ptr->coamarks;
		cout<<"---->   enter DELd marks of the student: ";
		cin>>ptr->deldmarks;
		if(ptr->deldmarks<0 || ptr->deldmarks>100)
		throw ptr->deldmarks;
	}
	catch(...)
	{
		cout<<"\n\t\t\nWrong marks entered\n";
		goto label13;
	}
		cout<<endl;
		void calculate();
		cout<<endl;
		ptr->next=t->next;
		t->next=ptr;
		flag=1;
		break;
			}
			else
			{
				ch++;
				t=t->next;
			}
		}
	}
	if(flag==0)
	cout<<"\n\t\tDATA CANNOT SUBMIT !!!!!";
	else
	cout<<"\n\tDATA SUBMITTED SUCCESSFULLY !!!!!";
	return;
}




	void intro()
{
	cout<<"\n\n\n\t\t\t\t\t  STUDENT";
	cout<<"\n\n\n\t\t\t\t\t  REPORT CARD";
	cout<<"\n\n\n\t\t\t\t\t  PROJECT";
	cout<<"\n\n\n\t\t\t\t\t  MADE BY : ANSHU GUPTA\n\t\t\t\t\t\t   ";
	cout<<"\n\n\n\t\t\t\t  COLLEGE : ARMY INSTITUTE OF TECHNOLOGY, PUNE";
	cin.get();
	return;
}

void showclass()
{
	struct students *t;
	t=head;
	cout<<"\n\n\t\t\t\t\tALL STUDENTS RESULT \n\n\n";
	cout<<"=======================================================================================================================================================\n";
	cout<<"R.No\t\t\tName\t\t\tDSA\t\t\tOOPS\t\t\tMATHS\t\t\tCOA\t\t\tDELD"<<endl;
	cout<<"=======================================================================================================================================================\n";
	while(t!=NULL)
	{
cout<<t->rollno<<"\t\t\t"<<t->name<<"\t\t\t"<<t->dsamarks<<"\t\t\t"<<t->oopsmarks<<"\t\t\t"<<t->mathsmarks<<"\t\t\t"<<t->coamarks<<"\t\t\t"<<t->deldmarks;
		t=t->next;
		cout<<endl;
	}
}


