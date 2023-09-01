#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<windows.h>

using namespace std;

/********************DECLARING FUNCTION HEADERS********************/
  void Password();
  void Main_menu();
  void Teacher();
  void Public();
  void Student();

class STUDENT
{  
    private:
    char name[50];
    char fname[50];
    char mname[50];
    char dob[15];
    char tel_no[15];
    int stu_class;
    char div[2];
    char uid[11];
    char gender[100]; 
    char stream;
    float marks[5];
    char sec_code[10];
    int attendance;
    float per;
    char grade;
    void getper()
    {
        per=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
    }
    void getgrade()
    {
        if(per>=80)
        grade='A';
        else if((per>=60)&&(per<=79))
        grade='B';
        else if((per>=40)&&(per<=59))
        grade='C';
        else if((per>=35)&&(per<=39))
        grade='D';
        else if(per<35)
        grade='E';
    }
    public:
    void enter()
    {
        cout<<"\t\t\t  -------------------------------"<<"\n";
        cout<<"\t\t\t     ENTER THE STUDENT DETAILS"<<"\n";
        cout<<"\t\t\t  -------------------------------"<<"\n\n";
        cout<<"\t\tNAME OF THE STUDENT    : ";
        cin.ignore();
        cin.getline(name,50);
        cout<<"\t\tFATHER'S NAME          : ";
        cin.getline(fname,50);
        cout<<"\t\tMOTHER'S NAME          : ";
        cin.getline(mname,50);
        cout<<"\t\tDATE OF BIRTH(DD/MM/YYYY): ";
        cin.getline(dob,15);
        cout<<"\t\tTELEPHONE NUMBER       : ";
        cin>>tel_no;
        cout<<"\t\tSECURITY CODE          : ";
        cin>>sec_code;

        cout<<"\t\tGENDER                 : ";
        cin>>gender;
        cout<<"\t\tCLASS                  : ";
        cin>>stu_class;
        cout<<"\t\tDIVISION               : ";
        cin>>div;
        cout<<"\t\tUID                    : ";
        cin>>uid;
        cout<<"\t\tDAYS PRESENT           : ";
        cin>>attendance;
        cout<<"\n\t\tSTREAM('C' FOR COMPUTER OR 'B' FOR BIOLOGY): ";
        cin>>stream;
        cout<<"\n";
        if(stream=='C'||stream=='c')
        {
            cout<<"\t\t\t  -----------------------------"<<"\n";
            cout<<"\t\t\t     ENTER THE SUBJECT MARKS"<<"\n";
            cout<<"\t\t\t  -----------------------------"<<"\n\n";
            cout<<"\t\t\t       PHYSICS    : ";
            cin>>marks[0];
            cout<<"\t\t\t       CHEMISTRY  : ";
            cin>>marks[1];
            cout<<"\t\t\t       MATHEMATICS: ";
            cin>>marks[2];
            cout<<"\t\t\t       COMPUTER   : ";
            cin>>marks[3];
            cout<<"\t\t\t       ENGLISH    : ";
            cin>>marks[4];
        }
        else
        {
            cout<<"\t\t\t  -----------------------------"<<"\n";
            cout<<"\t\t\t     ENTER THE SUBJECT MARKS"<<"\n";
            cout<<"\t\t\t  -----------------------------"<<"\n\n";
            cout<<"\t\t\t       PHYSICS    : ";
            cin>>marks[0];
            cout<<"\t\t\t       CHEMISTRY  : ";
            cin>>marks[1];
            cout<<"\t\t\t       MATHEMATICS: ";
            cin>>marks[2];
            cout<<"\t\t\t       BIOLOGY    : ";
            cin>>marks[3];
            cout<<"\t\t\t       ENGLISH    : ";
            cin>>marks[4];
        }
        cout<<"\n\n";
        getper();
        getgrade();
    }
    void display_report()
    {
        cout<<"--------------------------------------------------------------------";
        cout<<"---------------------------------------------------------\n";
        cout<<"\t\t\t\t\t          CHANDIGARH  UNIVERSITY\n\n";
        cout<<"\t\t\t\t\t           STUDENT REPORT CARD\n";
        cout<<"---------------------------------------------------------------------";
        cout<<"--------------------------------------------------------\n\n";
        cout<<"\t\t ---------------------------------------------------------------------------------------------  \n";
        cout<<"\t\t|\t\t\t          ------------------------                                    | \n";
        cout<<"\t\t|\t\t\t              PERSONAL DETAILS                                        |  \n";
        cout<<"\t\t|\t\t\t          ------------------------                                    | \n";
        cout<<"\t\t ---------------------------------------------------------------------------------------------    \n";
        cout<<"\t\t    NAME: "<<name<<"\t\t"<<"CLASS: "<<stu_class<<" "<<div<<"\t"<<"\tROLL NO: "<<uid<<"\n";
        cout<<"\t\t                                                                                               "<<"\n";
        cout<<"\t\t    DATE OF BIRTH: "<<dob<<"\t\t"<<"GENDER: "<<gender<<"\t\t";
       
        if(stream=='C'||stream=='c')
        {
            cout<<"STREAM: "<<"COMPUTER"<<"               \n";
        }
        else if(stream=='B'||stream=='b')
        {
            cout<<"STREAM: "<<"BIOLOGY"<<"               \n";
        }
            cout<<"\t\t                                                                                               "<<"\n";
            cout<<"\t\t    FATHERS NAME: "<<fname<<"\t"<<"TELEPHONE: "<<tel_no<<"\tMOTHERS NAME: "<<mname<<"\n";
            cout<<"\t\t --------------------------------------------------------------------------------------------- \n";
            cout<<"\t\t|                                                                                             |\n";
            cout<<"\t\t|\t\t\t         ----------------------------                                 |\n";
            cout<<"\t\t|\t\t\t             ACADEMIC PERFORMANCE                                     |\n";
            cout<<"\t\t|\t\t\t         ----------------------------                                 |\n";
            cout<<"\t\t|\t\t\t---------------------------------------------                         |\n";
            cout<<"\t\t|\t\t\t                   MARKS                                              |\n";
            cout<<"\t\t|\t\t\t---------------------------------------------                         |\n";
            cout<<"\t\t|\t\t\t                                                                      |\n";

            if(stream=='C'||stream=='c')
            {
                cout<<"\t\t|\t\t\t\t       PHYSICS  \t"<<marks[0]<<"                                    |\n";
                cout<<"\t\t|\t\t\t\t       CHEMISTRY\t"<<marks[1]<<"                                    |\n";
                cout<<"\t\t|\t\t\t\t       MATHS    \t"<<marks[2]<<"                                    |\n";
                cout<<"\t\t|\t\t\t\t       COMPUTER \t"<<marks[3]<<"                                    |\n";
                cout<<"\t\t|\t\t\t\t       ENGLISH  \t"<<marks[4]<<"                                    |\n";
            }
            else if(stream=='B'||stream=='b')
            {
                cout<<"\t\t|\t\t\t         PHYSICS  \t"<<marks[0]<<"                                    |\n";
                cout<<"\t\t|\t\t\t         CHEMISTRY\t"<<marks[1]<<"                                    |\n";
                cout<<"\t\t|\t\t\t         MATHS    \t"<<marks[2]<<"                                    |\n";
                cout<<"\t\t|\t\t\t         BIOLOGY  \t"<<marks[3]<<"                                    |\n";
                cout<<"\t\t|\t\t\t         ENGLISH  \t"<<marks[4]<<"                                    |\n";
            }
            cout<<"\t\t|\t\t\t-------------------        -------------------                        |\n";
            cout<<"\t\t|\t\t\t PERCENTAGE: "<<per<<"%"<<"           ";
            cout<<"\tGRADE: "<<grade<<"                              |\n";
            cout<<"\t\t|\t\t\t-------------------        -------------------                        |\n";
            cout<<"\t\t|\t\t\t                                                                      |\n";
            cout<<"\t\t --------------------------------------------------------------------------------------------- \n";
    }
    void display_all()
    {
        cout<<"\t\t\t\t\t\t\t"<<name<<"\n";
        cout<<"\t                     PERSONAL INFO                                      ACADEMIC PERFORMANCE                 \n";
        cout<<"\t -----------------------------------------------------|-------------------------------------------------\t\n";
        cout<<"\t  UID: "<<uid<<"\tCLASS: "<<stu_class<<" "<<div<<"\t\t      |"<<" PHYSICS   "<<"CHEMISTRY   "<<"MATHS   "<<"COMP   "<<"ENGLISH  \t\n";
        cout<<"\t  GENDER: "<<gender<<"\t"<<"STREAM: "<<stream<< "\t\t\t      |   "<<marks[0]<<"\t\t"<<marks[1]<<"\t"<<marks[2]<<"\t"<<marks[3]<<"   \t"<<marks[4]<<"\t\n";
        cout<<"\t  FATHER: "<<fname<<"\t\t\n";
        cout<<"\t  MOTHER: "<<mname<<"\t\t\n";
        cout<<"\t  TELEPHONE NO: "<<tel_no<<"\t\t\t           "<<"PERCENTAGE: "<<per<<"%\t"<<"          GRADE: "<<grade<<"\t\n";
        cout<<"\t  SECURE CODE: "<<sec_code<<"\t\t\t\t\t\t        "<<"   ATTENDANCE: "<<attendance<<"\n";
        cout<<"\t -----------------------------------------------------|-------------------------------------------------\t\n\n";

    }

    friend void del();
    friend void modify();
    friend void search();
    friend void student_login();
    friend void sort();
    friend void sortmark();
    friend void sortper();
    friend void search_by_gender();
    friend void change_pass();
    friend void forgot_password();

};

/**************************ADDING A RECORD**************************/
void add()
{
    STUDENT s;
    ofstream f("Record.dat",ios::binary|ios::app);
    s.enter();
    f.write((char*)&s,sizeof(s));
    f.close(); 
}

/********************DISPLAYING ALL THE RECORDS********************/
void disp_all()
{
    STUDENT s;
    ifstream f("Record.dat");
    if(!f)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\t\t\t\t\t  ----------------------------------------------"<<"\n";
        cout<<"\t\t\t\t\t               LIST OF CLASS RECORDS            "<<"\n";
        cout<<"\t\t\t\t\t  ----------------------------------------------"<<"\n\n";
        while(f.read((char*)&s,sizeof(s)))
        {
            s.display_all();
            cout<<"\n\n\n\t\t---------------------------------------------------------------------------------\n\n\n";
        }
    }
    f.close();
}



/*************************DELETING A RECORD*************************/
void del()
{
    STUDENT s;
    ifstream f1("Record.dat");
    ofstream f2("Temp.dat",ios::binary);
    char n[11];
    int flag=0;
    if(!f1)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
        cout<<"ENTER THE UID OF THE STUDENT: ";
        cin>>n;
        system("cls");
        while(f1.read((char*)&s,sizeof(s)))
        {
            if(strcmp(n,s.uid)!=0)
            {
                f2.write((char*)&s,sizeof(s));
                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
        else
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
            cout<<"THE RECORD WAS DELETED SUCCESSFULLY";
            cout<<"\n\n\n\n\n\n\n\n";
        }
    }
    f1.close();
    f2.close();
    remove("Record.dat");
    rename("Temp.dat","Record.dat");
}


/************************MODIFYING A RECORD************************/

void modify()
{
    STUDENT s;
    ifstream f1("Record.dat");
    ofstream f2("Temp.dat",ios::binary);
    int flag=0;
    char n[11];
    if(!f1)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
        cout<<"ENTER THE UID OF THE STUDENT: ";
        cin>>n;
        system("cls");
        while(f1.read((char*)&s,sizeof(s)))
        {
            if(strcmp(n,s.uid)==0)
            {
                start:
                system("cls");
                cout<<"\t\t\t\t\t\t\t"<<s.name<<"\n";
                cout<<"\t                     PERSONAL INFO                                      ACADEMIC PERFORMANCE                 \n";
                cout<<"\t -----------------------------------------------------|-------------------------------------------------\t\n";
                cout<<"\t  UID: "<<s.uid<<"\tCLASS: "<<s.stu_class<<" "<<s.div<<"\t\t      |"<<" PHYSICS   "<<"CHEMISTRY   "<<"MATHS   "<<"COMP   "<<"ENGLISH  \t\n";
                cout<<"\t  GENDER: "<<s.gender<<"\t"<<"STREAM: "<<s.stream<< "\t\t\t      |   "<<s.marks[0]<<"\t\t"<<s.marks[1]<<"\t"<<s.marks[2]<<"\t"<<s.marks[3]<<"   \t"<<s.marks[4]<<"\t\n";
                cout<<"\t  FATHER: "<<s.fname<<"\t\t\n";
                cout<<"\t  MOTHER: "<<s.mname<<"\t\t\n";
                cout<<"\t  TELEPHONE NO: "<<s.tel_no<<"\t\t\t           "<<"PERCENTAGE: "<<s.per<<"%\t"<<"          GRADE: "<<s.grade<<"\t\n";
                cout<<"\t  SECURE CODE: "<<s.sec_code<<"\t\t\t\t\t\t        "<<"   ATTENDANCE: "<<s.attendance<<"\n";
                cout<<"\t -----------------------------------------------------|-------------------------------------------------\t\n\n";
                int option;
				
				cout<<"\t\t\t\tCHOOSE ITEM THAT YOU WANT TO MODIFY "<<endl;
				cout<<"\t\t\t\t*******************************************************************"<<endl;
				cout<<"\t\t\t\t*                                                                 *"<<endl;
				cout<<"\t\t\t\t*                           0. EXIT                               *"<<endl;
				cout<<"\t\t\t\t*        1. Student UID                   6. GENDER               *"<<endl;
				cout<<"\t\t\t\t*        2. Full Name                     7. CLASS                *"<<endl;
                cout<<"\t\t\t\t*        3. Fathers Name                  8. TELEPHONE No.        *"<<endl;
                cout<<"\t\t\t\t*        4. Mothers Name                  9. ATTENDANCE           *"<<endl;
				cout<<"\t\t\t\t*        5. Date Of Birth                10. MARKS                *"<<endl;
				cout<<"\t\t\t\t*                      11.MODIFY ALL DETAILS                      *"<<endl;
				cout<<"\t\t\t\t*******************************************************************"<<endl;
				cout<<"\t\t\t\tPlease enter your choose: "; 
				cin >> option;
				cin.ignore();

				switch(option)
                {
                    case 0:
                    Teacher();

                    case 1:
                    cout<<"ENTER NEW UID OF STUDENT : ";
                    cin.getline(s.uid,11);
                    break;

					case 2:
                    cout<<"NAME OF STUDENT : "<<s.name<<endl;
                    cout<<"ENTER NEW NAME : ";
                    cin.getline(s.name,50);
                    break;

                    case 3:
                    
                    cout<<"ENTER FATHERS NAME : ";
                    cin.getline(s.fname,50);
                    break;

                    case 4:
                    
                    cout<<"ENTER MOTHERS NAME : ";
                    cin.getline(s.mname,50);
                    break;

                    case 5:
                    
                    cout<<"ENTER DATE OF BIRTH : ";
                    cin.getline(s.dob,15);
                    break;

                    case 6:
                    
                    cout<<"ENTER GENDER : ";
                    cin.getline(s.gender,100);
                    break;

                    case 7:
                    
                    cout<<"ENTER NEW CLASS : ";
                    cin>>s.stu_class;
                    break;

                    case 8:
                    
                    cout<<"ENTER NEW PHONE NUMBER : ";
                    cin.getline(s.tel_no,15);
                    break;

                    case 9:
                    
                    cout<<"ENTER NEW ATTENDANCE : ";
                    cin>>s.attendance;
                    break;

                    case 10:
                    system("cls");
                    if(s.stream=='C'||s.stream=='c')
                    {
                        cout<<"\t\t\t\t\t  ----------------------------------"<<"\n";
                        cout<<"\t\t\t\t\t     ENTER MODIFIED SUBJECT MARKS   "<<"\n";
                        cout<<"\t\t\t\t\t  ----------------------------------"<<"\n\n";
                        cout<<"\t\t\t\t\t       PHYSICS    : ";
                        cin>>s.marks[0];
                        cout<<"\t\t\t\t\t       CHEMISTRY  : ";
                        cin>>s.marks[1];
                        cout<<"\t\t\t\t\t       MATHEMATICS: ";
                        cin>>s.marks[2];
                        cout<<"\t\t\t\t\t       COMPUTER   : ";
                        cin>>s.marks[3];
                        cout<<"\t\t\t\t\t       ENGLISH    : ";
                        cin>>s.marks[4];
                    }
                    else
                    {
                        cout<<"\t\t\t\t\t  ----------------------------------"<<"\n";
                        cout<<"\t\t\t\t\t     ENTER MODIFIED SUBJECT MARKS   "<<"\n";
                        cout<<"\t\t\t\t\t  ----------------------------------"<<"\n\n";
                        cout<<"\t\t\t\t\t           PHYSICS    : ";
                        cin>>s.marks[0];
                        cout<<"\t\t\t\t\t           CHEMISTRY  : ";
                        cin>>s.marks[1];
                        cout<<"\t\t\t\t\t           MATHEMATICS: ";
                        cin>>s.marks[2];
                        cout<<"\t\t\t\t\t           BIOLOGY    : ";
                        cin>>s.marks[3];
                        cout<<"\t\t\t\t\t           ENGLISH    : ";
                        cin>>s.marks[4];
                    }
                    cout<<"\n\n";
                    s.getper();
                    s.getgrade();
                    break;

                    case 11:
                    
                    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
                    cout<<"ENTER THE MODIFIED DETAILS OF THE STUDENT";
                    Sleep(3000);
                    system("cls");
                    s.enter();

                    default:
                    cout<<"\n\n\n\t\t\t\t\t\t  INVALID OPTION  "<<"\n\n";
                    Sleep(1000);
                    cout<<"\t\t\t\t\t\tPLEASE TRY AGAIN !! "<<"\n\n";
                    system("PAUSE");
                    goto start; 

                }

                f2.write((char*)&s,sizeof(s));
                flag=1;
            }
            else
            {
                f2.write((char*)&s,sizeof(s));
            }
        }
        if(flag==0)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
        else
        {
            cout<<"\n\n\n\n\n\n\t\t\t\tRECORD SUCCESSFULLY MODIFIED !\n\n\n";

        }
    }
    f1.close();
    f2.close();
    remove("Record.dat");
    rename("Temp.dat","Record.dat");
}

/******************SEARCHING FOR A RECORD (TEACHER)******************/
void search()
{
    STUDENT s;
    ifstream f("Record.dat");
    char n[11];
    int flag=0;
    if(!f)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t";
        cout<<"ENTER THE UID OF THE STUDENT: ";
        cin.ignore();
        cin.getline(n,11);
        system("cls");
        while(f.read((char*)&s,sizeof(s)))
        {
            if(strcmp(n,s.uid)==0)
            {
                flag=1;
                s.display_report();
            }
        }
        if(flag==0)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
    }
    f.close();
}

/********************** SHORTING BY GENDER **********************/

void search_by_gender()
{
    STUDENT s;
    int count = 0;
    char sex[10];
    int i=0;
    ifstream f("Record.dat");
   
    system("cls");
    cout << "\n\t\t\t\t\t*****************************************";
    cout << "\n\t\t\t\t\t    -->> SEARCH DATA BY GENDER <<--    ";
    cout << "\n\t\t\t\t\t*****************************************";

    cout << "\n\n\t\t\t\t\t     Enter Gender: ";
    cin >> sex;
    cout<<"\n\n";
    cout<<"\t\t\t\t                     LIST OF "<<sex<<" STUDENTS        "<<"\n\n";
    cout<<"\t\t\t\t"<<"---------------------------------------------------------------"<<"\n";
    cout<<"\t\t\t\t"<<" SL.NO:"<<"\t"<<"     UID"<<"\t      "<<"NAME"<<"\t"<<"   PERCENTAGE"<<"\t"<<"CLASS"<<"\n";
    cout<<"\t\t\t\t"<<"---------------------------------------------------------------"<<"\n\n";
    if (!f)
    {
        cout << "\nFile Not Found!";
    }
    else
    {
        f.read((char *)&s, sizeof(s));
    }
    while (!f.eof())
    {
        
        if (strcmp(sex, s.gender) == 0) 
        {
            count++;
            i+=1;
            cout<<"\t\t\t\t   ";
            cout<<i<<". "<<"\t";
            cout<<"  "<<s.uid<<"\t"<<s.name<<"\t      "<<s.per<<"%"<<"\t"<<s.stu_class<<s.div;
            cout<<endl;
        }
        f.read((char *)&s, sizeof(s));
    }
    if (count == 0)
    {
        cout << "\nRecord Not Found!";
    }
    f.close();
    cout << "\n\nPress Any Key To Continue..";
    getch();
}

/***********************SORTING BY PERCENTAGE***********************/
void sortper()
{
    STUDENT s,t[100],temp;
    ifstream f("Record.dat");
    int n=0;
    if(!f)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        {
            while(f.read((char*)&s,sizeof(s)))
            {
                t[n++]=s;
            }
        }
        f.close();

        for(int i=0;i< n; i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(t[j].per<t[j+1].per)
                {
                    temp=t[j];
                    t[j]=t[j+1];
                    t[j+1]=temp;
                }
            }
        }

/*******************DISPLAYING THE SORTED RECORDS*******************/
        cout<<"\t\t\t  -----------------------------------"<<"\n";
        cout<<"\t\t\t     LIST OF CLASS RECORDS(SORTED)"<<"\n";
        cout<<"\t\t\t  -----------------------------------"<<"\n\n";
        for(int i=0;i<n;i++)
        {
            t[i].display_all();
            cout<<"\n\n\n\t\t---------------------------------------------\n\n\n";
        }
        getch();
    }
}

/**************************SORTING BY MARK**************************/
void sortmark()
{
    STUDENT s,t[100],temp;
    ifstream f("Record.dat");
    int x,y,n=0;
    char ch[25];
    if(!f)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        {
            while(f.read((char*)&s,sizeof(s)))
            {
                t[n++]=s;
            }
        }
        f.close();

        cout<<"\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t  ----------------------------------------"<<"\n";
        cout<<"\t\t\t\t\t |            SELECT A SUBJECT            |"<<"\n";
        cout<<"\t\t\t\t\t  ---------------------------------------- "<<"\n";
        cout<<"\t\t\t\t\t |                                        | "<<"\n";
        cout<<"\t\t\t\t\t |            1. PHYSICS                  | "<<"\n";
        cout<<"\t\t\t\t\t |            2. CHEMISTRY                | "<<"\n";
        cout<<"\t\t\t\t\t |            3. MATHS                    | "<<"\n";
        cout<<"\t\t\t\t\t |            4. BIOLOGY OR COMPUTER      | "<<"\n";
        cout<<"\t\t\t\t\t |            5. ENGLISH                  | "<<"\n";
        cout<<"\t\t\t\t\t |________________________________________| "<<"\n\n";
        cout<<"\t\t\t\t\t      ENTER YOUR OPTION: ";
        cin>>y;
        system("cls");
        cout<<endl;
        if(y>5)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
        else
        x=y-1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(t[j].marks[x]<t[j+1].marks[x])
                {
                    temp=t[j];
                    t[j]=t[j+1];
                    t[j+1]=temp;
                }
            }
        }

/*******************DISPLAYING THE SORTED RECORDS*******************/
        cout<<"\n\n\n";
        cout<<"\n\n\t\t\t                LIST OF TOP 5 HIGHEST MARKS SCORER             "<<"\n\n";
        cout<<"\t\t\t"<<"---------------------------------------------------------------"<<"\n";
        cout<<"\t\t\t"<<" SL.NO:"<<"\t"<<"     UID"<<"\t      "<<"NAME"<<"\t"<<"    MARKS"<<"\t"<<"CLASS"<<"\n";
        cout<<"\t\t\t"<<"---------------------------------------------------------------"<<"\n\n";
        for(int i=0;i<5;++i)
        {
            cout<<"\t\t\t   ";
            cout<<i+1<<". "<<"\t";
            cout<<"  "<<t[i].uid<<"\t"<<t[i].name<<"\t      "<<t[i].marks[x]<<"\t"<<t[i].stu_class<<t[i].div;
            cout<<endl;
        }
        cout<<"\n\n\n";
    }
}


/****************** STATISTICS (TEACHER) ******************/

void statistics()
{ 
    int n;
    cout<<"\n\n\n\n\n";
    cout<<"\t\t\t\t              --------------------"<<"\n";
    cout<<"\t\t\t\t             /   STATISTICS      /"<<"\n";
    cout<<"\t\t\t\t            --------------------"<<"\n";
    cout<<"\t\t\t\t -----------------------------------------------"<<"\n";
    cout<<"\t\t\t\t |                                             |"<<"\n";
    cout<<"\t\t\t\t |      1. ASCENDING ORDER OF PERCENTAGE       |"<<"\n";
    cout<<"\t\t\t\t |                                             |"<<"\n";
    cout<<"\t\t\t\t |      2. TOP FIVE MARKS IN EACH SUBJECT      |"<<"\n";
    cout<<"\t\t\t\t |                                             |"<<"\n";
    cout<<"\t\t\t\t |      3. BY GENDER                           |"<<"\n";
    cout<<"\t\t\t\t |                                             |"<<"\n";
    cout<<"\t\t\t\t |      4. PREVIOUS MENU                       |"<<"\n";
    cout<<"\t\t\t\t |                                             |"<<"\n";
    cout<<"\t\t\t\t -----------------------------------------------"<<"\n\n";
    cout<<"\t\t\t\t           ENTER YOUR OPTION: ";
    cin>>n;
    system("cls");
    switch(n)
    {
        case 1: sortper();
        break;
        case 2: sortmark();
        break;
        case 3: search_by_gender();
        break;
        case 4: Teacher();
        break;
        default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
}


/**********************DISPLAYING INTRODUCTION**********************/
void Intro()
{
    cout<<"\n\n\n\t\tA PROGRAM BY : -";
    Sleep(1000);
    cout<<"\n\n\n\t\t\t\t\tSUDHANSHU SINHA";

    Sleep(3500);
    system("cls");
    for(int i=1;i<=100;++i)
    {
        Sleep(5);
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWELCOME TO";
        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tLOADING "<<i<<"%";
        if(i==100)
        {
            Sleep(1000);
        }
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tSTUDENT MANAGEMENT SYSTEM";
    Sleep(3000);
    system("cls");
}


/************************* FORGOT PASSWORD *************************/

void forgot_password()
{
    STUDENT s;
    ifstream f("record.dat");
    char f_uid[11];
    int f_class;
    char f_sec[2];
    char f_dob[15];
    char f_tel_no[15];
    int flag=0;
    if(!f)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\n\n";
        cout<<"\t\t\t\t\t ------------------------------------------------------- "<<"\n";
        cout<<"\t\t\t\t\t|            DETAILS FOR PASSWORD RECOVERY              |"<<"\n";
        cout<<"\t\t\t\t\t ------------------------------------------------------- "<<"\n\n";
        cout<<"\t\t\t\t\t          UID: ";
        cin>>f_uid;
        cout<<"\t\t\t\t\t          CLASS: ";
        cin>>f_class;
        cout<<"\t\t\t\t\t          SECTION: ";
        cin>>f_sec;
        cout<<"\t\t\t\t\t          DATE OF BIRTH(DD/MM/YYYY): ";
        cin>>f_dob;
        cout<<"\t\t\t\t\t          TELEPHONE No.: ";
        cin>>f_tel_no;
        system("cls");
        while(f.read((char*)&s,sizeof(s)))
        {
            if((strcmp(f_uid,s.uid)==0) && (f_class+=s.stu_class) && (strcmp(f_sec,s.div)==0) && (strcmp(f_dob,s.dob)==0) && (strcmp(f_tel_no,s.tel_no)==0))
            {
                flag=1;
                cout<<"\n\n\n\n\n";
                cout<<"\t\t\t\t\t     YOUR PASSWORD IS: - "<<s.sec_code<<"\n\n";
                Sleep(3000);
                Student();
            }
        }
        if(flag==0)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
    }
    f.close();


}


/*************************PASSWORD MODIFICATION FUNCTION*************************/

void change_pass()
{
    STUDENT s;
    ifstream f1("Record.dat");
    ofstream f2("Temp.dat",ios::binary);
    int flag=0;
    char option;
    char c_uid[11];
    char c_pass[10];
    if(!f1)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        cout<<"\n\n\n\n\n\t\t\t\t"; 
        cout<<"ENTER YOUR UID : "<<"\n\n\n";
        cin>>c_uid;
        cout<<"\t\t\t\tENTER YOUR CURRENT PASSWORD : "<<"\n";
        cin>>c_pass;
        system("cls");
        while(f1.read((char *)&s,sizeof(s)))
        {
            if((strcmp(c_pass,s.sec_code)==0) && (strcmp(c_uid,s.uid)==0))
            {
                cout<<"\n\n\n\t\t\t\tENTER YOUR NEW PASSWORD : ";
                cin>>s.sec_code;
                f2.write((char*)&s,sizeof(s));
                flag=1;
            }
            else
            {
                f2.write((char*)&s,sizeof(s));
            }
        }
        if(flag==0)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
        else
        {
            cout<<"\n\n\n\n\n\n\t\t\t\tPASSWORD SUCCESSFULLY MODIFIED !\n\n\n";

        }
    }
    f1.close();
    f2.close();
    remove("Record.dat");
    rename("Temp.dat","Record.dat");
}


/****************** STUDENT LOGIN ******************/

void student_login()
{
    int count=0;
    init:
    STUDENT s;
    ifstream f("Record.dat");
    char n[11];
    char a[10];
    int flag=0;
    if(!f)
    {
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tFILE NOT FOUND!";
        cout<<"\n\n\n\n\n\n\n\n";
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n";
        cout<<"\t\t\t\t\t  ENTER YOUR UID: ";
        cin>>n;
        cout<<"\n";
        cout<<"\t\t\t\t\t  ENTER YOUR SECURE CODE: ";
        cin>>a;
        while(f.read((char*)&s,sizeof(s)))
        {
            if((strcmp(n,s.uid)==0) && (strcmp(a,s.sec_code)==0))
            {
                flag=1;
                start:
                system("cls");
                cout<<"\n\n\n\n\n\t\t\t\t\t\tWELCOME "<<s.name<<"  !!"<<"\n";
                int choice;
                cout<<"\n\n";
                cout<<"\t\t\t\t\t -------------------------------------- "<<"\n";
                cout<<"\t\t\t\t\t|            STUDENT MENU              |"<<"\n";
                cout<<"\t\t\t\t\t -------------------------------------- "<<"\n";
                cout<<"\t\t\t\t\t |                                    | "<<"\n";
                cout<<"\t\t\t\t\t |    1. VIEW YOUR REPORT CARD        | "<<"\n";
                cout<<"\t\t\t\t\t |                                    | "<<"\n";
                cout<<"\t\t\t\t\t |    2. VIEW CLASS STATISTICS        | "<<"\n";
                cout<<"\t\t\t\t\t |                                    | "<<"\n";
                cout<<"\t\t\t\t\t |    3. CHANGE YOUR PASSWORD         | "<<"\n";
                cout<<"\t\t\t\t\t |                                    | "<<"\n";
                cout<<"\t\t\t\t\t |    4. GO TO MAIN MENU              | "<<"\n";
                cout<<"\t\t\t\t\t |____________________________________| "<<"\n\n";
                cout<<"\t\t\t\t\t\t  ENTER YOUR OPTION: ";
                cin>>choice;
                system("cls");
                switch(choice)
                {
                    case 1:s.display_report();
                    break;
                    case 2:statistics();
                    break;
                    case 3:change_pass();
                    break;
                    case 4:Main_menu();
                    break;
                    default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!!";
                    cout<<"\n\n\n\n\n\n\n\n";
                    break;
                }
                system("PAUSE");
                goto start;

            }
            else
            {
                system("cls");
                cout<<"\n\n\n\n\n\t\t\t\t\t";
                cout<<"UID OR PASSWORD IS WRONG!!\n";

            }
        }
        if(flag==0)
        {
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tRECORD NOT FOUND!";
            cout<<"\n\n\n\n\n\n\n\n";
        }
        f.close();
    }
}


/*******************MAIN MENU*******************/
void Main_menu()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n";
     cout<<"\t\t\t\t                        ----|   -    -               "<<"\n";
     cout<<"\t\t\t\t                       |        |    |               "<<"\n";
     cout<<"\t\t\t\t                       |        |    |               "<<"\n";  
     cout<<"\t\t\t\t                        ----|    ----                "<<"\n";                       
     cout<<"\t\t\t\t                   ------------------------              "<<"\n";
     cout<<"\t\t\t\t                  |        MAIN MENU       |             "<<"\n";
     cout<<"\t\t\t\t                   ------------------------              "<<"\n\n\n";
     cout<<"\t\t\t\t                      SELECT DESIGNATION             "<<"\n\n";
     cout<<"\t\t\t\t          -------------------------------------------"<<"\n";
     cout<<"\t\t\t\t              |            1. TEACHER           |    "<<"\n";
     cout<<"\t\t\t\t              |                                 |    "<<"\n";
     cout<<"\t\t\t\t              |            2. STUDENT           |    "<<"\n";
     cout<<"\t\t\t\t              |                                 |    "<<"\n";
     cout<<"\t\t\t\t              |            3. PUBLIC            |    "<<"\n";
     cout<<"\t\t\t\t          -------------------------------------------"<<"\n\n";
     cout<<"\t\t\t\t                      (PRESS 4 TO EXIT)"<<"\n\n\n";
     cout<<"\t\t\t\t                      ENTER AN OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: system("cls");
                      Password();
                      break;
              case 2: Student();
                      break;
              case 3: Public();
                      break;
              case 4: exit(0);
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION! PLEASE CHOOSE BETWEEN 1 TO 4.";
                      cout<<"\n\n\n\n\n\n\n\n";
                      system("PAUSE");
     }
     goto start;
}


/*************************TEACHER FUNCTION*************************/
void Teacher()
{
     int n;
     start:
     system("cls");
     cout<<"\n\n\n\n\n\n";
     cout<<"\t\t\t\t\t  ------------------------------------------------ "<<"\n";
     cout<<"\t\t\t\t\t |                 TEACHER'S MENU                 |"<<"\n";
     cout<<"\t\t\t\t\t  ------------------------------------------------ "<<"\n";
     cout<<"\t\t\t\t\t   |                                            |  "<<"\n";
     cout<<"\t\t\t\t\t   |            1. ADD A NEW RECORD             |  "<<"\n";
     cout<<"\t\t\t\t\t   |            2. SEARCH FOR A RECORD          |  "<<"\n";
     cout<<"\t\t\t\t\t   |            3. MODIFY A RECORD              |  "<<"\n";
     cout<<"\t\t\t\t\t   |            4. DELETE A RECORD              |  "<<"\n";
     cout<<"\t\t\t\t\t   |            5. DISPLAY ALL RECORDS          |  "<<"\n";
     cout<<"\t\t\t\t\t   |            6. CLASS STATISTICS             |  "<<"\n";
     cout<<"\t\t\t\t\t   |            7. GO TO MAIN MENU              |  "<<"\n";
     cout<<"\t\t\t\t\t   |                                            |  "<<"\n";
     cout<<"\t\t\t\t\t   |____________________________________________|  "<<"\n\n";
     cout<<"\t\t\t\t\t      ENTER YOUR OPTION: ";
     cin>>n;
     system("cls");
     switch(n)
     {
              case 1: add();
                      break;
              case 2: search();
                      break;
              case 3: modify();
                      break;
              case 4: del();
                      break;
              case 5: disp_all();
                      break;
              case 6: statistics();
                      break;
              case 7: Main_menu();
                      break;
              default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!";
                      cout<<"\n\n\n\n\n\n\n\n";
     }
     system("PAUSE");
     goto start;
}


/****************** STUDENT LOGIN MENU ******************/
void Student()
{
    int option;
    start:
    system("cls");
    cout<<"\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t ----------------------------------------------"<<"\n";
    cout<<"\t\t\t\t\t|                 STUDENT LOGIN                | "<<"\n";
    cout<<"\t\t\t\t\t ----------------------------------------------"<<"\n";
    cout<<"\t\t\t\t\t  |                                          | "<<"\n";
    cout<<"\t\t\t\t\t  |      1. LOGIN NOW                        | "<<"\n";
    cout<<"\t\t\t\t\t  |                                          | "<<"\n";
    cout<<"\t\t\t\t\t  |      2. FORGOT PASSWORD                  | "<<"\n";
    cout<<"\t\t\t\t\t  |                                          | "<<"\n";
    cout<<"\t\t\t\t\t  |      3. GO TO MAIN MENU                  | "<<"\n";
    cout<<"\t\t\t\t\t  |__________________________________________| "<<"\n";
    cout<<"\t\t\t\t\t       ENTER YOUR OPTION: ";
    cin>>option;
    switch (option)
    {
        case 1:student_login();
        break;

        case 2:
        system("cls");
        forgot_password();
        break;

        case 3:Main_menu();
        break;
        
        default:
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!!";
        cout<<"\n\n\n\n\n\n\n\n";
        break;
    }
    system("PAUSE");
    goto start;
}


/**************************PUBLIC FUNCTION**************************/
void Public()
{
    int n;
    start:
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t -------------------------------------- "<<"\n";
    cout<<"\t\t\t\t\t|             PUBLIC MENU              |"<<"\n";
    cout<<"\t\t\t\t\t -------------------------------------- "<<"\n";
    cout<<"\t\t\t\t\t |                                    | "<<"\n";
    cout<<"\t\t\t\t\t |    1. VIEW CLASS STATISTICS        | "<<"\n";
    cout<<"\t\t\t\t\t |                                    | "<<"\n";
    cout<<"\t\t\t\t\t |    2. GO TO MAIN MENU              | "<<"\n";
    cout<<"\t\t\t\t\t |____________________________________| "<<"\n\n";
    cout<<"\t\t\t\t\t\t  ENTER YOUR OPTION: ";
    cin>>n;
    system("cls");
    switch(n)
    {
             case 1: statistics();
                     break;
             case 2: Main_menu();
                     break;
             default:cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tWRONG OPTION!!";
                     cout<<"\n\n\n\n\n\n\n\n";
    }
    system("PAUSE");
    goto start;
}


/*************************PASSWORD FUNCTION*************************/
void Password()
{
     char pass[10];
     pass[9]='\0';
     int t=0;
     start:
     cout<<"\n\n\n\n\n\n\n\n\n\t\t\tENTER THE PASSWORD: ";
     for(int i=0;i<9;++i)
     {
             pass[i]=getch();
             cout<<"*";
     }
     cout<<"\n\n";
     if(strcmp(pass,"Sudhanshu")==0)
     {
         cout<<"\t\t\t      ACCESS GRANTED";
         Sleep(2000);
         system("cls");
         Teacher();
     }
     else
     {
         if(t==2)
         {
             cout<<"\t\t\t      ACCESS DENIED"<<"\n\n\n\n\n\n\n\n";
             system("PAUSE");
             system("cls");
             Main_menu();
         }
         cout<<"\t\t\t      TRY AGAIN";
         ++t;
         Sleep(1000);
         system("cls");
         goto start;
     }
}

/***************************MAIN FUNCTION***************************/
int main()
{
    system("title STUDENT MANAGEMENT SYSTEM");
    system("COLOR F0");

    Intro();
    Main_menu();
    getch();
    return 0;
}















