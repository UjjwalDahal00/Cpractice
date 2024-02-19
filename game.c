#include <stdio.h>
#include <conio.h>
void choosegame();
void displaymenu();
void videogame();
void business();
void fashion();
void nepal();

int main(){
    int input;
    printf("---------Welcome To QnA Session-----------");
    printf("\n\n");
    loop:
    displaymenu();
    scanf("%d",&input);
    
    switch (input)
    {
    case 1:
        videogame();
        goto loop;
    
    case 2:
        business();
        goto loop;
        
    case 3:
        fashion();
        goto loop;

    case 4:
        nepal();
        goto loop;

    
    default:
        printf("\nChoose between (1-4) to start a QnA \n");
        goto loop;
        break;
    
    }

    return 0;
}

void displaymenu(){
    
    printf("What Related Question you want to solve?\n");

    printf("\n1.Video Games\n");
    
    printf("\n2.Business\n");
    
    printf("\n3.Fashion Design\n");
   
    printf("\n4.History of Nepal\n");
    
}

void choosegame(){
int input;
scanf("%d",&input);
switch (input)
{
case 1:
    printf("Wow Valorent is Wonderful Game\n");
    break;
case 2:
    printf("Wow PUBG MOBILe is Wonderful Game\n");
    break; 
case 3:
    printf("Wow Freefire is Trash Game\n");
    break;
case 4:
    printf("Wow ApexLegend is Wonderful Game\n");
    break;

default:
    printf("Invalid Input\n");
    break;
}

}

void videogame(){
    char in;
    printf("\n1.Do you want to play game? (yes/No)\n");
        scanf(" %c",&in);
        if (in=='y' ||in=='Y')
        {
            printf("\nWhich Game you like to play?\n");
            printf("\n1.Valorant\n2.PUBG MOBILE\n3.FreeFire\n4.ApexLegend\n");
            choosegame();
            
        }
        else if (in=='n' ||in=='N')
        {
            printf("\nYou should play games, You're a boring person\n");
        }
       else
       {
        printf("\nInvalid Input\n");
        
       }
        
        getch();

}

void business(){
    char inp;
    int input1;
    printf("\nDo you like to start your business? (yes/No)\n");
    scanf(" %c",&inp);
    if (inp=='y'|| inp=='Y')
    {
        printf("What kind of business You like to do?\n");
        printf("\n1.Family Business\n2.Self Start\n3.Ecommerce\n4.NONE OF ABOVE\n");
        scanf("%d",&input1);
        switch (input1)
        {
        case 1:
            printf("\nYoure a family guy Congratulation.\n");
            break;
        case 2:
            printf("\nWelcome to the group my friend, Youre on right path\n");
            break;
        case 3:
            printf("\nEcommerce is not a bad idea, Keep up Youll do great\n");
            break;
        case 4:
            printf("\nGet a life man, Dream something\n");
            break;
        
        default:
            printf("\nI got it, You wanted to be cool. now go back and choose (1-4)\n");
            break;
        }
    }
    else if (inp=='n' || inp=='N')
    {
        printf("\nYou gotta dream something man, Get up and start dreaming in reality\n");
    }
    else{

        printf("Type (y/n) for yes/no\n");
       
    }
    
    getch();
    

}

void fashion(){
    char gen;
    int fash;
    printf("\nAre you Male or female?\n");
    scanf(" %c",&gen);
    if (gen=='m'||gen=='M')
    {
        printf("What do you like about fashion?\n");
        printf("\n1.Dress\n2.Style\n3.Modeling\n4.Nothing\n");
        scanf("%d",&fash);
        switch (fash)
        {
        case 1:
            printf("Dressing Unique is a fashion\n");
            break;
        case 2:
            printf("Style what you like\n");
            break;
        case 3:
            printf("Modeling is Great\n");
            break;
        case 4:
            printf("Get a Life\n");
            break;
        
        default:
            printf("Choose Something man\n");
            break;
        }
    }
    else if (gen=='F'||gen=='f')
    {
       printf("\nWhat do you like about fashion?\n");
        printf("\n1.Dress\n2.Style\n3.Modeling\n4.Nothing\n");
        scanf("%d",&fash);
        switch (fash)
        {
        case 1:
            printf("Dressing Unique is a fashion\n");
            break;
        case 2:
            printf("Style what you like\n");
            break;
        case 3:
            printf("Modeling is Great\n");
            break;
        case 4:
            printf("Get a Life\n");
            break;
        
        default:
            printf("Choose Something man\n");
            break;
        }
    }
    else{
        printf("Choose (M/m)for MAle and (F/f)for Female\n");
    }
    getch();
    
}

void nepal(){
    char nep;
    int district; 
    printf("Do you live in Nepal ?\n");
    scanf(" %c",&nep);
    if (nep=='Y' ||nep=='y')
    {
        printf("Where do you live in nepal\n");
        printf("1.Jhapa\n2.Kathmandu\n3.Butwal\n4.Bhaktapur\n5.Lalitpur\n");
        scanf("%d",&district);
        switch (district)
        {
        case 1:
            printf("\nWhat Do you like about jhapa?\n");
            break;
        case 2:
            printf("\nWhat Do you like about Kathmandu?\n");
            break;
        case 3:
            printf("\nWhat Do you like about Butwal?\n");
            break;
        case 4:
            printf("\nWhat Do you like about Bhaktapur?\n");
            break;
        case 5:
            printf("\nWhat Do you like about Lalitpur?\n");
            break;
        
        default:
            printf("Choose Between (1-5) ");
            break;
        }
    }
    else if (nep=='n'||nep=='N')
    {
        printf("Visit Nepal 2020 ");
    }
    else {
        printf("Choose (y/Y)for yes and (n/N)for no");
    }
    getch();
    
}
