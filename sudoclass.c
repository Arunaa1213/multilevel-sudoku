#include<stdio.h>
int s[9][9];
void display()
{
    printf("\t");
    int k,i,j;
    for ( k = 1 ; k <= 9 ; k++ )
    	printf("%d\t",k);
    printf("\n\n");
    for ( i = 0 ; i < 9 ; i++ )
    {
        printf("%d\t",i+1);
        for (  j = 0 ; j < 9 ; j++ )
        {
            if(s[i][j]!=0)
           		printf("%d\t",s[i][j]);
            else
            	printf("_\t");
        }
        printf("\n\n");
    }
}

struct sudo{
	int p;
	int q;
}s1;

void sudoku (int c)
{
    int m,n,x,i,j,y,z,l;
    for (  l = c ; l > 0 ; l--)
    {
        printf("enter the ROW  and COLUMN where you want to enter the number...\n");
        scanf("%d%d",&m,&n);
        if(m==1||m==4||m==7)
        {
            s1.p=m;
        }
        if(m==2||m==5||m==8)
        {
            s1.p=m-1;
        }
        if(m==3||m==6||m==9)
        {
            s1.p=m-2;
        }
        if(n==1||n==4||n==7)
        {
            s1.q=n;
        }
        if(n==2||n==5||n==8)
        {
            s1.q=n-1;
        }
        if(n==3||n==6||n==9)
        {
            s1.q=n-2;
        }
        s1.p=s1.p-1;
        s1.q=s1.q-1;
        m=m-1;
        n=n-1;
        printf("Enter the NUMBER...\n");
        scanf("%d",&x);
        int a=0,b=0,c=0;
        for(i=0;i<9;i++)
        {
            if(s[m][i]!=x)
            a++;
        }
        if(a==9)
        {
            for(j=0;j<9;j++)
            {
                if(s[j][n]!=x)
                b++;
            }
        }
        if(b==9)
        {
            for(i=s1.p,y=0;y<3;i++,y++)
            {
                for(j=s1.q,z=0;z< 3;j++,z++)
                {
                    if(s[i][j]!=x)
                    c++;
                }
            }
        }
        if(c==9)
        {
            s[m][n]=x;
        }
        else
        {
            printf("OH NO! %d CANNOT BE PLACED IN  %dx%d POSITION\n",x,m,n);
            l++;
        }
        printf("\n");
        display();
    }
}
void details()
{
	char name[25];
	printf("Enter your NAME:");
	gets(name);
	printf("HELLO %s ! HAPPY TO SEE YOU HERE TO FACE THE SUDOKU CHALLENGE..!\n",name);
	printf("\n");
}
void title()
{
	printf("           _______            ______     _______                    \n");
	printf("          ||        ||    || ||     ||  ||     || ||    || ||    || \n");
	printf("          ||        ||    || ||      || ||     || ||  ||   ||    || \n");
	printf("          ||______  ||    || ||      || ||     || || ||    ||    || \n");
	printf("                 || ||    || ||      || ||     || |||      ||    || \n");
	printf("                 || ||    || ||      || ||     || || ||    ||    || \n");
	printf("          _______|| ||____|| ||_____||  ||_____|| ||  ||__ ||____|| \n");
	printf("\n");
}
void main()
{
    int *stage;
	int level,count,stg;
	stage = &stg;
	title();
	details();
    printf("ENTER THE STAGE\n");
    printf("1.easy \t 2.medium\t 3.hard\n");
    scanf("%d",&stg);
    printf("ENTER THE LEVEL IN STAGE....1-3...\n");
    scanf("%d",&level);
    switch(stg)
    {
        case 1: 
            switch(level)
                {
                    case 1: count = easy1();
                        break;
                    case 2: count = easy2();
                        break;
                    case 3: count = easy3();
                        break;
                }
            break;
        case 2: 
            switch(level)
                {
                    case 1: count = medium1();
                        break;
                    case 2: count = medium2();
                        break;
                    case 3: count = medium3();
                        break;        
                }
            break;
        case 3: 
            switch(level)
                {
                    case 1: count = hard1();
                        break;
                    case 2: count = hard2();
                        break;
                    case 3: count = hard3();
                        break;
                }
            break;
    }
    printf("\n");
    printf("ALL THE BEST !!!\n");
    printf("YOUR SUDOKU PUZZLE IS   :   \n");
    printf("\n");
    display();
    printf("\n");
    sudoku(count);
    printf("\n");
    printf("HURRAY!!!YOU HAVE SUCCESSFULLY COMPLETED THE PUZZLE...YOU'RE GENIUS");
}

int easy1()
{
    s[0][2]=4;
    s[0][4]=8;
    s[0][6]=3;
    s[1][5]=3;
    s[1][7]=4;
    s[1][8]=2;
    s[2][0]=8;
    s[2][3]=4;
    s[2][5]=5;
    s[2][6]=9;
    s[2][8]=7;
    s[3][0]=3;
    s[3][2]=2;
    s[3][4]=7;
    s[3][6]=5;
    s[3][8]=8;
    s[4][1]=5;
    s[4][7]=7;
    s[5][0]=6;
    s[5][2]=8;
    s[5][4]=9;
    s[5][6]=2;
    s[5][8]=1;
    s[6][0]=4;
    s[6][2]=6;
    s[6][3]=2;
    s[6][5]=7;
    s[6][8]=9;
    s[7][0]=5;
    s[7][1]=2;
    s[7][3]=9;
    s[8][2]=7;
    s[8][4]=1;
    s[8][6]=4;
    return (81-34);
}

int easy2()
{
    s[0][0]=4;
    s[0][1]=6;
    s[0][3]=8;
    s[0][5]=5;
    s[0][8]=3;
    s[1][2]=3;
    s[1][4]=7;
    s[2][1]=7;
    s[2][2]=5;
    s[2][3]=9;
    s[2][5]=1;
    s[2][7]=6;
    s[3][1]=8;
    s[3][2]=4;
    s[3][7]=7;
    s[4][0]=9;
    s[4][3]=7;
    s[4][5]=6;
    s[4][8]=1;
    s[5][1]=3;
    s[5][6]=6;
    s[5][7]=5;
    s[6][1]=9;
    s[6][3]=4;
    s[6][5]=2;
    s[6][6]=8;
    s[6][7]=3;
    s[7][4]=8;
    s[7][6]=5;
    s[8][0]=3;
    s[8][3]=5;
    s[8][5]=9;
    s[8][7]=2;
    s[8][8]=7;
    return (81-34);
}

int easy3()
{
    s[0][1]=6;
    s[0][3]=8;
    s[0][5]=3;
    s[0][6]=5;
    s[0][7]=9;
    s[1][0]=1;
    s[1][3]=5;
    s[1][5]=2;
    s[1][7]=6;
    s[1][8]=7;
    s[2][4]=9;
    s[2][6]=1;
    s[3][1]=9;
    s[3][6]=7;
    s[3][7]=2;
    s[4][0]=8;
    s[4][3]=6;
    s[4][5]=9;
    s[4][8]=3;
    s[5][1]=5;
    s[5][2]=6;
    s[5][7]=1;
    s[6][2]=5;
    s[6][4]=2;
    s[7][0]=9;
    s[7][1]=4;
    s[7][3]=3;
    s[7][5]=5;
    s[7][8]=1;
    s[8][1]=1;
    s[8][2]=2;
    s[8][3]=4;
    s[8][5]=7;
    s[8][7]=3;
    return (81-34);
}

int medium1()
{
    s[0][4]=9;
    s[0][5]=7;
    s[0][8]=6;
    s[1][0]=5;
    s[1][3]=2;
    s[1][6]=1;
    s[1][8]=8;
    s[2][0]=3;
    s[2][5]=1;
    s[2][7]=7;
    s[3][1]=9;
    s[3][2]=3;
    s[3][3]=8;
    s[3][5]=5;
    s[3][8]=7;
    s[4][4]=1;
    s[5][0]=4;
    s[5][3]=7;
    s[5][5]=6;
    s[5][6]=5;
    s[5][7]=9;
    s[6][1]=4;
    s[6][3]=1;
    s[6][8]=9;
    s[7][0]=8;
    s[7][2]=2;
    s[7][5]=9;
    s[7][8]=1;
    s[8][0]=9;
    s[8][3]=6;
    s[8][4]=4;
    return (81-31);
}

int medium2()
{
    s[0][1]=4;
    s[0][2]=6;
    s[0][3]=1;
    s[1][0]=2;
    s[1][3]=4;
    s[1][6]=1;
    s[2][1]=7;
    s[2][3]=5;
    s[2][4]=9;
    s[2][6]=2;
    s[3][1]=6;
    s[3][8]=9;
    s[4][0]=8;
    s[4][3]=2;
    s[4][5]=5;
    s[4][8]=7;
    s[5][0]=7;
    s[5][7]=6;
    s[6][2]=7;
    s[6][4]=1;
    s[6][5]=4;
    s[6][7]=5;
    s[7][2]=1;
    s[7][5]=3;
    s[7][8]=2;
    s[8][5]=2;
    s[8][6]=4;
    s[8][7]=8;
    return (81-28);
}

int medium3()
{
    s[0][4]=5;
    s[0][5]=9;
    s[0][8]=6;
    s[1][0]=8;
    s[1][3]=6;
    s[1][7]=3;
    s[1][8]=4;
    s[2][0]=6;
    s[2][5]=8;
    s[2][6]=5;
    s[3][1]=1;
    s[3][2]=6;
    s[3][3]=9;
    s[3][5]=7;
    s[3][8]=5;
    s[4][4]=8;
    s[5][0]=7;
    s[5][3]=1;
    s[5][5]=4;
    s[5][6]=6;
    s[5][7]=2;
    s[6][2]=7;
    s[6][3]=8;
    s[6][8]=2;
    s[7][0]=5;
    s[7][1]=8;
    s[7][5]=3;
    s[7][8]=1;
    s[8][0]=9;
    s[8][3]=7;
    s[8][4]=6;
    return (81-31);
}

int hard1()
{
    s[0][1]=8;
    s[0][4]=9;
    s[0][5]=4;
    s[1][2]=9;
    s[1][3]=1;
    s[1][4]=7;
    s[2][0]=4;
    s[2][2]=1;
    s[2][8]=3;
    s[3][2]=8;
    s[3][7]=2;
    s[4][0]=5;
    s[4][3]=9;
    s[4][4]=1;
    s[4][5]=3;
    s[4][8]=8;
    s[5][1]=9;
    s[5][6]=4;
    s[6][0]=3;
    s[6][6]=8;
    s[6][8]=6;
    s[7][4]=5;
    s[7][5]=8;
    s[7][7]=2;
    s[8][3]=2;
    s[8][4]=3;
    s[8][7]=4;
    return (81-27);
}

int hard2()
{
    s[0][4]=6;
    s[0][5]=1;
    s[0][7]=5;
    s[1][2]=8;
    s[1][6]=2;
    s[1][7]=1;
    s[2][3]=2;
    s[2][4]=5;
    s[2][8]=3;
    s[3][0]=7;
    s[3][7]=3;
    s[4][2]=3;
    s[4][3]=8;
    s[4][4]=1;
    s[4][5]=5;
    s[4][6]=9;
    s[5][1]=2;
    s[5][8]=5;
    s[6][0]=2;
    s[6][4]=8;
    s[6][5]=7;
    s[7][1]=3;
    s[7][2]=4;
    s[7][6]=8;
    s[8][1]=7;
    s[8][3]=3;
    s[8][4]=9;
    return (81-27);
}

int hard3()
{
    s[0][3]=5;
    s[0][4]=3;
    s[0][8]=9;
    s[1][2]=7;
    s[1][6]=5;
    s[1][7]=2;
    s[2][4]=8;
    s[2][5]=2;
    s[2][7]=3;
    s[3][0]=1;
    s[3][7]=9;
    s[4][2]=9;
    s[4][3]=7;
    s[4][4]=2;
    s[4][5]=3;
    s[4][6]=4;
    s[5][1]=5;
    s[5][8]=3;
    s[6][1]=1;
    s[6][3]=9;
    s[6][4]=4;
    s[7][1]=9;
    s[7][2]=6;
    s[7][6]=7;
    s[8][0]=5;
    s[8][4]=7;
    s[8][5]=1;
    return (81-27);
}
