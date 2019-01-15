/* You are given a coin and road.You will start from beginning of road and reach to n. point of the road(n = ∞).
You will move according to coin. Throw the coin.If it comes heads you can go 1 step otherwise 2. 
WHAT IS THE PROBABİLİTY OF REACHING TO THE n. POINT ? */



#include <stdio.h>
#include <time.h>


int main (){
  
  srand(time(NULL));
  
  int i,j,n,current_position,dice; 
  double coming;
  n=10000;                        // n=10000 means finite
  current_position=0;             // beginning of the road
  
  for(i=0;i<100000;i++){          // lets try 100000 times.
    for(j=0;j<10000;j++){
      dice = rand()%2;            // heads=0 or tails=1
      if(n==0){                   // if it comes heads
        current_position+=1;
          if(current_position==n){ //did i reach ? 
            coming++; 
            current_position=0;
          }        
      }
      if(n==1){
        current_position+=2;
          if(current_position==n){
            coming++;
            current_position=0;
          }        
      }
    } 
    if(current_position!=n){
      current_position=0;
    }    
  }
  
  printf("Probability of reaching = %d",coming/100000);
  




  return 0 ;
}




// if we increase trials, we get almost 2/3=0,66666..