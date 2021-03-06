#include <stdio.h>
//A child can take either 1, 2 or 3 steps in a stairs count the
//possible number of ways with which he can climb the stairs 

int map[100] = {[0 ... 99] = -1};

int countways(int, int map[]);

int main(){
  printf("Enter the N:\t");
  int p;
  scanf("%d",&p);
  //printf("%d",map[p]);
  printf("\nNo of ways""%d\n",countways(p, map));
  return 0;
}

int countways(int k, int map[]){
  if(k < 0)
    return 0;
  if(k == 0)
    return 1;
  if(map[k] > -1)
    return map[k];
  map[k]= countways((k-1),map) + countways((k-2),map) + countways((k-3),map);
  return map[k];
}




