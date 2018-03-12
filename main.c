#include <wiringPi.h>
#include <stdio.h>
#include <string.h>


void blinkshort(int n);
void blinklong(int n);
void pause(int n);
void morse(char c);
void finished();


int main (void)
{
    wiringPiSetup () ;
    pinMode (0, OUTPUT) ;
    
    char text[] = "SOS";
    printf("Text eingeben: \n");
    scanf("%s",&text);
    int len = strlen(text);
    char c;
    printf("Text: %s hat Länge %i\n",text,len);
    
    for (int i=0;i<len;i++){
        c = text[i];
        printf("%c\n",c);
        morse(c);
        pause(3); //Nach jedem Buchstaben 7 Pause
    }
    
    printf("Fertig!\n");
    finished();
    return 0 ;
}



void morse(char c){
    switch(c){
            
        case 'A':case'a':
            blinkshort(1);
            blinklong(1);
            break;
            
        case 'B':case'b':
            blinklong(1);
            blinkshort(3);
            break;
            
        case 'C':case'c':
            blinklong(1);
            blinkshort(1);
            blinklong(1);
            blinkshort(1);
            break;
            
        case 'D':case'd':
            blinklong(1);
            blinkshort(2);
            break;
            
        case 'E':case'e':
            blinkshort(1);
            break;
            
        case 'F':case'f':
            blinkshort(2);
            blinklong(1);
            blinkshort(1);
            break;
            
        case 'G':case'g':
            blinklong(2);
            blinkshort(1);
            break;
            
        case 'H':case'h':
            blinkshort(4);
            break;
            
        case 'I':case'i':
            blinkshort(2);
            break;
            
        case 'J':case'j':
            blinkshort(1);
            blinklong(3);
            break;
            
        case 'K':case'k':
            blinklong(1);
            blinkshort(1);
            blinklong(1);
            break;
            
        case 'L':case'l':
            blinkshort(1);
            blinklong(1);
            blinkshort(2);
            break;
            
        case 'M':case'm':
            blinklong(2);
            break;
            
        case 'N':case'n':
            blinklong(2);
            blinkshort(1);
            break;
            
        case 'O':case'o':
            blinklong(3);
            break;
            
        case 'P':case'p':
            blinkshort(1);
            blinklong(2);
            blinkshort(1);
            break;
            
        case 'Q':case'q':
            blinklong(2);
            blinkshort(1);
            blinklong(1);
            break;
            
        case 'R':case'r':
            blinkshort(1);
            blinklong(1);
            blinkshort(1);
            break;
            
        case 'S':case's':
            blinkshort(3);
            break;
            
        case 'T':case't':
            blinklong(1);
            break;
            
        case 'U':case'u':
            blinkshort(2);
            blinklong(1);
            break;
            
        case 'V':case'v':
            blinkshort(3);
            blinklong(1);
            break;
            
        case 'W':case'w':
            blinkshort(1);
            blinklong(2);
            break;
            
        case 'X':case'x':
            blinklong(1);
            blinkshort(2);
            blinklong(1);
            break;
            
        case 'Y':case'y':
            blinklong(1);
            blinkshort(1);
            blinklong(2);
            break;
            
        case 'Z':case'z':
            blinklong(2);
            blinkshort(2);
            break;
            
        case ' ':
            pause(7); //Nach Woertern 7 Pause
            break;
    }
};

//Dit
void blinkshort(int n){
    for (int i=0;i<n;i++){
        digitalWrite (0, HIGH) ; delay (500) ;
        digitalWrite (0,  LOW) ; delay (500) ;
    }
}

//Pause
void pause(int n){
    for (int i=0;i<n;i++){
        digitalWrite (0,  LOW) ; delay (500) ;
    }
}

//Dah
void blinklong(int n){
    for (int i=0;i<n;i++){
        digitalWrite (0, HIGH) ; delay (1500) ;
        digitalWrite (0,  LOW) ; delay (500) ;
    }
}

//Fuer mich zur Kontrolle
void finished(){
    for (int i=0;i<5;i++){
        digitalWrite (0, HIGH) ; delay (100) ;
        digitalWrite (0,  LOW) ; delay (100) ;
    }
}

