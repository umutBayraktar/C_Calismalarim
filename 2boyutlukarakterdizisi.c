
 
 #define DAYSINWEEK 7 
 
 
 #define CHARSINDAY 10 
 
 
 
static char days[DAYSINWEEK][CHARSINDAY] =  {"Sunday", "Monday", "Tuesday","Wednesday", 
 
        "Thursday", "Friday", "Saturday"}; 
 
 
 
int main() { 
 
    int i, j; 
 
    //Serial.begin(9600);   // Serial link to PC char
 
    for (i = 0; i < DAYSINWEEK; i++) { 
 
      printf("%c\n",(char)days[i][0]);  // Show the lvalue 
 
      printf("\n\n "); 
 
      for (j = 0; days[i][j]; j++) { 
 
        printf("%s\n",days[i][j]);    // Show each char 
 
      } 
 
      //Serial.println(); 
 
    } 
 return 0;
 
 } 
