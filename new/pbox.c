
#include<stdio.h>

void main(){
    int i,j,m,n=7;
    int p[8][8] =  {1,1,0,1,0,0,1,1,
                    0,0,1,1,0,1,0,0,
                    1,1,1,0,0,1,0,0,
                    1,1,0,0,0,0,0,1,
                    1,0,0,0,0,0,1,1,
                    0,0,0,1,1,1,0,0,
                    0,0,1,1,1,1,0,1,
                    1,1,1,0,0,0,0,1};

    int box[8][8];
        
	
    for(i=0;i<=n;i++){
    	for(j=0;j<=n;j++){
    		box[i][j]=p[7-i][j];
		}
			                   
    }
   
		for(j=0;j<8;j++){
			if( j%2==1){
				for(i=0;i<8;i++){
					printf("%d",box[i][j]);
				}
				printf("\n");
			}	
		}				

		for(j=0;j<8;j++){
			if( j%2==0){
				for(i=0;i<8;i++){
					printf("%d",box[i][j]);
				}
				printf("\n");
			}	
		}				
}

/*
OUTPUT:
Mayanks-MacBook-Pro:~ Mayank$ cd Desktop/
Mayanks-MacBook-Pro:Desktop Mayank$ gcc pbox.c 
Mayanks-MacBook-Pro:Desktop Mayank$ ./a.out
10001101
01100011
01100110
11011001
10011101
11000110
01100000
00010001

*/

	
	
	

