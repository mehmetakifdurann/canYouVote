//
//  main.c
//  canYouVote
//
// This program is checking that the person who uses this can vote or not. First he inputs the age that the voter can vote then his own age. And the program says that he can vote or not.
//
//  Created by Akif Duran
//

#include <stdio.h>
int main (){
    
    int voteAge, age;
    
    //getting the vote age in users country.
    printf("Please enter the voting age in your country: \n");
    scanf("%d", &voteAge);
    
    //getting the users age
    printf("Please enter the age you want to check: \n");
    scanf("%d", &age);
    
    if(voteAge <=age ){
        printf("This person can vote in the elections.\n");
    }else {
        printf("This person can not vote in the elections. \n ");
    }
    
    return 0;
}
